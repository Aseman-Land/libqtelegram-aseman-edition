/*
 * Copyright 2014 Canonical Ltd.
 * Authors:
 *      Roberto Mier
 *      Tiago Herrmann
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

#ifndef SETTINGS_H
#define SETTINGS_H

#define PROG_NAME "libqtelegram"
#define CONFIG_DIRECTORY "." PROG_NAME
#define CONFIG_FILE QStringLiteral("config")
#define AUTH_KEY_FILE "auth"
#define STATE_FILE "state"
#define SECRET_CHAT_FILE "secret"
#define DEFAULT_CONFIG_CONTENTS     \
  "# This is an empty config file\n" \
  "# Feel free to put something here\n"
#define ST_DC_NUM QStringLiteral("dcNum")
#define ST_AUTH_FILE "authFile"
#define ST_SECRET "secret"
#define ST_DOWNLOADS QStringLiteral("downloads")
#define ST_STATE_FILE "stateFile"
#define ST_TEST_MODE QStringLiteral("testMode")
#define ST_MANAGED_DOWNLOADS QStringLiteral("managedDownloads")
#define ST_LANG_CODE QStringLiteral("lang")
#define ST_RESEND_QUERIES QStringLiteral("resendQueries")

#define ST_WORKING_DC_NUM QStringLiteral("workingDcNum")
#define ST_DC_STATE QStringLiteral("state")
#define ST_OUR_ID QStringLiteral("ourId")
#define ST_DCS_ARRAY QStringLiteral("dcs")
#define ST_HOST QStringLiteral("host")
#define ST_PORT QStringLiteral("port")
#define ST_IPV6 QStringLiteral("ipv6")
#define ST_MEDIA QStringLiteral("mediaOnly")
#define ST_AUTH_KEY_ID QStringLiteral("authKeyId")
#define ST_AUTH_KEY QStringLiteral("authKey")
#define ST_SERVER_SALT QStringLiteral("serverSalt")
#define ST_EXPIRES QStringLiteral("expires")
#define ST_PRODUCTION QStringLiteral("production")
#define ST_TEST QStringLiteral("test")

#define ST_VERSION QStringLiteral("version")
#define ST_G QStringLiteral("g")
#define ST_P QStringLiteral("p")
#define ST_SECRET_CHATS_ARRAY QStringLiteral("secretChats")
#define ST_CHAT_ID QStringLiteral("chatId")
#define ST_ACCESS_HASH QStringLiteral("accessHash")
#define ST_ADMIN_ID QStringLiteral("adminId")
#define ST_PARTICIPANT_ID QStringLiteral("participantId")
#define ST_DATE QStringLiteral("date")
#define ST_SHARED_KEY QStringLiteral("sharedKey")
#define ST_LAYER QStringLiteral("layer")
#define ST_IN_SEQ_NO QStringLiteral("inSeqNo")
#define ST_OUT_SEQ_NO QStringLiteral("outSeqNo")
#define ST_STATE QStringLiteral("state")
#define ST_MY_KEY QStringLiteral("myKey")

#define DEFAULT_CONFIG_PATH QStringLiteral("~/.libqtelegram")
#define DEFAULT_PUBLIC_KEY_FILE QStringLiteral("qtelegram.pub")

#include <QObject>
#include <QList>
#include <QLoggingCategory>
#include <openssl/rsa.h>
#include "secret/secretchat.h"
#include "settingstools.h"
#include "libqtelegram_global.h"

Q_DECLARE_LOGGING_CATEGORY(TG_CORE_SETTINGS)

class DC;
class Telegram;
class LIBQTELEGRAMSHARED_EXPORT Settings : public QObject
{
    Q_OBJECT
public:
    Settings(Telegram *telegram);
    virtual ~Settings();
    Settings(const Settings &); // hide copy constructor
    Settings& operator=(const Settings &); // hide asignment

    void setDefaultHostAddress(const QString &host);
    void setDefaultHostPort(qint16 port);
    void setDefaultHostDcId(qint16 dcId);
    void setAppId(qint32 appId);
    void setAppHash(const QString &appHash);

    QString defaultHostAddress();
    qint16 defaultHostPort();
    qint16 defaultHostDcId();
    qint32 appId();
    QString appHash();

    bool loadSettings(const QString &phoneNumber, const QString &configPath = DEFAULT_CONFIG_PATH, const QString &publicKeyFile = DEFAULT_PUBLIC_KEY_FILE);
    void writeAuthFile();
    void writeSecretFile();
    bool workingDcConfigAvailabe() const {return  m_workingDcConfigAvailabe;}

    qint64 pkFingerprint() const { return m_pkFingerprint; }
    RSA* pubKey() { return m_pubKey; }
    qint32 workingDcNum() const { return m_workingDcNum; }
    qint32 ourId() const { return m_ourId; }
    QList<DC *> &dcsList() { return m_dcsList; }
    QString phoneNumber() const { return m_phoneNumber; }
    bool testMode() const { return m_testMode; }
    bool managedDownloads() const { return m_managedDownloads; }
    QString langCode() const { return m_langCode; }
    bool resendQueries() const { return mResendQueries; }
    qint32 version() const { return mVersion; }
    qint32 g() const { return mG; }
    QByteArray p() const { return mP; }
    QList<SecretChat *> &secretChats() { return mSecretChats; }

    void setWorkingDcNum(qint32 workingDcNum) { m_workingDcNum = workingDcNum; m_workingDcConfigAvailabe = true; }
    void setOurId(qint32 ourId) { m_ourId = ourId; }
    void setDcsList(const QList<DC *> &dcsList) { m_dcsList = dcsList; }
    void setVersion(qint32 version) { mVersion = version; }
    void setG(qint32 g) { mG = g; }
    void setP(const QByteArray &p) { mP = p; }
    void setSecretChats(const QList<SecretChat *> &secretChats) { mSecretChats = secretChats; }

    void setTestMode(bool testMode) { m_testMode = testMode; }
    void setManagedDownloads(bool managedDownloads) { m_managedDownloads = managedDownloads; }
    void setLangCode(const QString& langCode) { m_langCode = langCode; }
    void setResendQueries(bool resendQueries) { mResendQueries = resendQueries; }

    bool removeAuthFile();
    void writeCrashFile();

    void setAuthConfigMethods(SettingsTools::ReadFunc readFunc, SettingsTools::WriteFunc writeFunc);
    void clearAuth();

private:
    void readAuthFile();
    void readSecretFile();

    QString m_defaultHostAddress;
    qint16 m_defaultHostPort;
    qint16 m_defaultHostDcId;
    qint32 m_appId;
    QString m_appHash;

    bool m_workingDcConfigAvailabe;
    qint64 m_pkFingerprint;
    RSA *m_pubKey;
    QString m_authFilename;
    QString m_secretChatFilename;
    QString m_stateFilename;
    qint32 m_workingDcNum;
    qint32 m_ourId;
    QList<DC *> m_dcsList;
    QString m_phoneNumber;
    QString m_baseConfigDirectory;
    // if true, all operations are performed against telegram test servers
    bool m_testMode;
    // if true, downloading a big file will be stored in byte array until completion and only one signal is emited when download finish
    // if false, every downloaded part is notified as a signal with the partial data. Default is false
    bool m_managedDownloads;
    // default is 'en'
    QString m_langCode;
    // default is false. If true, queries not acked after 30 seconds will be re-sent
    bool mResendQueries;

    qint32 mVersion;
    qint32 mG;
    QByteArray mP;
    QList<SecretChat *> mSecretChats;

    Telegram *mTelegram;

    SettingsTools::ReadFunc _telegram_settings_read_fnc;
    SettingsTools::WriteFunc _telegram_settings_write_fnc;
};

#endif // SETTINGS_H
