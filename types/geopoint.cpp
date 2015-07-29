#include "geopoint.h"
#include "core/inboundpkt.h"
#include "core/outboundpkt.h"

GeoPoint::GeoPoint(GeoPointType classType, InboundPkt *in) :
    m_lat(0),
    m_longValue(0),
    m_classType(classType)
{
    if(in) fetch(in);
}

GeoPoint::GeoPoint(InboundPkt *in) :
    m_lat(0),
    m_longValue(0),
    m_classType(typeGeoPointEmpty)
{
    fetch(in);
}

void GeoPoint::setLat(qreal lat) {
    m_lat = lat;
}

qreal GeoPoint::lat() const {
    return m_lat;
}

void GeoPoint::setLongValue(qreal longValue) {
    m_longValue = longValue;
}

qreal GeoPoint::longValue() const {
    return m_longValue;
}

bool GeoPoint::operator ==(const GeoPoint &b) {
    return m_lat == b.m_lat &&
           m_longValue == b.m_longValue;
}

void GeoPoint::setClassType(GeoPoint::GeoPointType classType) {
    m_classType = classType;
}

GeoPoint::GeoPointType GeoPoint::classType() const {
    return m_classType;
}

bool GeoPoint::fetch(InboundPkt *in) {

    int x = in->fetchInt();
    switch(x) {
    case typeGeoPointEmpty: {
        return true;
    }
        break;
    
    case typeGeoPoint: {
        m_longValue = in->fetchDouble();
        m_lat = in->fetchDouble();
        return true;
    }
        break;
    
    default:
        LQTG_FETCH_ASSERT;
        return false;
    }
}

bool GeoPoint::push(OutboundPkt *out) const {

    out->appendInt(m_classType);
    switch(m_classType) {
    case typeGeoPointEmpty: {
        return true;
    }
        break;
    
    case typeGeoPoint: {
        out->appendDouble(m_longValue);
        out->appendDouble(m_lat);
        return true;
    }
        break;
    
    default:
        return false;
    }
}

