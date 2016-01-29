// This file generated by libqtelegram-code-generator.
// You can download it from: https://github.com/Aseman-Land/libqtelegram-code-generator
// DO NOT EDIT THIS FILE BY HAND -- YOUR CHANGES WILL BE OVERWRITTEN

#include "dialog.h"
#include "core/inboundpkt.h"
#include "core/outboundpkt.h"
#include "../coretypes.h"

Dialog::Dialog(DialogType classType, InboundPkt *in) :
    m_pts(0),
    m_readInboxMaxId(0),
    m_topImportantMessage(0),
    m_topMessage(0),
    m_unreadCount(0),
    m_unreadImportantCount(0),
    m_classType(classType)
{
    if(in) fetch(in);
}

Dialog::Dialog(InboundPkt *in) :
    m_pts(0),
    m_readInboxMaxId(0),
    m_topImportantMessage(0),
    m_topMessage(0),
    m_unreadCount(0),
    m_unreadImportantCount(0),
    m_classType(typeDialog)
{
    fetch(in);
}

Dialog::Dialog(const Null &null) :
    TelegramTypeObject(null),
    m_pts(0),
    m_readInboxMaxId(0),
    m_topImportantMessage(0),
    m_topMessage(0),
    m_unreadCount(0),
    m_unreadImportantCount(0),
    m_classType(typeDialog)
{
}

Dialog::~Dialog() {
}

void Dialog::setNotifySettings(const PeerNotifySettings &notifySettings) {
    m_notifySettings = notifySettings;
}

PeerNotifySettings Dialog::notifySettings() const {
    return m_notifySettings;
}

void Dialog::setPeer(const Peer &peer) {
    m_peer = peer;
}

Peer Dialog::peer() const {
    return m_peer;
}

void Dialog::setPts(qint32 pts) {
    m_pts = pts;
}

qint32 Dialog::pts() const {
    return m_pts;
}

void Dialog::setReadInboxMaxId(qint32 readInboxMaxId) {
    m_readInboxMaxId = readInboxMaxId;
}

qint32 Dialog::readInboxMaxId() const {
    return m_readInboxMaxId;
}

void Dialog::setTopImportantMessage(qint32 topImportantMessage) {
    m_topImportantMessage = topImportantMessage;
}

qint32 Dialog::topImportantMessage() const {
    return m_topImportantMessage;
}

void Dialog::setTopMessage(qint32 topMessage) {
    m_topMessage = topMessage;
}

qint32 Dialog::topMessage() const {
    return m_topMessage;
}

void Dialog::setUnreadCount(qint32 unreadCount) {
    m_unreadCount = unreadCount;
}

qint32 Dialog::unreadCount() const {
    return m_unreadCount;
}

void Dialog::setUnreadImportantCount(qint32 unreadImportantCount) {
    m_unreadImportantCount = unreadImportantCount;
}

qint32 Dialog::unreadImportantCount() const {
    return m_unreadImportantCount;
}

bool Dialog::operator ==(const Dialog &b) const {
    return m_classType == b.m_classType &&
           m_notifySettings == b.m_notifySettings &&
           m_peer == b.m_peer &&
           m_pts == b.m_pts &&
           m_readInboxMaxId == b.m_readInboxMaxId &&
           m_topImportantMessage == b.m_topImportantMessage &&
           m_topMessage == b.m_topMessage &&
           m_unreadCount == b.m_unreadCount &&
           m_unreadImportantCount == b.m_unreadImportantCount;
}

void Dialog::setClassType(Dialog::DialogType classType) {
    m_classType = classType;
}

Dialog::DialogType Dialog::classType() const {
    return m_classType;
}

bool Dialog::fetch(InboundPkt *in) {
    LQTG_FETCH_LOG;
    int x = in->fetchInt();
    switch(x) {
    case typeDialog: {
        m_peer.fetch(in);
        m_topMessage = in->fetchInt();
        m_readInboxMaxId = in->fetchInt();
        m_unreadCount = in->fetchInt();
        m_notifySettings.fetch(in);
        m_classType = static_cast<DialogType>(x);
        return true;
    }
        break;
    
    case typeDialogChannel: {
        m_peer.fetch(in);
        m_topMessage = in->fetchInt();
        m_topImportantMessage = in->fetchInt();
        m_readInboxMaxId = in->fetchInt();
        m_unreadCount = in->fetchInt();
        m_unreadImportantCount = in->fetchInt();
        m_notifySettings.fetch(in);
        m_pts = in->fetchInt();
        m_classType = static_cast<DialogType>(x);
        return true;
    }
        break;
    
    default:
        LQTG_FETCH_ASSERT;
        return false;
    }
}

bool Dialog::push(OutboundPkt *out) const {
    out->appendInt(m_classType);
    switch(m_classType) {
    case typeDialog: {
        m_peer.push(out);
        out->appendInt(m_topMessage);
        out->appendInt(m_readInboxMaxId);
        out->appendInt(m_unreadCount);
        m_notifySettings.push(out);
        return true;
    }
        break;
    
    case typeDialogChannel: {
        m_peer.push(out);
        out->appendInt(m_topMessage);
        out->appendInt(m_topImportantMessage);
        out->appendInt(m_readInboxMaxId);
        out->appendInt(m_unreadCount);
        out->appendInt(m_unreadImportantCount);
        m_notifySettings.push(out);
        out->appendInt(m_pts);
        return true;
    }
        break;
    
    default:
        return false;
    }
}
