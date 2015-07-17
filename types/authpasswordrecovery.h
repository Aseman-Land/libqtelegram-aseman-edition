#ifndef AUTHPASSWORDRECOVERY
#define AUTHPASSWORDRECOVERY

#include <QtGlobal>

class AuthPasswordRecovery
{
public:

    enum AuthPasswordRecoveryType {
       typeAuthPasswordRecovery = 0x137948a5
    };

    AuthPasswordRecovery() :
        m_classType(typeAuthPasswordRecovery) {}

    QString emailPattern() const {
        return m_emailPattern;
    }
    void setEmailPattern(const QString &emailPattern) {
        m_emailPattern = emailPattern;
    }
    void setClassType(AuthPasswordRecoveryType classType) {
        m_classType = classType;
    }
    AuthPasswordRecoveryType classType() const {
        return m_classType;
    }

private:
    QString m_emailPattern;
    AuthPasswordRecoveryType m_classType;
};

#endif // AUTHPASSWORDRECOVERY
