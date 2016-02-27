// This file generated by libqtelegram-code-generator.
// You can download it from: https://github.com/Aseman-Land/libqtelegram-code-generator
// DO NOT EDIT THIS FILE BY HAND -- YOUR CHANGES WILL BE OVERWRITTEN

#include "accountpasswordsettingsobject.h"

AccountPasswordSettingsObject::AccountPasswordSettingsObject(const AccountPasswordSettings &core, QObject *parent) :
    TelegramTypeQObject(parent),
    m_core(core)
{
}

AccountPasswordSettingsObject::AccountPasswordSettingsObject(QObject *parent) :
    TelegramTypeQObject(parent),
    m_core()
{
}

AccountPasswordSettingsObject::~AccountPasswordSettingsObject() {
}

void AccountPasswordSettingsObject::setEmail(const QString &email) {
    if(m_core.email() == email) return;
    m_core.setEmail(email);
    Q_EMIT emailChanged();
    Q_EMIT coreChanged();
}

QString AccountPasswordSettingsObject::email() const {
    return m_core.email();
}

AccountPasswordSettingsObject &AccountPasswordSettingsObject::operator =(const AccountPasswordSettings &b) {
    if(m_core == b) return *this;
    m_core = b;

    Q_EMIT emailChanged();
    Q_EMIT coreChanged();
    return *this;
}

bool AccountPasswordSettingsObject::operator ==(const AccountPasswordSettings &b) const {
    return m_core == b;
}

void AccountPasswordSettingsObject::setClassType(quint32 classType) {
    AccountPasswordSettings::AccountPasswordSettingsType result;
    switch(classType) {
    case TypeAccountPasswordSettings:
        result = AccountPasswordSettings::typeAccountPasswordSettings;
        break;
    default:
        result = AccountPasswordSettings::typeAccountPasswordSettings;
        break;
    }

    if(m_core.classType() == result) return;
    m_core.setClassType(result);
    Q_EMIT classTypeChanged();
    Q_EMIT coreChanged();
}

quint32 AccountPasswordSettingsObject::classType() const {
    int result;
    switch(static_cast<qint64>(m_core.classType())) {
    case AccountPasswordSettings::typeAccountPasswordSettings:
        result = TypeAccountPasswordSettings;
        break;
    default:
        result = TypeAccountPasswordSettings;
        break;
    }

    return result;
}

void AccountPasswordSettingsObject::setCore(const AccountPasswordSettings &core) {
    operator =(core);
}

AccountPasswordSettings AccountPasswordSettingsObject::core() const {
    return m_core;
}
