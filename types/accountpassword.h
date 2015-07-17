#ifndef ACCOUNTPASSWORD
#define ACCOUNTPASSWORD

#include <QByteArray>

class AccountPassword
{
public:
    enum AccountPasswordType {
        typeAccountNoPassword = 0x96dabc18,
        typeAccountPassword = 0x7c18141c
    };

    AccountPassword(AccountPasswordType type) :
        m_classType(type) {}
    virtual ~AccountPassword() {}

    QByteArray newSalt() const {
        return m_newSalt;
    }
    void setNewSalt(const QByteArray &newSalt) {
        m_newSalt = newSalt;
    }
    QByteArray currentSalt() const {
        return m_currentSalt;
    }
    void setCurrentSalt(const QByteArray &currentSalt) {
        m_currentSalt = currentSalt;
    }
    QString hint() const {
        return m_hint;
    }
    void setHint(const QString &hint) {
        m_hint = hint;
    }
    QString emailUnconfirmedPattern() const {
        return m_emailUnconfirmedPattern;
    }
    void setEmailUnconfirmedPattern(const QString &emailUnconfirmedPattern) {
        m_emailUnconfirmedPattern = emailUnconfirmedPattern;
    }
    bool hasRecovery() const {
        return m_hasRecovery;
    }
    void setHasRecovery(bool hasRecovery) {
        m_hasRecovery = hasRecovery;
    }
    void setClassType(AccountPasswordType classType) {
        m_classType = classType;
    }
    AccountPasswordType classType() const {
        return m_classType;
    }

private:
    QByteArray m_newSalt;
    QByteArray m_currentSalt;
    QString m_hint;
    QString m_emailUnconfirmedPattern;
    bool m_hasRecovery;
    AccountPasswordType m_classType;
};

#endif // ACCOUNTPASSWORD
