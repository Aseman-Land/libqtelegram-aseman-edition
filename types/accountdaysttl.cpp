#include "accountdaysttl.h"
#include "core/inboundpkt.h"
#include "core/outboundpkt.h"

AccountDaysTTL::AccountDaysTTL(AccountDaysTTLType classType, InboundPkt *in) :
    m_days(0),
    m_classType(classType)
{
    if(in) fetch(in);
}

AccountDaysTTL::AccountDaysTTL(InboundPkt *in) :
    m_days(0),
    m_classType(typeAccountDaysTTL)
{
    fetch(in);
}

void AccountDaysTTL::setDays(qint32 days) {
    m_days = days;
}

qint32 AccountDaysTTL::days() const {
    return m_days;
}

bool AccountDaysTTL::operator ==(const AccountDaysTTL &b) {
    return m_days == b.m_days;
}

void AccountDaysTTL::setClassType(AccountDaysTTL::AccountDaysTTLType classType) {
    m_classType = classType;
}

AccountDaysTTL::AccountDaysTTLType AccountDaysTTL::classType() const {
    return m_classType;
}

bool AccountDaysTTL::fetch(InboundPkt *in) {

    int x = in->fetchInt();
    switch(x) {
    case typeAccountDaysTTL: {
        m_days = in->fetchInt();
        return true;
    }
        break;
    
    default:
        LQTG_FETCH_ASSERT;
        return false;
    }
}

bool AccountDaysTTL::push(OutboundPkt *out) const {

    out->appendInt(m_classType);
    switch(m_classType) {
    case typeAccountDaysTTL: {
        out->appendInt(m_days);
        return true;
    }
        break;
    
    default:
        return false;
    }
}

