// This file generated by libqtelegram-code-generator.
// You can download it from: https://github.com/Aseman-Land/libqtelegram-code-generator
// DO NOT EDIT THIS FILE BY HAND -- YOUR CHANGES WILL BE OVERWRITTEN

#include "helpappchangelog.h"
#include "core/inboundpkt.h"
#include "core/outboundpkt.h"
#include "../coretypes.h"

#include <QDataStream>

HelpAppChangelog::HelpAppChangelog(HelpAppChangelogType classType, InboundPkt *in) :
    m_classType(classType)
{
    if(in) fetch(in);
}

HelpAppChangelog::HelpAppChangelog(InboundPkt *in) :
    m_classType(typeHelpAppChangelogEmpty)
{
    fetch(in);
}

HelpAppChangelog::HelpAppChangelog(const Null &null) :
    TelegramTypeObject(null),
    m_classType(typeHelpAppChangelogEmpty)
{
}

HelpAppChangelog::~HelpAppChangelog() {
}

void HelpAppChangelog::setText(const QString &text) {
    m_text = text;
}

QString HelpAppChangelog::text() const {
    return m_text;
}

bool HelpAppChangelog::operator ==(const HelpAppChangelog &b) const {
    return m_classType == b.m_classType &&
           m_text == b.m_text;
}

void HelpAppChangelog::setClassType(HelpAppChangelog::HelpAppChangelogType classType) {
    m_classType = classType;
}

HelpAppChangelog::HelpAppChangelogType HelpAppChangelog::classType() const {
    return m_classType;
}

bool HelpAppChangelog::fetch(InboundPkt *in) {
    LQTG_FETCH_LOG;
    int x = in->fetchInt();
    switch(x) {
    case typeHelpAppChangelogEmpty: {
        m_classType = static_cast<HelpAppChangelogType>(x);
        return true;
    }
        break;
    
    case typeHelpAppChangelog: {
        m_text = in->fetchQString();
        m_classType = static_cast<HelpAppChangelogType>(x);
        return true;
    }
        break;
    
    default:
        LQTG_FETCH_ASSERT;
        return false;
    }
}

bool HelpAppChangelog::push(OutboundPkt *out) const {
    out->appendInt(m_classType);
    switch(m_classType) {
    case typeHelpAppChangelogEmpty: {
        return true;
    }
        break;
    
    case typeHelpAppChangelog: {
        out->appendQString(m_text);
        return true;
    }
        break;
    
    default:
        return false;
    }
}

QDataStream &operator<<(QDataStream &stream, const HelpAppChangelog &item) {
    stream << static_cast<uint>(item.classType());
    switch(item.classType()) {
    case HelpAppChangelog::typeHelpAppChangelogEmpty:
        
        break;
    case HelpAppChangelog::typeHelpAppChangelog:
        stream << item.text();
        break;
    }
    return stream;
}

QDataStream &operator>>(QDataStream &stream, HelpAppChangelog &item) {
    uint type = 0;
    stream >> type;
    item.setClassType(static_cast<HelpAppChangelog::HelpAppChangelogType>(type));
    switch(type) {
    case HelpAppChangelog::typeHelpAppChangelogEmpty: {
        
    }
        break;
    case HelpAppChangelog::typeHelpAppChangelog: {
        QString m_text;
        stream >> m_text;
        item.setText(m_text);
    }
        break;
    }
    return stream;
}
