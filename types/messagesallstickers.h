#ifndef MESSAGESALLSTICKERS
#define MESSAGESALLSTICKERS

#include <QtGlobal>
#include "stickerpack.h"
#include "document.h"
#include "stickerset.h"

class MessagesAllStickers
{
public:

    enum MessagesAllStickersType {
       typeMessagesAllStickersNotModified = 0xe86602c3,
       typeMessagesAllStickers = 0x5ce352ec
    };

    QList<StickerSet> sets() const {
        return m_sets;
    }
    void setSets(const QList<StickerSet> &sets) {
        m_sets = sets;
    }
    MessagesAllStickers(MessagesAllStickersType classType) :
        m_classType(classType) {}

    void setDocuments(QList<Document> documents) {
        m_documents = documents;
    }
    QList<Document> documents() const {
        return m_documents;
    }
    void setPacks(QList<StickerPack> packs) {
        m_packs = packs;
    }
    QList<StickerPack> packs() const {
        return m_packs;
    }
    void setHash(QString hash) {
        m_hash = hash;
    }
    QString hash() const {
        return m_hash;
    }
    void setClassType(MessagesAllStickersType classType) {
        m_classType = classType;
    }
    MessagesAllStickersType classType() const {
        return m_classType;
    }

private:
    QString m_hash;
    QList<StickerPack> m_packs;
    QList<Document> m_documents;
    QList<StickerSet> m_sets;
    MessagesAllStickersType m_classType;
};

#endif // MESSAGESALLSTICKERS
