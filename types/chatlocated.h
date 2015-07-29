#ifndef LQTG_CHATLOCATED
#define LQTG_CHATLOCATED

#include "telegramtypeobject.h"
#include <QtGlobal>

class ChatLocated : public TelegramTypeObject
{
public:
    enum ChatLocatedType {
        typeChatLocated = 0x3631cf4c
    };

    ChatLocated(ChatLocatedType classType = typeChatLocated, InboundPkt *in = 0);
    ChatLocated(InboundPkt *in);
    virtual ~ChatLocated();

    void setChatId(qint32 chatId);
    qint32 chatId() const;

    void setDistance(qint32 distance);
    qint32 distance() const;

    void setClassType(ChatLocatedType classType);
    ChatLocatedType classType() const;

    bool fetch(InboundPkt *in);
    bool push(OutboundPkt *out) const;

    bool operator ==(const ChatLocated &b);

private:
    qint32 m_chatId;
    qint32 m_distance;
    ChatLocatedType m_classType;
};

#endif // LQTG_CHATLOCATED
