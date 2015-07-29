#ifndef LQTG_INPUTPRIVACYRULE
#define LQTG_INPUTPRIVACYRULE

#include "telegramtypeobject.h"
#include <QList>
#include "inputuser.h"

class InputPrivacyRule : public TelegramTypeObject
{
public:
    enum InputPrivacyRuleType {
        typeInputPrivacyValueAllowContacts = 0xd09e07b,
        typeInputPrivacyValueAllowAll = 0x184b35ce,
        typeInputPrivacyValueAllowUsers = 0x131cc67f,
        typeInputPrivacyValueDisallowContacts = 0xba52007,
        typeInputPrivacyValueDisallowAll = 0xd66b66c9,
        typeInputPrivacyValueDisallowUsers = 0x90110467
    };

    InputPrivacyRule(InputPrivacyRuleType classType = typeInputPrivacyValueAllowContacts, InboundPkt *in = 0);
    InputPrivacyRule(InboundPkt *in);
    virtual ~InputPrivacyRule();

    void setUsers(const QList<InputUser> &users);
    QList<InputUser> users() const;

    void setClassType(InputPrivacyRuleType classType);
    InputPrivacyRuleType classType() const;

    bool fetch(InboundPkt *in);
    bool push(OutboundPkt *out) const;

    bool operator ==(const InputPrivacyRule &b);

private:
    QList<InputUser> m_users;
    InputPrivacyRuleType m_classType;
};

#endif // LQTG_INPUTPRIVACYRULE
