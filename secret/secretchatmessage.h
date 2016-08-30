#ifndef SECRETCHATMESSAGE_H
#define SECRETCHATMESSAGE_H

#include "telegram/types/decryptedmessage.h"
#include "telegram/types/encryptedfile.h"

class SecretChatMessage {

public:
    explicit SecretChatMessage() :
        mChatId(0),
        mTtl(0),
        mDate(0),
        mDecryptedMessage(DecryptedMessage::typeDecryptedMessageSecret8),
        mAttachment(EncryptedFile::typeEncryptedFileEmpty) {}

    qint32 chatId() const { return mChatId; }
    qint32 ttl() const { return mTtl; }
    qint32 date() const { return mDate; }
    DecryptedMessage decryptedMessage() const { return mDecryptedMessage; }
    EncryptedFile attachment() const { return mAttachment; }
    void setChatId(qint32 chatId) { mChatId = chatId; }
    void setTtl(qint32 ttl) { mTtl = ttl; }
    void setDate(qint32 date) { mDate = date; }
    void setDecryptedMessage(const DecryptedMessage &decryptedMessage) { mDecryptedMessage = decryptedMessage; }
    void setAttachment(const EncryptedFile &attachment) { mAttachment = attachment; }

    bool isServiceMessage() const {
        return (mDecryptedMessage.classType() == DecryptedMessage::typeDecryptedMessageServiceSecret8 ||
                mDecryptedMessage.classType() == DecryptedMessage::typeDecryptedMessageServiceSecret17) ;
    }

    QMap<QString, QVariant> toMap() const;
    static SecretChatMessage fromMap(const QMap<QString, QVariant> &map);

private:
    qint32 mChatId;
    qint32 mTtl;
    qint32 mDate;
    DecryptedMessage mDecryptedMessage;
    EncryptedFile mAttachment;
};

inline QMap<QString, QVariant> SecretChatMessage::toMap() const
{
    QMap<QString, QVariant> result;
    result["classType"] = "SecretChatMessage::SecretChatMessage";
    result["chatId"] = QVariant::fromValue<qint32>(chatId());
    result["ttl"] = QVariant::fromValue<qint32>(ttl());
    result["date"] = QVariant::fromValue<qint32>(date());
    result["decryptedMessage"] = mDecryptedMessage.toMap();
    result["attachment"] = mAttachment.toMap();
    return result;
}

inline SecretChatMessage SecretChatMessage::fromMap(const QMap<QString, QVariant> &map)
{
    SecretChatMessage result;
    if(map.value("classType").toString() == "SecretChatMessage::SecretChatMessage") {
        result.setChatId( map.value("chatId").value<qint32>() );
        result.setTtl( map.value("ttl").value<qint32>() );
        result.setDate( map.value("date").value<qint32>() );
        result.setDecryptedMessage( DecryptedMessage::fromMap(map.value("decryptedMessage").toMap()) );
        result.setAttachment( EncryptedFile::fromMap(map.value("attachment").toMap()) );
        return result;
    }
    return result;
}

#endif // SECRETCHATMESSAGE_H
