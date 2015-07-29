#ifndef LQTG_CONTACTSTATUS
#define LQTG_CONTACTSTATUS

#include "telegramtypeobject.h"
#include "userstatus.h"
#include <QtGlobal>

class ContactStatus : public TelegramTypeObject
{
public:
    enum ContactStatusType {
        typeContactStatus = 0xd3680c61
    };

    ContactStatus(ContactStatusType classType = typeContactStatus, InboundPkt *in = 0);
    ContactStatus(InboundPkt *in);
    virtual ~ContactStatus();

    void setStatus(const UserStatus &status);
    UserStatus status() const;

    void setUserId(qint32 userId);
    qint32 userId() const;

    void setClassType(ContactStatusType classType);
    ContactStatusType classType() const;

    bool fetch(InboundPkt *in);
    bool push(OutboundPkt *out) const;

    bool operator ==(const ContactStatus &b);

private:
    UserStatus m_status;
    qint32 m_userId;
    ContactStatusType m_classType;
};

#endif // LQTG_CONTACTSTATUS
