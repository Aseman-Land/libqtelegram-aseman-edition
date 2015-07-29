#ifndef LQTG_INPUTVIDEO
#define LQTG_INPUTVIDEO

#include "telegramtypeobject.h"
#include <QtGlobal>

class InputVideo : public TelegramTypeObject
{
public:
    enum InputVideoType {
        typeInputVideoEmpty = 0x5508ec75,
        typeInputVideo = 0xee579652
    };

    InputVideo(InputVideoType classType = typeInputVideoEmpty, InboundPkt *in = 0);
    InputVideo(InboundPkt *in);
    virtual ~InputVideo();

    void setAccessHash(qint64 accessHash);
    qint64 accessHash() const;

    void setId(qint64 id);
    qint64 id() const;

    void setClassType(InputVideoType classType);
    InputVideoType classType() const;

    bool fetch(InboundPkt *in);
    bool push(OutboundPkt *out) const;

    bool operator ==(const InputVideo &b);

private:
    qint64 m_accessHash;
    qint64 m_id;
    InputVideoType m_classType;
};

#endif // LQTG_INPUTVIDEO
