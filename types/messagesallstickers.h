#ifndef LQTG_MESSAGESALLSTICKERS
#define LQTG_MESSAGESALLSTICKERS

#include "telegramtypeobject.h"
#include <QList>
#include "document.h"
#include <QString>
#include "stickerpack.h"
#include "stickerset.h"

class MessagesAllStickers : public TelegramTypeObject
{
public:
    enum MessagesAllStickersType {
        typeMessagesAllStickersNotModified = 0xe86602c3,
        typeMessagesAllStickers = 0x5ce352ec
    };

    MessagesAllStickers(MessagesAllStickersType classType = typeMessagesAllStickersNotModified, InboundPkt *in = 0);
    MessagesAllStickers(InboundPkt *in);
    virtual ~MessagesAllStickers();

    void setDocuments(const QList<Document> &documents);
    QList<Document> documents() const;

    void setHash(const QString &hash);
    QString hash() const;

    void setPacks(const QList<StickerPack> &packs);
    QList<StickerPack> packs() const;

    void setSets(const QList<StickerSet> &sets);
    QList<StickerSet> sets() const;

    void setClassType(MessagesAllStickersType classType);
    MessagesAllStickersType classType() const;

    bool fetch(InboundPkt *in);
    bool push(OutboundPkt *out) const;

    bool operator ==(const MessagesAllStickers &b);

private:
    QList<Document> m_documents;
    QString m_hash;
    QList<StickerPack> m_packs;
    QList<StickerSet> m_sets;
    MessagesAllStickersType m_classType;
};

#endif // LQTG_MESSAGESALLSTICKERS
