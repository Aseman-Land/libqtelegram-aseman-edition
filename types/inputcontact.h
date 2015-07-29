#ifndef LQTG_INPUTCONTACT
#define LQTG_INPUTCONTACT

#include "telegramtypeobject.h"
#include <QtGlobal>
#include <QString>

class InputContact : public TelegramTypeObject
{
public:
    enum InputContactType {
        typeInputPhoneContact = 0xf392b7f4
    };

    InputContact(InputContactType classType = typeInputPhoneContact, InboundPkt *in = 0);
    InputContact(InboundPkt *in);
    virtual ~InputContact();

    void setClientId(qint64 clientId);
    qint64 clientId() const;

    void setFirstName(const QString &firstName);
    QString firstName() const;

    void setLastName(const QString &lastName);
    QString lastName() const;

    void setPhone(const QString &phone);
    QString phone() const;

    void setClassType(InputContactType classType);
    InputContactType classType() const;

    bool fetch(InboundPkt *in);
    bool push(OutboundPkt *out) const;

    bool operator ==(const InputContact &b);

private:
    qint64 m_clientId;
    QString m_firstName;
    QString m_lastName;
    QString m_phone;
    InputContactType m_classType;
};

#endif // LQTG_INPUTCONTACT
