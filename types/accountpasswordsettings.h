#ifndef ACCOUNTPASSWORDSETTINGS
#define ACCOUNTPASSWORDSETTINGS

#include <QtGlobal>

class AccountPasswordSettings
{
public:

    enum AccountPasswordSettingsType {
       typeAccountPasswordSettings = 0xb7b72ab3
    };

    AccountPasswordSettings() :
        m_classType(typeAccountPasswordSettings) {}

    QString email() const {
        return m_email;
    }
    void setEmail(const QString &email) {
        m_email = email;
    }
    void setClassType(AccountPasswordSettingsType classType) {
        m_classType = classType;
    }
    AccountPasswordSettingsType classType() const {
        return m_classType;
    }

private:
    QString m_email;
    AccountPasswordSettingsType m_classType;
};

#endif // ACCOUNTPASSWORDSETTINGS
