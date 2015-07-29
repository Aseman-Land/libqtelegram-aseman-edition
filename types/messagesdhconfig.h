#ifndef LQTG_MESSAGESDHCONFIG
#define LQTG_MESSAGESDHCONFIG

#include "telegramtypeobject.h"
#include <QtGlobal>
#include <QByteArray>

class MessagesDhConfig : public TelegramTypeObject
{
public:
    enum MessagesDhConfigType {
        typeMessagesDhConfigNotModified = 0xc0e24635,
        typeMessagesDhConfig = 0x2c221edd
    };

    MessagesDhConfig(MessagesDhConfigType classType = typeMessagesDhConfigNotModified, InboundPkt *in = 0);
    MessagesDhConfig(InboundPkt *in);
    virtual ~MessagesDhConfig();

    void setG(qint32 g);
    qint32 g() const;

    void setP(const QByteArray &p);
    QByteArray p() const;

    void setRandom(const QByteArray &random);
    QByteArray random() const;

    void setVersion(qint32 version);
    qint32 version() const;

    void setClassType(MessagesDhConfigType classType);
    MessagesDhConfigType classType() const;

    bool fetch(InboundPkt *in);
    bool push(OutboundPkt *out) const;

    bool operator ==(const MessagesDhConfig &b);

private:
    qint32 m_g;
    QByteArray m_p;
    QByteArray m_random;
    qint32 m_version;
    MessagesDhConfigType m_classType;
};

#endif // LQTG_MESSAGESDHCONFIG
