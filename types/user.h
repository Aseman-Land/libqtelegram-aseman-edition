#ifndef LQTG_USER
#define LQTG_USER

#include "telegramtypeobject.h"
#include <QtGlobal>
#include <QString>
#include "userprofilephoto.h"
#include "userstatus.h"

class User : public TelegramTypeObject
{
public:
    enum UserType {
        typeUserEmpty = 0x200250ba,
        typeUserSelf = 0x1c60e608,
        typeUserContact = 0xcab35e18,
        typeUserRequest = 0xd9ccc4ef,
        typeUserForeign = 0x75cf7a8,
        typeUserDeleted = 0xd6016d7a
    };

    User(UserType classType = typeUserEmpty, InboundPkt *in = 0);
    User(InboundPkt *in);
    virtual ~User();

    void setAccessHash(qint64 accessHash);
    qint64 accessHash() const;

    void setFirstName(const QString &firstName);
    QString firstName() const;

    void setId(qint32 id);
    qint32 id() const;

    void setLastName(const QString &lastName);
    QString lastName() const;

    void setPhone(const QString &phone);
    QString phone() const;

    void setPhoto(const UserProfilePhoto &photo);
    UserProfilePhoto photo() const;

    void setStatus(const UserStatus &status);
    UserStatus status() const;

    void setUsername(const QString &username);
    QString username() const;

    void setClassType(UserType classType);
    UserType classType() const;

    bool fetch(InboundPkt *in);
    bool push(OutboundPkt *out) const;

    bool operator ==(const User &b);

private:
    qint64 m_accessHash;
    QString m_firstName;
    qint32 m_id;
    QString m_lastName;
    QString m_phone;
    UserProfilePhoto m_photo;
    UserStatus m_status;
    QString m_username;
    UserType m_classType;
};

#endif // LQTG_USER
