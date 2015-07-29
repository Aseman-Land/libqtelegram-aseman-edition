#ifndef LQTG_STICKERSET
#define LQTG_STICKERSET

#include "telegramtypeobject.h"
#include <QtGlobal>
#include <QString>

class StickerSet : public TelegramTypeObject
{
public:
    enum StickerSetType {
        typeStickerSet = 0xa7a43b17
    };

    StickerSet(StickerSetType classType = typeStickerSet, InboundPkt *in = 0);
    StickerSet(InboundPkt *in);
    virtual ~StickerSet();

    void setAccessHash(qint64 accessHash);
    qint64 accessHash() const;

    void setId(qint64 id);
    qint64 id() const;

    void setShortName(const QString &shortName);
    QString shortName() const;

    void setTitle(const QString &title);
    QString title() const;

    void setClassType(StickerSetType classType);
    StickerSetType classType() const;

    bool fetch(InboundPkt *in);
    bool push(OutboundPkt *out) const;

    bool operator ==(const StickerSet &b);

private:
    qint64 m_accessHash;
    qint64 m_id;
    QString m_shortName;
    QString m_title;
    StickerSetType m_classType;
};

#endif // LQTG_STICKERSET
