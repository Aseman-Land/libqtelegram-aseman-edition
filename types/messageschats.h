#ifndef LQTG_MESSAGESCHATS
#define LQTG_MESSAGESCHATS

#include "telegramtypeobject.h"
#include <QList>
#include "chat.h"

class MessagesChats : public TelegramTypeObject
{
public:
    enum MessagesChatsType {
        typeMessagesChats = 0x64ff9fd5
    };

    MessagesChats(MessagesChatsType classType = typeMessagesChats, InboundPkt *in = 0);
    MessagesChats(InboundPkt *in);
    virtual ~MessagesChats();

    void setChats(const QList<Chat> &chats);
    QList<Chat> chats() const;

    void setClassType(MessagesChatsType classType);
    MessagesChatsType classType() const;

    bool fetch(InboundPkt *in);
    bool push(OutboundPkt *out) const;

    bool operator ==(const MessagesChats &b);

private:
    QList<Chat> m_chats;
    MessagesChatsType m_classType;
};

#endif // LQTG_MESSAGESCHATS
