#ifndef LQTG_INPUTPHOTOCROP
#define LQTG_INPUTPHOTOCROP

#include "telegramtypeobject.h"
#include <QtGlobal>

class InputPhotoCrop : public TelegramTypeObject
{
public:
    enum InputPhotoCropType {
        typeInputPhotoCropAuto = 0xade6b004,
        typeInputPhotoCrop = 0xd9915325
    };

    InputPhotoCrop(InputPhotoCropType classType = typeInputPhotoCropAuto, InboundPkt *in = 0);
    InputPhotoCrop(InboundPkt *in);
    virtual ~InputPhotoCrop();

    void setCropLeft(qreal cropLeft);
    qreal cropLeft() const;

    void setCropTop(qreal cropTop);
    qreal cropTop() const;

    void setCropWidth(qreal cropWidth);
    qreal cropWidth() const;

    void setClassType(InputPhotoCropType classType);
    InputPhotoCropType classType() const;

    bool fetch(InboundPkt *in);
    bool push(OutboundPkt *out) const;

    bool operator ==(const InputPhotoCrop &b);

private:
    qreal m_cropLeft;
    qreal m_cropTop;
    qreal m_cropWidth;
    InputPhotoCropType m_classType;
};

#endif // LQTG_INPUTPHOTOCROP
