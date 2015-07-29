#ifndef LQTG_INPUTAPPEVENT
#define LQTG_INPUTAPPEVENT

#include "telegramtypeobject.h"
#include <QString>
#include <QtGlobal>

class InputAppEvent : public TelegramTypeObject
{
public:
    enum InputAppEventType {
        typeInputAppEvent = 0x770656a8
    };

    InputAppEvent(InputAppEventType classType = typeInputAppEvent, InboundPkt *in = 0);
    InputAppEvent(InboundPkt *in);
    virtual ~InputAppEvent();

    void setData(const QString &data);
    QString data() const;

    void setPeer(qint64 peer);
    qint64 peer() const;

    void setTime(qreal time);
    qreal time() const;

    void setType(const QString &type);
    QString type() const;

    void setClassType(InputAppEventType classType);
    InputAppEventType classType() const;

    bool fetch(InboundPkt *in);
    bool push(OutboundPkt *out) const;

    bool operator ==(const InputAppEvent &b);

private:
    QString m_data;
    qint64 m_peer;
    qreal m_time;
    QString m_type;
    InputAppEventType m_classType;
};

#endif // LQTG_INPUTAPPEVENT
