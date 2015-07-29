#ifndef LQTG_INPUTFILELOCATION
#define LQTG_INPUTFILELOCATION

#include "telegramtypeobject.h"
#include <QtGlobal>

class InputFileLocation : public TelegramTypeObject
{
public:
    enum InputFileLocationType {
        typeInputFileLocation = 0x14637196,
        typeInputVideoFileLocation = 0x3d0364ec,
        typeInputEncryptedFileLocation = 0xf5235d55,
        typeInputAudioFileLocation = 0x74dc404d,
        typeInputDocumentFileLocation = 0x4e45abe9
    };

    InputFileLocation(InputFileLocationType classType = typeInputFileLocation, InboundPkt *in = 0);
    InputFileLocation(InboundPkt *in);
    virtual ~InputFileLocation();

    void setAccessHash(qint64 accessHash);
    qint64 accessHash() const;

    void setId(qint64 id);
    qint64 id() const;

    void setLocalId(qint32 localId);
    qint32 localId() const;

    void setSecret(qint64 secret);
    qint64 secret() const;

    void setVolumeId(qint64 volumeId);
    qint64 volumeId() const;

    void setClassType(InputFileLocationType classType);
    InputFileLocationType classType() const;

    bool fetch(InboundPkt *in);
    bool push(OutboundPkt *out) const;

    bool operator ==(const InputFileLocation &b);

private:
    qint64 m_accessHash;
    qint64 m_id;
    qint32 m_localId;
    qint64 m_secret;
    qint64 m_volumeId;
    InputFileLocationType m_classType;
};

#endif // LQTG_INPUTFILELOCATION
