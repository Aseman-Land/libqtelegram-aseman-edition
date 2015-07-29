#ifndef LQTG_PEER
#define LQTG_PEER

#include "telegramtypeobject.h"
#include <QtGlobal>

class Peer : public TelegramTypeObject
{
public:
    enum PeerType {
        typePeerUser = 0x9db1bc6d,
        typePeerChat = 0xbad0e5bb
    };

    Peer(PeerType classType = typePeerUser, InboundPkt *in = 0);
    Peer(InboundPkt *in);
    virtual ~Peer();

    void setChatId(qint32 chatId);
    qint32 chatId() const;

    void setUserId(qint32 userId);
    qint32 userId() const;

    void setClassType(PeerType classType);
    PeerType classType() const;

    bool fetch(InboundPkt *in);
    bool push(OutboundPkt *out) const;

    bool operator ==(const Peer &b);

private:
    qint32 m_chatId;
    qint32 m_userId;
    PeerType m_classType;
};

#endif // LQTG_PEER
