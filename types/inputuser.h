#ifndef LQTG_INPUTUSER
#define LQTG_INPUTUSER

#include "telegramtypeobject.h"
#include <QtGlobal>

class InputUser : public TelegramTypeObject
{
public:
    enum InputUserType {
        typeInputUserEmpty = 0xb98886cf,
        typeInputUserSelf = 0xf7c1b13f,
        typeInputUserContact = 0x86e94f65,
        typeInputUserForeign = 0x655e74ff
    };

    InputUser(InputUserType classType = typeInputUserEmpty, InboundPkt *in = 0);
    InputUser(InboundPkt *in);
    virtual ~InputUser();

    void setAccessHash(qint64 accessHash);
    qint64 accessHash() const;

    void setUserId(qint32 userId);
    qint32 userId() const;

    void setClassType(InputUserType classType);
    InputUserType classType() const;

    bool fetch(InboundPkt *in);
    bool push(OutboundPkt *out) const;

    bool operator ==(const InputUser &b);

private:
    qint64 m_accessHash;
    qint32 m_userId;
    InputUserType m_classType;
};

#endif // LQTG_INPUTUSER
