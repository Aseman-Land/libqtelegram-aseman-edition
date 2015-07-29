#ifndef LQTG_STICKERPACK
#define LQTG_STICKERPACK

#include "telegramtypeobject.h"
#include <QList>
#include <QtGlobal>
#include <QString>

class StickerPack : public TelegramTypeObject
{
public:
    enum StickerPackType {
        typeStickerPack = 0x12b299d4
    };

    StickerPack(StickerPackType classType = typeStickerPack, InboundPkt *in = 0);
    StickerPack(InboundPkt *in);
    virtual ~StickerPack();

    void setDocuments(const QList<qint64> &documents);
    QList<qint64> documents() const;

    void setEmoticon(const QString &emoticon);
    QString emoticon() const;

    void setClassType(StickerPackType classType);
    StickerPackType classType() const;

    bool fetch(InboundPkt *in);
    bool push(OutboundPkt *out) const;

    bool operator ==(const StickerPack &b);

private:
    QList<qint64> m_documents;
    QString m_emoticon;
    StickerPackType m_classType;
};

#endif // LQTG_STICKERPACK
