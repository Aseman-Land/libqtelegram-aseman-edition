// This file generated by libqtelegram-code-generator.
// You can download it from: https://github.com/Aseman-Land/libqtelegram-code-generator
// DO NOT EDIT THIS FILE BY HAND -- YOUR CHANGES WILL BE OVERWRITTEN

#ifndef LQTG_TYPE_EXPORTEDMESSAGELINK_OBJECT
#define LQTG_TYPE_EXPORTEDMESSAGELINK_OBJECT

#include "telegramtypeqobject.h"
#include "telegram/types/exportedmessagelink.h"

#include <QPointer>

class LIBQTELEGRAMSHARED_EXPORT ExportedMessageLinkObject : public TelegramTypeQObject
{
    Q_OBJECT
    Q_ENUMS(ExportedMessageLinkType)
    Q_PROPERTY(QString link READ link WRITE setLink NOTIFY linkChanged)
    Q_PROPERTY(ExportedMessageLink core READ core WRITE setCore NOTIFY coreChanged)
    Q_PROPERTY(quint32 classType READ classType WRITE setClassType NOTIFY classTypeChanged)

public:
    enum ExportedMessageLinkType {
        TypeExportedMessageLink
    };

    ExportedMessageLinkObject(const ExportedMessageLink &core, QObject *parent = 0);
    ExportedMessageLinkObject(QObject *parent = 0);
    virtual ~ExportedMessageLinkObject();

    void setLink(const QString &link);
    QString link() const;

    void setClassType(quint32 classType);
    quint32 classType() const;

    void setCore(const ExportedMessageLink &core);
    ExportedMessageLink core() const;

    ExportedMessageLinkObject &operator =(const ExportedMessageLink &b);
    bool operator ==(const ExportedMessageLink &b) const;

Q_SIGNALS:
    void coreChanged();
    void classTypeChanged();
    void linkChanged();

private Q_SLOTS:

private:
    ExportedMessageLink m_core;
};

#endif // LQTG_TYPE_EXPORTEDMESSAGELINK_OBJECT