#ifndef LQTG_ACCOUNTPRIVACYRULES
#define LQTG_ACCOUNTPRIVACYRULES

#include "telegramtypeobject.h"
#include <QList>
#include "privacyrule.h"
#include "user.h"

class AccountPrivacyRules : public TelegramTypeObject
{
public:
    enum AccountPrivacyRulesType {
        typeAccountPrivacyRules = 0x554abb6f
    };

    AccountPrivacyRules(AccountPrivacyRulesType classType = typeAccountPrivacyRules, InboundPkt *in = 0);
    AccountPrivacyRules(InboundPkt *in);
    virtual ~AccountPrivacyRules();

    void setRules(const QList<PrivacyRule> &rules);
    QList<PrivacyRule> rules() const;

    void setUsers(const QList<User> &users);
    QList<User> users() const;

    void setClassType(AccountPrivacyRulesType classType);
    AccountPrivacyRulesType classType() const;

    bool fetch(InboundPkt *in);
    bool push(OutboundPkt *out) const;

    bool operator ==(const AccountPrivacyRules &b);

private:
    QList<PrivacyRule> m_rules;
    QList<User> m_users;
    AccountPrivacyRulesType m_classType;
};

#endif // LQTG_ACCOUNTPRIVACYRULES
