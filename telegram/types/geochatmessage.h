// This file generated by libqtelegram-code-generator.
// You can download it from: https://github.com/Aseman-Land/libqtelegram-code-generator
// DO NOT EDIT THIS FILE BY HAND -- YOUR CHANGES WILL BE OVERWRITTEN

#ifndef LQTG_TYPE_GEOCHATMESSAGE
#define LQTG_TYPE_GEOCHATMESSAGE

#include "telegramtypeobject.h"
#include "messageaction.h"
#include <QtGlobal>
#include "messagemedia.h"
#include <QString>

class LIBQTELEGRAMSHARED_EXPORT GeoChatMessage : public TelegramTypeObject
{
public:
    enum GeoChatMessageType {
        typeGeoChatMessageEmpty = 0x60311a9b,
        typeGeoChatMessage = 0x4505f8e1,
        typeGeoChatMessageService = 0xd34fa24e
    };

    GeoChatMessage(GeoChatMessageType classType = typeGeoChatMessageEmpty, InboundPkt *in = 0);
    GeoChatMessage(InboundPkt *in);
    virtual ~GeoChatMessage();

    void setAction(const MessageAction &action);
    MessageAction action() const;

    void setChatId(qint32 chatId);
    qint32 chatId() const;

    void setDate(qint32 date);
    qint32 date() const;

    void setFromId(qint32 fromId);
    qint32 fromId() const;

    void setId(qint32 id);
    qint32 id() const;

    void setMedia(const MessageMedia &media);
    MessageMedia media() const;

    void setMessage(const QString &message);
    QString message() const;

    void setClassType(GeoChatMessageType classType);
    GeoChatMessageType classType() const;

    bool fetch(InboundPkt *in);
    bool push(OutboundPkt *out) const;

    bool operator ==(const GeoChatMessage &b);

private:
    MessageAction m_action;
    qint32 m_chatId;
    qint32 m_date;
    qint32 m_fromId;
    qint32 m_id;
    MessageMedia m_media;
    QString m_message;
    GeoChatMessageType m_classType;
};

#endif // LQTG_TYPE_GEOCHATMESSAGE
