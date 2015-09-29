#ifndef TESTS_CONFIG_H
#define TESTS_CONFIG_H

#include <QString>

const QString thePhoneNumber();
const QString phoneNumberAtDC(qint8 dc);
const QString thePublicKeyFile();
const QString theConfigPath();
const QString theDefaultHostAddress();
qint16 theDefaultHostPort();
qint16 theDefaultHostDcId();
qint32 theAppId();
const QString theAppHash();
const QString theCode();
const QString codeAtDC(qint8 dc);
qint32 theTimeout();

#endif // TESTS_CONFIG_H

