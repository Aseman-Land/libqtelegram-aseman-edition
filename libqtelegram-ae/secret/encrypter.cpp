/*
 * Copyright 2014 Canonical Ltd.
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; version 3.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 *
 */

#include "encrypter.h"
#include "util/utils.h"
#include <openssl/sha.h>
#include <openssl/aes.h>
#include "util/tlvalues.h"
#include "telegram/coretypes.h"

Q_LOGGING_CATEGORY(TG_SECRET_ENCRYPTER, "tg.secret.encrypter")

#include <stdlib.h>



Encrypter::Encrypter(Settings *settings) :
    OutboundPkt(settings),
    mEncrExtra(0),
    mEncrPtr(0),
    mEncrStart(0),
    mEncrEnd(0),
    mSecretChat(0) {
}

void Encrypter::setSecretChat(SecretChat *secretChat) {
    mSecretChat = secretChat;
}

QByteArray Encrypter::generateEncryptedData(const DecryptedMessage &decryptedMessage) {

    ASSERT(mSecretChat);
    m_packetPtr = __buffer.data();

    startEncryption();

    if (mSecretChat->layer() >= 17) {
        appendInt(TL_DecryptedMessageLayer);
        appendBytes(Utils::generateRandomBytes());
        appendInt(CoreTypes::typeLayerVersion);
        appendInt(mSecretChat->getInSeqNoParam());
        appendInt(mSecretChat->getOutSeqNoParam());
    }

    decryptedMessage.push(this);
    endEncryption();

    return getGeneratedBytes();
}

QByteArray Encrypter::getGeneratedBytes() {
    qint32 dataInts = (mEncrEnd - mEncrStart);
    QByteArray encryptedData = QByteArray::fromRawData((char *)mEncrStart, dataInts * 4);
    return encryptedData;
}

void Encrypter::startEncryption() {
    mEncrStart = m_packetPtr;
    mEncrExtra = m_packetPtr;
    m_packetPtr += 2; // fingerprint
    m_packetPtr += 4; // msg_key
    m_packetPtr += 1; // len
}

void Encrypter::endEncryption() {
    // to calculate data length, start is taken after fingerprint, msg_key and len.
    // Length must be set in bytes
    int dataLength = (m_packetPtr - (mEncrExtra + 7)) * 4;
    // Once the length is calculated, the byte array is padded with random integers
    // until its length is divisible by 16 bytes
    while (((m_packetPtr - mEncrExtra) - 2) & 0xF) {
        int t;
        Utils::randomBytes(&t, 4);
        appendInt(t);
    }
    // Encryption key fingerprint is set at the beginning of the byte array.
    *(qint64 *)mEncrExtra = mSecretChat->keyFingerprint();
    mEncrExtra += 2;

    // move a pointer to the place, just after msg_key where the length will be set
    // length will be t
    mEncrPtr = mEncrExtra + 4;
    *mEncrPtr = dataLength;
    mEncrEnd = m_packetPtr;
    memcpy (mEncrExtra, encryptDecryptedMessage(), 16);
}

qint32 *Encrypter::encryptDecryptedMessage () {
    static qint32 msgKey[4];
    static uchar sha1a_buffer[20];
    static uchar sha1b_buffer[20];
    static uchar sha1c_buffer[20];
    static uchar sha1d_buffer[20];
    static uchar key[32];
    static uchar iv[32];

    qint32 x = *mEncrPtr;

    ASSERT(x >= 0 && !(x & 3));
    SHA1((uchar *)mEncrPtr, 4 + x, sha1a_buffer);
    memcpy(msgKey, sha1a_buffer + 4, 16);

    static uchar buf[64];
    // sha1_a = SHA1 (msg_key + substr (key, x, 32));
    memcpy(buf, msgKey, 16);
    memcpy(buf + 16, mSecretChat->sharedKey(), 32);
    SHA1(buf, 48, sha1a_buffer);

    // sha1_b = SHA1 (substr (key, 32+x, 16) + msg_key + substr (key, 48+x, 16));
    memcpy(buf, mSecretChat->sharedKey() + 32, 16);
    memcpy(buf + 16, msgKey, 16);
    memcpy(buf + 32, mSecretChat->sharedKey() + 48, 16);
    SHA1(buf, 48, sha1b_buffer);

    // sha1_с = SHA1 (substr (key, 64+x, 32) + msg_key);
    memcpy(buf, mSecretChat->sharedKey() + 64, 32);
    memcpy(buf + 32, msgKey, 16);
    SHA1(buf, 48, sha1c_buffer);

    // sha1_d = SHA1 (msg_key + substr (key, 96+x, 32));
    memcpy(buf, msgKey, 16);
    memcpy(buf + 16, mSecretChat->sharedKey() + 96, 32);
    SHA1(buf, 48, sha1d_buffer);

    // aes_key = substr (sha1_a, 0, 8) + substr (sha1_b, 8, 12) + substr (sha1_c, 4, 12);
    memcpy(key, sha1a_buffer + 0, 8);
    memcpy(key + 8, sha1b_buffer + 8, 12);
    memcpy(key + 20, sha1c_buffer + 4, 12);

    // aes_iv = substr (sha1_a, 8, 12) + substr (sha1_b, 0, 8) + substr (sha1_c, 16, 4) + substr (sha1_d, 0, 8);
    memcpy(iv, sha1a_buffer + 8, 12);
    memcpy(iv + 12, sha1b_buffer + 0, 8);
    memcpy(iv + 20, sha1c_buffer + 16, 4);
    memcpy(iv + 24, sha1d_buffer + 0, 8);

    // data is encrypted with a 256-bit key, aes_key, and a 256-bit initialization vector, aes-iv,
    // using AES-256 encryption with infinite garble extension (IGE)
    AES_KEY aesKey;
    AES_set_encrypt_key(key, 256, &aesKey);
    AES_ige_encrypt((uchar *)mEncrPtr, (uchar *)mEncrPtr, 4 * (mEncrEnd - mEncrPtr), &aesKey, iv, 1);
    Utils::secureZeroMemory(&aesKey, 0, sizeof(aesKey));

    return msgKey;
}
