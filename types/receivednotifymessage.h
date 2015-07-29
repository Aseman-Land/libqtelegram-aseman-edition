#ifndef LQTG_RECEIVEDNOTIFYMESSAGE
#define LQTG_RECEIVEDNOTIFYMESSAGE

#include "telegramtypeobject.h"
#include <QtGlobal>

class ReceivedNotifyMessage : public TelegramTypeObject
{
public:
    enum ReceivedNotifyMessageType {
        typeReceivedNotifyMessage = 0xa384b779
    };

    ReceivedNotifyMessage(ReceivedNotifyMessageType classType = typeReceivedNotifyMessage, InboundPkt *in = 0);
    ReceivedNotifyMessage(InboundPkt *in);
    virtual ~ReceivedNotifyMessage();

    void setFlags(qint32 flags);
    qint32 flags() const;

    void setId(qint32 id);
    qint32 id() const;

    void setClassType(ReceivedNotifyMessageType classType);
    ReceivedNotifyMessageType classType() const;

    bool fetch(InboundPkt *in);
    bool push(OutboundPkt *out) const;

    bool operator ==(const ReceivedNotifyMessage &b);

private:
    qint32 m_flags;
    qint32 m_id;
    ReceivedNotifyMessageType m_classType;
};

#endif // LQTG_RECEIVEDNOTIFYMESSAGE
