// This file generated by libqtelegram-code-generator.
// You can download it from: https://github.com/Aseman-Land/libqtelegram-code-generator
// DO NOT EDIT THIS FILE BY HAND -- YOUR CHANGES WILL BE OVERWRITTEN

#ifndef LQTG_TYPE_INPUTBOTINLINEMESSAGE
#define LQTG_TYPE_INPUTBOTINLINEMESSAGE

#include "telegramtypeobject.h"

#include <QMetaType>
#include <QString>
#include <QList>
#include "messageentity.h"
#include <QtGlobal>

class LIBQTELEGRAMSHARED_EXPORT InputBotInlineMessage : public TelegramTypeObject
{
public:
    enum InputBotInlineMessageType {
        typeInputBotInlineMessageMediaAuto = 0x2e43e587,
        typeInputBotInlineMessageText = 0xadf0df71
    };

    InputBotInlineMessage(InputBotInlineMessageType classType = typeInputBotInlineMessageMediaAuto, InboundPkt *in = 0);
    InputBotInlineMessage(InboundPkt *in);
    InputBotInlineMessage(const Null&);
    virtual ~InputBotInlineMessage();

    void setCaption(const QString &caption);
    QString caption() const;

    void setEntities(const QList<MessageEntity> &entities);
    QList<MessageEntity> entities() const;

    void setFlags(qint32 flags);
    qint32 flags() const;

    void setMessage(const QString &message);
    QString message() const;

    void setNoWebpage(bool noWebpage);
    bool noWebpage() const;

    void setClassType(InputBotInlineMessageType classType);
    InputBotInlineMessageType classType() const;

    bool fetch(InboundPkt *in);
    bool push(OutboundPkt *out) const;

    bool operator ==(const InputBotInlineMessage &b) const;

    bool operator==(bool stt) const { return isNull() != stt; }
    bool operator!=(bool stt) const { return !operator ==(stt); }

private:
    QString m_caption;
    QList<MessageEntity> m_entities;
    qint32 m_flags;
    QString m_message;
    InputBotInlineMessageType m_classType;
};

Q_DECLARE_METATYPE(InputBotInlineMessage)

QDataStream LIBQTELEGRAMSHARED_EXPORT &operator<<(QDataStream &stream, const InputBotInlineMessage &item);
QDataStream LIBQTELEGRAMSHARED_EXPORT &operator>>(QDataStream &stream, InputBotInlineMessage &item);

#endif // LQTG_TYPE_INPUTBOTINLINEMESSAGE