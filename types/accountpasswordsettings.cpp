#include "accountpasswordsettings.h"
#include "core/inboundpkt.h"
#include "core/outboundpkt.h"

AccountPasswordSettings::AccountPasswordSettings(AccountPasswordSettingsType classType, InboundPkt *in) :
    m_classType(classType)
{
    if(in) fetch(in);
}

AccountPasswordSettings::AccountPasswordSettings(InboundPkt *in) :
    m_classType(typeAccountPasswordSettings)
{
    fetch(in);
}

void AccountPasswordSettings::setEmail(const QString &email) {
    m_email = email;
}

QString AccountPasswordSettings::email() const {
    return m_email;
}

bool AccountPasswordSettings::operator ==(const AccountPasswordSettings &b) {
    return m_email == b.m_email;
}

void AccountPasswordSettings::setClassType(AccountPasswordSettings::AccountPasswordSettingsType classType) {
    m_classType = classType;
}

AccountPasswordSettings::AccountPasswordSettingsType AccountPasswordSettings::classType() const {
    return m_classType;
}

bool AccountPasswordSettings::fetch(InboundPkt *in) {

    int x = in->fetchInt();
    switch(x) {
    case typeAccountPasswordSettings: {
        m_email = in->fetchQString();
        return true;
    }
        break;
    
    default:
        LQTG_FETCH_ASSERT;
        return false;
    }
}

bool AccountPasswordSettings::push(OutboundPkt *out) const {

    out->appendInt(m_classType);
    switch(m_classType) {
    case typeAccountPasswordSettings: {
        out->appendQString(m_email);
        return true;
    }
        break;
    
    default:
        return false;
    }
}

