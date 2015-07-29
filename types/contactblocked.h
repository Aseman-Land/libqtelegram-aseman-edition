#ifndef LQTG_CONTACTBLOCKED
#define LQTG_CONTACTBLOCKED

#include "telegramtypeobject.h"
#include <QtGlobal>

class ContactBlocked : public TelegramTypeObject
{
public:
    enum ContactBlockedType {
        typeContactBlocked = 0x561bc879
    };

    ContactBlocked(ContactBlockedType classType = typeContactBlocked, InboundPkt *in = 0);
    ContactBlocked(InboundPkt *in);
    virtual ~ContactBlocked();

    void setDate(qint32 date);
    qint32 date() const;

    void setUserId(qint32 userId);
    qint32 userId() const;

    void setClassType(ContactBlockedType classType);
    ContactBlockedType classType() const;

    bool fetch(InboundPkt *in);
    bool push(OutboundPkt *out) const;

    bool operator ==(const ContactBlocked &b);

private:
    qint32 m_date;
    qint32 m_userId;
    ContactBlockedType m_classType;
};

#endif // LQTG_CONTACTBLOCKED
