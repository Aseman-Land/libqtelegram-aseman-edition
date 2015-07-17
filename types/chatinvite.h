#ifndef CHATINVITE
#define CHATINVITE

#include <QtGlobal>
#include "chat.h"

class ChatInvite
{
public:

    enum ChatInviteType {
       typeChatInviteAlready = 0x5a686d7c,
       typeChatInvite = 0xce917dcd
    };

    ChatInvite(ChatInviteType classType) :
        m_classType(classType) {}

    Chat chat() const {
        return m_chat;
    }
    void setChat(const Chat &chat) {
        m_chat = chat;
    }
    QString title() const {
        return m_title;
    }
    void setTitle(const QString &title) {
        m_title = title;
    }
    void setClassType(ChatInviteType classType) {
        m_classType = classType;
    }
    ChatInviteType classType() const {
        return m_classType;
    }

private:
    Chat m_chat;
    QString m_title;
    ChatInviteType m_classType;
};

#endif // CHATINVITE

