#ifndef LQTG_MESSAGESSTICKERSET
#define LQTG_MESSAGESSTICKERSET

#include "telegramtypeobject.h"
#include <QList>
#include "document.h"
#include "stickerpack.h"
#include "stickerset.h"

class MessagesStickerSet : public TelegramTypeObject
{
public:
    enum MessagesStickerSetType {
        typeMessagesStickerSet = 0xb60a24a6
    };

    MessagesStickerSet(MessagesStickerSetType classType = typeMessagesStickerSet, InboundPkt *in = 0);
    MessagesStickerSet(InboundPkt *in);
    virtual ~MessagesStickerSet();

    void setDocuments(const QList<Document> &documents);
    QList<Document> documents() const;

    void setPacks(const QList<StickerPack> &packs);
    QList<StickerPack> packs() const;

    void setSet(const StickerSet &set);
    StickerSet set() const;

    void setClassType(MessagesStickerSetType classType);
    MessagesStickerSetType classType() const;

    bool fetch(InboundPkt *in);
    bool push(OutboundPkt *out) const;

    bool operator ==(const MessagesStickerSet &b);

private:
    QList<Document> m_documents;
    QList<StickerPack> m_packs;
    StickerSet m_set;
    MessagesStickerSetType m_classType;
};

#endif // LQTG_MESSAGESSTICKERSET
