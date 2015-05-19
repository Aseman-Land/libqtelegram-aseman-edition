#ifndef STICKERPACK
#define STICKERPACK

#include <QtGlobal>

class StickerPack
{
public:

    enum StickerPackType {
       typeStickerPack = 0x12b299d4
    };

    StickerPack() :
        m_documents(0),
        m_classType(typeStickerPack) {}

    void setDocuments(qint64 documents) {
        m_documents = documents;
    }
    qint64 documents() const {
        return m_documents;
    }
    void setEmoticon(QString emoticon) {
        m_emoticon = emoticon;
    }
    QString emoticon() const {
        return m_emoticon;
    }
    void setClassType(StickerPackType classType) {
        m_classType = classType;
    }
    StickerPackType classType() const {
        return m_classType;
    }

private:
    QString m_emoticon;
    qint64 m_documents;
    StickerPackType m_classType;
};

#endif // STICKERPACK

