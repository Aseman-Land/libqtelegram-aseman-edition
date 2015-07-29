#ifndef LQTG_MESSAGESSTICKERS
#define LQTG_MESSAGESSTICKERS

#include "telegramtypeobject.h"
#include <QString>
#include <QList>
#include "document.h"

class MessagesStickers : public TelegramTypeObject
{
public:
    enum MessagesStickersType {
        typeMessagesStickersNotModified = 0xf1749a22,
        typeMessagesStickers = 0x8a8ecd32
    };

    MessagesStickers(MessagesStickersType classType = typeMessagesStickersNotModified, InboundPkt *in = 0);
    MessagesStickers(InboundPkt *in);
    virtual ~MessagesStickers();

    void setHash(const QString &hash);
    QString hash() const;

    void setStickers(const QList<Document> &stickers);
    QList<Document> stickers() const;

    void setClassType(MessagesStickersType classType);
    MessagesStickersType classType() const;

    bool fetch(InboundPkt *in);
    bool push(OutboundPkt *out) const;

    bool operator ==(const MessagesStickers &b);

private:
    QString m_hash;
    QList<Document> m_stickers;
    MessagesStickersType m_classType;
};

#endif // LQTG_MESSAGESSTICKERS
