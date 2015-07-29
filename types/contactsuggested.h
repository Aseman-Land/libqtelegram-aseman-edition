#ifndef LQTG_CONTACTSUGGESTED
#define LQTG_CONTACTSUGGESTED

#include "telegramtypeobject.h"
#include <QtGlobal>

class ContactSuggested : public TelegramTypeObject
{
public:
    enum ContactSuggestedType {
        typeContactSuggested = 0x3de191a1
    };

    ContactSuggested(ContactSuggestedType classType = typeContactSuggested, InboundPkt *in = 0);
    ContactSuggested(InboundPkt *in);
    virtual ~ContactSuggested();

    void setMutualContacts(qint32 mutualContacts);
    qint32 mutualContacts() const;

    void setUserId(qint32 userId);
    qint32 userId() const;

    void setClassType(ContactSuggestedType classType);
    ContactSuggestedType classType() const;

    bool fetch(InboundPkt *in);
    bool push(OutboundPkt *out) const;

    bool operator ==(const ContactSuggested &b);

private:
    qint32 m_mutualContacts;
    qint32 m_userId;
    ContactSuggestedType m_classType;
};

#endif // LQTG_CONTACTSUGGESTED
