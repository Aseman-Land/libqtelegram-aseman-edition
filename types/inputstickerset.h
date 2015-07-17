#ifndef INPUTSTICKERSET
#define INPUTSTICKERSET

#include <QtGlobal>

class InputStickerSet
{
public:

    enum InputStickerSetType {
       typeInputStickerSetEmpty = 0xffb62b95,
       typeInputStickerSetID = 0x9de7a269,
       typeInputStickerSetShortName = 0x861cc8a0
    };

    InputStickerSet(InputStickerSetType classType) :
        mId(0),
        mAccessHash(0),
        m_classType(classType) {}

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
    void setClassType(InputStickerSetType classType) {
        m_classType = classType;
    }
    InputStickerSetType classType() const {
        return m_classType;
    }

private:
    QString mShortName;
    qint64 mId;
    qint64 mAccessHash;
    InputStickerSetType m_classType;
};

#endif // INPUTSTICKERSET
