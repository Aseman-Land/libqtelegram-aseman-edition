#ifndef LQTG_CONTACTFOUND
#define LQTG_CONTACTFOUND

#include "telegramtypeobject.h"
#include <QtGlobal>

class ContactFound : public TelegramTypeObject
{
public:
    enum ContactFoundType {
        typeContactFound = 0xea879f95
    };

    ContactFound(ContactFoundType classType = typeContactFound, InboundPkt *in = 0);
    ContactFound(InboundPkt *in);
    virtual ~ContactFound();

    void setUserId(qint32 userId);
    qint32 userId() const;

    void setClassType(ContactFoundType classType);
    ContactFoundType classType() const;

    bool fetch(InboundPkt *in);
    bool push(OutboundPkt *out) const;

    bool operator ==(const ContactFound &b);

private:
    qint32 m_userId;
    ContactFoundType m_classType;
};

#endif // LQTG_CONTACTFOUND
