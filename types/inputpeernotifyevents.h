#ifndef LQTG_INPUTPEERNOTIFYEVENTS
#define LQTG_INPUTPEERNOTIFYEVENTS

#include "telegramtypeobject.h"

class InputPeerNotifyEvents : public TelegramTypeObject
{
public:
    enum InputPeerNotifyEventsType {
        typeInputPeerNotifyEventsEmpty = 0xf03064d8,
        typeInputPeerNotifyEventsAll = 0xe86a2c74
    };

    InputPeerNotifyEvents(InputPeerNotifyEventsType classType = typeInputPeerNotifyEventsEmpty, InboundPkt *in = 0);
    InputPeerNotifyEvents(InboundPkt *in);
    virtual ~InputPeerNotifyEvents();

    void setClassType(InputPeerNotifyEventsType classType);
    InputPeerNotifyEventsType classType() const;

    bool fetch(InboundPkt *in);
    bool push(OutboundPkt *out) const;

    bool operator ==(const InputPeerNotifyEvents &b);

private:
    InputPeerNotifyEventsType m_classType;
};

#endif // LQTG_INPUTPEERNOTIFYEVENTS
