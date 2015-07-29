#include "messagesstickers.h"
#include "core/inboundpkt.h"
#include "core/outboundpkt.h"

MessagesStickers::MessagesStickers(MessagesStickersType classType, InboundPkt *in) :
    m_classType(classType)
{
    if(in) fetch(in);
}

MessagesStickers::MessagesStickers(InboundPkt *in) :
    m_classType(typeMessagesStickersNotModified)
{
    fetch(in);
}

void MessagesStickers::setHash(const QString &hash) {
    m_hash = hash;
}

QString MessagesStickers::hash() const {
    return m_hash;
}

void MessagesStickers::setStickers(const QList<Document> &stickers) {
    m_stickers = stickers;
}

QList<Document> MessagesStickers::stickers() const {
    return m_stickers;
}

bool MessagesStickers::operator ==(const MessagesStickers &b) {
    return m_hash == b.m_hash &&
           m_stickers == b.m_stickers;
}

void MessagesStickers::setClassType(MessagesStickers::MessagesStickersType classType) {
    m_classType = classType;
}

MessagesStickers::MessagesStickersType MessagesStickers::classType() const {
    return m_classType;
}

bool MessagesStickers::fetch(InboundPkt *in) {

    int x = in->fetchInt();
    switch(x) {
    case typeMessagesStickersNotModified: {
        return true;
    }
        break;
    
    case typeMessagesStickers: {
        m_hash = in->fetchQString();
        if(in->fetchInt() != (qint32)TL_Vector) return false;
        qint32 m_stickers_length = in->fetchInt();
        m_stickers.clear();
        for (qint32 i = 0; i < m_stickers_length; i++) {
            Document type;
            type.fetch(in);
            m_stickers.append(type);
        }
        return true;
    }
        break;
    
    default:
        LQTG_FETCH_ASSERT;
        return false;
    }
}

bool MessagesStickers::push(OutboundPkt *out) const {

    out->appendInt(m_classType);
    switch(m_classType) {
    case typeMessagesStickersNotModified: {
        return true;
    }
        break;
    
    case typeMessagesStickers: {
        out->appendQString(m_hash);
        out->appendInt(TL_Vector);
        out->appendInt(m_stickers.count());
        for (qint32 i = 0; i < m_stickers.count(); i++) {
            m_stickers[i].push(out);
        }
        return true;
    }
        break;
    
    default:
        return false;
    }
}

