#ifndef LQTG_INPUTENCRYPTEDCHAT
#define LQTG_INPUTENCRYPTEDCHAT

#include "telegramtypeobject.h"
#include <QtGlobal>

class InputEncryptedChat : public TelegramTypeObject
{
public:
    enum InputEncryptedChatType {
        typeInputEncryptedChat = 0xf141b5e1
    };

    InputEncryptedChat(InputEncryptedChatType classType = typeInputEncryptedChat, InboundPkt *in = 0);
    InputEncryptedChat(InboundPkt *in);
    virtual ~InputEncryptedChat();

    void setAccessHash(qint64 accessHash);
    qint64 accessHash() const;

    void setChatId(qint32 chatId);
    qint32 chatId() const;

    void setClassType(InputEncryptedChatType classType);
    InputEncryptedChatType classType() const;

    bool fetch(InboundPkt *in);
    bool push(OutboundPkt *out) const;

    bool operator ==(const InputEncryptedChat &b);

private:
    qint64 m_accessHash;
    qint32 m_chatId;
    InputEncryptedChatType m_classType;
};

#endif // LQTG_INPUTENCRYPTEDCHAT
