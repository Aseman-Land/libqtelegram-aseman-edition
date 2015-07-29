#ifndef LQTG_PEERNOTIFYEVENTS
#define LQTG_PEERNOTIFYEVENTS

#include "telegramtypeobject.h"

class PeerNotifyEvents : public TelegramTypeObject
{
public:
    enum PeerNotifyEventsType {
        typePeerNotifyEventsEmpty = 0xadd53cb3,
        typePeerNotifyEventsAll = 0x6d1ded88
    };

    PeerNotifyEvents(PeerNotifyEventsType classType = typePeerNotifyEventsEmpty, InboundPkt *in = 0);
    PeerNotifyEvents(InboundPkt *in);
    virtual ~PeerNotifyEvents();

    void setClassType(PeerNotifyEventsType classType);
    PeerNotifyEventsType classType() const;

    bool fetch(InboundPkt *in);
    bool push(OutboundPkt *out) const;

    bool operator ==(const PeerNotifyEvents &b);

private:
    PeerNotifyEventsType m_classType;
};

#endif // LQTG_PEERNOTIFYEVENTS
