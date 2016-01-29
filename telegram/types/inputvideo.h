// This file generated by libqtelegram-code-generator.
// You can download it from: https://github.com/Aseman-Land/libqtelegram-code-generator
// DO NOT EDIT THIS FILE BY HAND -- YOUR CHANGES WILL BE OVERWRITTEN

#ifndef LQTG_TYPE_INPUTVIDEO
#define LQTG_TYPE_INPUTVIDEO

#include "telegramtypeobject.h"

#include <QMetaType>
#include <QtGlobal>

class LIBQTELEGRAMSHARED_EXPORT InputVideo : public TelegramTypeObject
{
public:
    enum InputVideoType {
        typeInputVideoEmpty = 0x5508ec75,
        typeInputVideo = 0xee579652
    };

    InputVideo(InputVideoType classType = typeInputVideoEmpty, InboundPkt *in = 0);
    InputVideo(InboundPkt *in);
    InputVideo(const Null&);
    virtual ~InputVideo();

    void setAccessHash(qint64 accessHash);
    qint64 accessHash() const;

    void setId(qint64 id);
    qint64 id() const;

    void setClassType(InputVideoType classType);
    InputVideoType classType() const;

    bool fetch(InboundPkt *in);
    bool push(OutboundPkt *out) const;

    bool operator ==(const InputVideo &b) const;

    bool operator==(bool stt) const { return isNull() != stt; }
    bool operator!=(bool stt) const { return !operator ==(stt); }

private:
    qint64 m_accessHash;
    qint64 m_id;
    InputVideoType m_classType;
};

Q_DECLARE_METATYPE(InputVideo)

#endif // LQTG_TYPE_INPUTVIDEO