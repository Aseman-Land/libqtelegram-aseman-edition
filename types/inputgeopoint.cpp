#include "inputgeopoint.h"
#include "core/inboundpkt.h"
#include "core/outboundpkt.h"

InputGeoPoint::InputGeoPoint(InputGeoPointType classType, InboundPkt *in) :
    m_lat(0),
    m_longValue(0),
    m_classType(classType)
{
    if(in) fetch(in);
}

InputGeoPoint::InputGeoPoint(InboundPkt *in) :
    m_lat(0),
    m_longValue(0),
    m_classType(typeInputGeoPointEmpty)
{
    fetch(in);
}

void InputGeoPoint::setLat(qreal lat) {
    m_lat = lat;
}

qreal InputGeoPoint::lat() const {
    return m_lat;
}

void InputGeoPoint::setLongValue(qreal longValue) {
    m_longValue = longValue;
}

qreal InputGeoPoint::longValue() const {
    return m_longValue;
}

bool InputGeoPoint::operator ==(const InputGeoPoint &b) {
    return m_lat == b.m_lat &&
           m_longValue == b.m_longValue;
}

void InputGeoPoint::setClassType(InputGeoPoint::InputGeoPointType classType) {
    m_classType = classType;
}

InputGeoPoint::InputGeoPointType InputGeoPoint::classType() const {
    return m_classType;
}

bool InputGeoPoint::fetch(InboundPkt *in) {

    int x = in->fetchInt();
    switch(x) {
    case typeInputGeoPointEmpty: {
        return true;
    }
        break;
    
    case typeInputGeoPoint: {
        m_lat = in->fetchDouble();
        m_longValue = in->fetchDouble();
        return true;
    }
        break;
    
    default:
        LQTG_FETCH_ASSERT;
        return false;
    }
}

bool InputGeoPoint::push(OutboundPkt *out) const {

    out->appendInt(m_classType);
    switch(m_classType) {
    case typeInputGeoPointEmpty: {
        return true;
    }
        break;
    
    case typeInputGeoPoint: {
        out->appendDouble(m_lat);
        out->appendDouble(m_longValue);
        return true;
    }
        break;
    
    default:
        return false;
    }
}

