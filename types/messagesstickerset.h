#ifndef MESSAGESSTICKERSET
#define MESSAGESSTICKERSET

#include <QtGlobal>
#include "stickerset.h"
#include "stickerpack.h"
#include "document.h"

class MessagesStickerSet
{
public:

    enum MessagesStickerSetType {
       typeMessagesStickerSet = 0xb60a24a6
    };

    MessagesStickerSet() :
        m_documents(Document::typeDocumentEmpty),
        m_classType(MessagesStickerSetType) {}

    StickerSet set() const {
        return m_set;
    }
    void setSet(const StickerSet &set) {
        m_set = set;
    }
    QList<StickerPack> packs() const {
        return m_packs;
    }
    void setPacks(const QList<StickerPack> &packs) {
        m_packs = packs;
    }
    QList<Document> documents() const {
        return m_documents;
    }
    void setDocuments(const QList<Document> &documents) {
        m_documents = documents;
    }
    void setClassType(MessagesStickerSetType classType) {
        m_classType = classType;
    }
    MessagesStickerSetType classType() const {
        return m_classType;
    }

private:
    StickerSet m_set;
    QList<StickerPack> m_packs;
    QList<Document> m_documents;
    MessagesStickerSetType m_classType;
};

#endif // MESSAGESSTICKERSET

