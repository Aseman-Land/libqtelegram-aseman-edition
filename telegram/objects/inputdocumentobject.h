// This file generated by libqtelegram-code-generator.
// You can download it from: https://github.com/Aseman-Land/libqtelegram-code-generator
// DO NOT EDIT THIS FILE BY HAND -- YOUR CHANGES WILL BE OVERWRITTEN

#ifndef LQTG_TYPE_INPUTDOCUMENT_OBJECT
#define LQTG_TYPE_INPUTDOCUMENT_OBJECT

#include "telegramtypeqobject.h"
#include "telegram/types/inputdocument.h"

#include <QPointer>

class LIBQTELEGRAMSHARED_EXPORT InputDocumentObject : public TelegramTypeQObject
{
    Q_OBJECT
    Q_ENUMS(InputDocumentType)
    Q_PROPERTY(qint64 accessHash READ accessHash WRITE setAccessHash NOTIFY accessHashChanged)
    Q_PROPERTY(qint64 id READ id WRITE setId NOTIFY idChanged)
    Q_PROPERTY(InputDocument core READ core WRITE setCore NOTIFY coreChanged)
    Q_PROPERTY(quint32 classType READ classType WRITE setClassType NOTIFY classTypeChanged)

public:
    enum InputDocumentType {
        TypeInputDocumentEmpty,
        TypeInputDocument
    };

    InputDocumentObject(const InputDocument &core, QObject *parent = 0);
    InputDocumentObject(QObject *parent = 0);
    virtual ~InputDocumentObject();

    void setAccessHash(qint64 accessHash);
    qint64 accessHash() const;

    void setId(qint64 id);
    qint64 id() const;

    void setClassType(quint32 classType);
    quint32 classType() const;

    void setCore(const InputDocument &core);
    InputDocument core() const;

    InputDocumentObject &operator =(const InputDocument &b);
    bool operator ==(const InputDocument &b) const;

Q_SIGNALS:
    void coreChanged();
    void classTypeChanged();
    void accessHashChanged();
    void idChanged();

private Q_SLOTS:

private:
    InputDocument m_core;
};

#endif // LQTG_TYPE_INPUTDOCUMENT_OBJECT