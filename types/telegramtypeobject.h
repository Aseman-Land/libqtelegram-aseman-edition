#ifndef TELEGRAMTYPEOBJECT_H
#define TELEGRAMTYPEOBJECT_H

#include <QtGlobal>

#ifdef LQTG_DISABLE_ASSERTS
#define LQTG_FETCH_ASSERT
#else
#define LQTG_FETCH_ASSERT qt_assert("x",__FILE__,__LINE__)
#endif

class InboundPkt;
class OutboundPkt;
class TelegramTypeObject
{
public:
    TelegramTypeObject();
    ~TelegramTypeObject();

    virtual bool fetch(InboundPkt *in) = 0;
    virtual bool push(OutboundPkt *out) const = 0;
};

#endif // TELEGRAMTYPEOBJECT_H
