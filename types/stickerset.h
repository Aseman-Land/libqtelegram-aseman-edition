#ifndef STICKERSET
#define STICKERSET

#include <QtGlobal>

class StickerSet
{
public:

    enum StickerSetType {
       typeStickerSet = 0xa7a43b17
    };

    StickerSet() :
        mId(0),
        mAccessHash(0),
        m_classType(typeStickerSet) {}

    QString shortName() const {
        return mShortName;
    }
    void setShortName(const QString &shortName) {
        mShortName = shortName;
    }
    qint64 id() const {
        return mId;
    }
    void setId(const qint64 &id) {
        mId = id;
    }
    qint64 accessHash() const {
        return mAccessHash;
    }
    void setAccessHash(const qint64 &accessHash) {
        mAccessHash = accessHash;
    }
    QString title() const {
        return mTitle;
    }
    void setTitle(const QString &title) {
        mTitle = title;
    }
    void setClassType(StickerSetType classType) {
        m_classType = classType;
    }
    StickerSetType classType() const {
        return m_classType;
    }

private:
    QString mShortName;
    QString mTitle;
    qint64 mId;
    qint64 mAccessHash;
    StickerSetType m_classType;
};

#endif // STICKERSET
