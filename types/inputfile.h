#ifndef LQTG_INPUTFILE
#define LQTG_INPUTFILE

#include "telegramtypeobject.h"
#include <QtGlobal>
#include <QString>

class InputFile : public TelegramTypeObject
{
public:
    enum InputFileType {
        typeInputFile = 0xf52ff27f,
        typeInputFileBig = 0xfa4f0bb5
    };

    InputFile(InputFileType classType = typeInputFile, InboundPkt *in = 0);
    InputFile(InboundPkt *in);
    virtual ~InputFile();

    void setId(qint64 id);
    qint64 id() const;

    void setMd5Checksum(const QString &md5Checksum);
    QString md5Checksum() const;

    void setName(const QString &name);
    QString name() const;

    void setParts(qint32 parts);
    qint32 parts() const;

    void setClassType(InputFileType classType);
    InputFileType classType() const;

    bool fetch(InboundPkt *in);
    bool push(OutboundPkt *out) const;

    bool operator ==(const InputFile &b);

private:
    qint64 m_id;
    QString m_md5Checksum;
    QString m_name;
    qint32 m_parts;
    InputFileType m_classType;
};

#endif // LQTG_INPUTFILE
