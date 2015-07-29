#ifndef LQTG_ENCRYPTEDMESSAGE
#define LQTG_ENCRYPTEDMESSAGE

#include "telegramtypeobject.h"
#include <QByteArray>
#include <QtGlobal>
#include "encryptedfile.h"

class EncryptedMessage : public TelegramTypeObject
{
public:
    enum EncryptedMessageType {
        typeEncryptedMessage = 0xed18c118,
        typeEncryptedMessageService = 0x23734b06
    };

    EncryptedMessage(EncryptedMessageType classType = typeEncryptedMessage, InboundPkt *in = 0);
    EncryptedMessage(InboundPkt *in);
    virtual ~EncryptedMessage();

    void setBytes(const QByteArray &bytes);
    QByteArray bytes() const;

    void setChatId(qint32 chatId);
    qint32 chatId() const;

    void setDate(qint32 date);
    qint32 date() const;

    void setFile(const EncryptedFile &file);
    EncryptedFile file() const;

    void setRandomId(qint64 randomId);
    qint64 randomId() const;

    void setClassType(EncryptedMessageType classType);
    EncryptedMessageType classType() const;

    bool fetch(InboundPkt *in);
    bool push(OutboundPkt *out) const;

    bool operator ==(const EncryptedMessage &b);

private:
    QByteArray m_bytes;
    qint32 m_chatId;
    qint32 m_date;
    EncryptedFile m_file;
    qint64 m_randomId;
    EncryptedMessageType m_classType;
};

#endif // LQTG_ENCRYPTEDMESSAGE
