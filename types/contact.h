#ifndef LQTG_CONTACT
#define LQTG_CONTACT

#include "telegramtypeobject.h"
#include <QtGlobal>

class Contact : public TelegramTypeObject
{
public:
    enum ContactType {
        typeContact = 0xf911c994
    };

    Contact(ContactType classType = typeContact, InboundPkt *in = 0);
    Contact(InboundPkt *in);
    virtual ~Contact();

    void setMutual(bool mutual);
    bool mutual() const;

    void setUserId(qint32 userId);
    qint32 userId() const;

    void setClassType(ContactType classType);
    ContactType classType() const;

    bool fetch(InboundPkt *in);
    bool push(OutboundPkt *out) const;

    bool operator ==(const Contact &b);

private:
    bool m_mutual;
    qint32 m_userId;
    ContactType m_classType;
};

#endif // LQTG_CONTACT
