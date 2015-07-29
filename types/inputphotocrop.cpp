#include "inputphotocrop.h"
#include "core/inboundpkt.h"
#include "core/outboundpkt.h"

InputPhotoCrop::InputPhotoCrop(InputPhotoCropType classType, InboundPkt *in) :
    m_cropLeft(0),
    m_cropTop(0),
    m_cropWidth(0),
    m_classType(classType)
{
    if(in) fetch(in);
}

InputPhotoCrop::InputPhotoCrop(InboundPkt *in) :
    m_cropLeft(0),
    m_cropTop(0),
    m_cropWidth(0),
    m_classType(typeInputPhotoCropAuto)
{
    fetch(in);
}

void InputPhotoCrop::setCropLeft(qreal cropLeft) {
    m_cropLeft = cropLeft;
}

qreal InputPhotoCrop::cropLeft() const {
    return m_cropLeft;
}

void InputPhotoCrop::setCropTop(qreal cropTop) {
    m_cropTop = cropTop;
}

qreal InputPhotoCrop::cropTop() const {
    return m_cropTop;
}

void InputPhotoCrop::setCropWidth(qreal cropWidth) {
    m_cropWidth = cropWidth;
}

qreal InputPhotoCrop::cropWidth() const {
    return m_cropWidth;
}

bool InputPhotoCrop::operator ==(const InputPhotoCrop &b) {
    return m_cropLeft == b.m_cropLeft &&
           m_cropTop == b.m_cropTop &&
           m_cropWidth == b.m_cropWidth;
}

void InputPhotoCrop::setClassType(InputPhotoCrop::InputPhotoCropType classType) {
    m_classType = classType;
}

InputPhotoCrop::InputPhotoCropType InputPhotoCrop::classType() const {
    return m_classType;
}

bool InputPhotoCrop::fetch(InboundPkt *in) {

    int x = in->fetchInt();
    switch(x) {
    case typeInputPhotoCropAuto: {
        return true;
    }
        break;
    
    case typeInputPhotoCrop: {
        m_cropLeft = in->fetchDouble();
        m_cropTop = in->fetchDouble();
        m_cropWidth = in->fetchDouble();
        return true;
    }
        break;
    
    default:
        LQTG_FETCH_ASSERT;
        return false;
    }
}

bool InputPhotoCrop::push(OutboundPkt *out) const {

    out->appendInt(m_classType);
    switch(m_classType) {
    case typeInputPhotoCropAuto: {
        return true;
    }
        break;
    
    case typeInputPhotoCrop: {
        out->appendDouble(m_cropLeft);
        out->appendDouble(m_cropTop);
        out->appendDouble(m_cropWidth);
        return true;
    }
        break;
    
    default:
        return false;
    }
}

