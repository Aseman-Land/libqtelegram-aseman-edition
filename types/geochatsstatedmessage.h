#ifndef LQTG_GEOCHATSSTATEDMESSAGE
#define LQTG_GEOCHATSSTATEDMESSAGE

#include "telegramtypeobject.h"
#include <QList>
#include "chat.h"
#include "geochatmessage.h"
#include <QtGlobal>
#include "user.h"

class GeochatsStatedMessage : public TelegramTypeObject
{
public:
    enum GeochatsStatedMessageType {
        typeGeochatsStatedMessage = 0x17b1578b
    };

    GeochatsStatedMessage(GeochatsStatedMessageType classType = typeGeochatsStatedMessage, InboundPkt *in = 0);
    GeochatsStatedMessage(InboundPkt *in);
    virtual ~GeochatsStatedMessage();

    void setChats(const QList<Chat> &chats);
    QList<Chat> chats() const;

    void setMessage(const GeoChatMessage &message);
    GeoChatMessage message() const;

    void setSeq(qint32 seq);
    qint32 seq() const;

    void setUsers(const QList<User> &users);
    QList<User> users() const;

    void setClassType(GeochatsStatedMessageType classType);
    GeochatsStatedMessageType classType() const;

    bool fetch(InboundPkt *in);
    bool push(OutboundPkt *out) const;

    bool operator ==(const GeochatsStatedMessage &b);

private:
    QList<Chat> m_chats;
    GeoChatMessage m_message;
    qint32 m_seq;
    QList<User> m_users;
    GeochatsStatedMessageType m_classType;
};

#endif // LQTG_GEOCHATSSTATEDMESSAGE
