#ifndef TELEGRAMTYPEOBJECT_H
#define TELEGRAMTYPEOBJECT_H

#ifdef LQTG_DISABLE_ASSERTS
#define LQTG_FETCH_ASSERT
#define LQTG_PUSH_ASSERT
#else
#include <QtGlobal>

#define LQTG_FETCH_ASSERT qt_assert("x",__FILE__,__LINE__)
#define LQTG_PUSH_ASSERT qt_assert("x",__FILE__,__LINE__)
#endif

#ifdef LQTG_DISABLE_LOG
#define LQTG_FETCH_LOG
#define LQTG_PUSH_LOG
#else
#include <QDebug>
#define LQTG_FETCH_LOG qDebug() << this << __PRETTY_FUNCTION__;
#define LQTG_PUSH_LOG qDebug() << this << __PRETTY_FUNCTION__;
#endif

#include "core/inboundpkt.h"
#include "core/outboundpkt.h"

class TelegramTypeObject
{
public:
    TelegramTypeObject();
    ~TelegramTypeObject();

    virtual bool fetch(InboundPkt *in) = 0;
    virtual bool push(OutboundPkt *out) const = 0;
};

#endif // TELEGRAMTYPEOBJECT_H
