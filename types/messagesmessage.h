#ifndef LQTG_MESSAGESMESSAGE
#define LQTG_MESSAGESMESSAGE

#include "telegramtypeobject.h"

class MessagesMessage : public TelegramTypeObject
{
public:
    enum MessagesMessageType {
        typeMessagesMessageEmpty = 0x3f4e0648
    };

    MessagesMessage(MessagesMessageType classType = typeMessagesMessageEmpty, InboundPkt *in = 0);
    MessagesMessage(InboundPkt *in);
    virtual ~MessagesMessage();

    void setClassType(MessagesMessageType classType);
    MessagesMessageType classType() const;

    bool fetch(InboundPkt *in);
    bool push(OutboundPkt *out) const;

    bool operator ==(const MessagesMessage &b);

private:
    MessagesMessageType m_classType;
};

#endif // LQTG_MESSAGESMESSAGE
