#ifndef LQTG_CHATINVITE
#define LQTG_CHATINVITE

#include "telegramtypeobject.h"
#include "chat.h"
#include <QString>

class ChatInvite : public TelegramTypeObject
{
public:
    enum ChatInviteType {
        typeChatInviteAlready = 0x5a686d7c,
        typeChatInvite = 0xce917dcd
    };

    ChatInvite(ChatInviteType classType = typeChatInviteAlready, InboundPkt *in = 0);
    ChatInvite(InboundPkt *in);
    virtual ~ChatInvite();

    void setChat(const Chat &chat);
    Chat chat() const;

    void setTitle(const QString &title);
    QString title() const;

    void setClassType(ChatInviteType classType);
    ChatInviteType classType() const;

    bool fetch(InboundPkt *in);
    bool push(OutboundPkt *out) const;

    bool operator ==(const ChatInvite &b);

private:
    Chat m_chat;
    QString m_title;
    ChatInviteType m_classType;
};

#endif // LQTG_CHATINVITE
