#ifndef LQTG_ACCOUNTDAYSTTL
#define LQTG_ACCOUNTDAYSTTL

#include "telegramtypeobject.h"
#include <QtGlobal>

class AccountDaysTTL : public TelegramTypeObject
{
public:
    enum AccountDaysTTLType {
        typeAccountDaysTTL = 0xb8d0afdf
    };

    AccountDaysTTL(AccountDaysTTLType classType = typeAccountDaysTTL, InboundPkt *in = 0);
    AccountDaysTTL(InboundPkt *in);
    virtual ~AccountDaysTTL();

    void setDays(qint32 days);
    qint32 days() const;

    void setClassType(AccountDaysTTLType classType);
    AccountDaysTTLType classType() const;

    bool fetch(InboundPkt *in);
    bool push(OutboundPkt *out) const;

    bool operator ==(const AccountDaysTTL &b);

private:
    qint32 m_days;
    AccountDaysTTLType m_classType;
};

#endif // LQTG_ACCOUNTDAYSTTL
