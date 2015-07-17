#ifndef DOCUMENTATTRIBUTE
#define DOCUMENTATTRIBUTE

#include <QtGlobal>
#include "inputstickerset.h"

class DocumentAttribute
{
public:

    enum DocumentAttributeType {
        typeAttributeImageSize = 0x6c37c15c,
        typeAttributeAnimated = 0x11b58939,
        typeAttributeSticker = 0x3a556302,
        typeAttributeVideo = 0x5910cccb,
        typeAttributeAudio = 0x51448e5,
        typeAttributeFilename = 0x15590068,
        typeAttributeDecryptedSticker = 0xfb0a5727
    };

    DocumentAttribute(DocumentAttributeType type) :
        m_h(0),
        m_w(0),
        m_duration(0),
        m_stickerset(InputStickerSet::typeInputStickerSetEmpty),
        m_classType(type) {}

    InputStickerSet stickerset() const {
        return m_stickerset;
    }
    void setStickerset(const InputStickerSet &stickerset) {
        m_stickerset = stickerset;
    }
    void setH(int h) {
        m_h = h;
    }
    int h() const {
        return m_h;
    }
    void setW(int w) {
        m_w = w;
    }
    int w() const {
        return m_w;
    }
    void setDuration(int dr) {
        m_duration = dr;
    }
    int duration() const {
        return m_duration;
    }
    void setFilename(const QString &filename) {
        m_filename = filename;
    }
    QString filename() const {
        return m_filename;
    }
    QString alt() const {
        return m_alt;
    }
    void setAlt(const QString &alt) {
        m_alt = alt;
    }
    void setClassType(DocumentAttributeType classType) {
        m_classType = classType;
    }
    DocumentAttributeType classType() const {
        return m_classType;
    }

private:
    int m_h;
    int m_w;
    int m_duration;
    QString m_alt;
    QString m_filename;
    InputStickerSet m_stickerset;
    DocumentAttributeType m_classType;
};

#endif // DOCUMENTATTRIBUTE
