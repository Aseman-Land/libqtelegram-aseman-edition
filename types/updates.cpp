#include "updates.h"
#include "core/inboundpkt.h"
#include "core/outboundpkt.h"

Updates::Updates(UpdatesType classType, InboundPkt *in) :
    m_chatId(0),
    m_date(0),
    m_flags(0),
    m_fromId(0),
    m_fwdDate(0),
    m_fwdFromId(0),
    m_id(0),
    m_pts(0),
    m_ptsCount(0),
    m_replyToMsgId(0),
    m_seq(0),
    m_seqStart(0),
    m_userId(0),
    m_classType(classType)
{
    if(in) fetch(in);
}

Updates::Updates(InboundPkt *in) :
    m_chatId(0),
    m_date(0),
    m_flags(0),
    m_fromId(0),
    m_fwdDate(0),
    m_fwdFromId(0),
    m_id(0),
    m_pts(0),
    m_ptsCount(0),
    m_replyToMsgId(0),
    m_seq(0),
    m_seqStart(0),
    m_userId(0),
    m_classType(typeUpdatesTooLong)
{
    fetch(in);
}

void Updates::setChatId(qint32 chatId) {
    m_chatId = chatId;
}

qint32 Updates::chatId() const {
    return m_chatId;
}

void Updates::setChats(const QList<Chat> &chats) {
    m_chats = chats;
}

QList<Chat> Updates::chats() const {
    return m_chats;
}

void Updates::setDate(qint32 date) {
    m_date = date;
}

qint32 Updates::date() const {
    return m_date;
}

void Updates::setFlags(qint32 flags) {
    m_flags = flags;
}

qint32 Updates::flags() const {
    return m_flags;
}

void Updates::setFromId(qint32 fromId) {
    m_fromId = fromId;
}

qint32 Updates::fromId() const {
    return m_fromId;
}

void Updates::setFwdDate(qint32 fwdDate) {
    m_fwdDate = fwdDate;
}

qint32 Updates::fwdDate() const {
    return m_fwdDate;
}

void Updates::setFwdFromId(qint32 fwdFromId) {
    m_fwdFromId = fwdFromId;
}

qint32 Updates::fwdFromId() const {
    return m_fwdFromId;
}

void Updates::setId(qint32 id) {
    m_id = id;
}

qint32 Updates::id() const {
    return m_id;
}

void Updates::setMessage(const QString &message) {
    m_message = message;
}

QString Updates::message() const {
    return m_message;
}

void Updates::setPts(qint32 pts) {
    m_pts = pts;
}

qint32 Updates::pts() const {
    return m_pts;
}

void Updates::setPtsCount(qint32 ptsCount) {
    m_ptsCount = ptsCount;
}

qint32 Updates::ptsCount() const {
    return m_ptsCount;
}

void Updates::setReplyToMsgId(qint32 replyToMsgId) {
    m_replyToMsgId = replyToMsgId;
}

qint32 Updates::replyToMsgId() const {
    return m_replyToMsgId;
}

void Updates::setSeq(qint32 seq) {
    m_seq = seq;
}

qint32 Updates::seq() const {
    return m_seq;
}

void Updates::setSeqStart(qint32 seqStart) {
    m_seqStart = seqStart;
}

qint32 Updates::seqStart() const {
    return m_seqStart;
}

void Updates::setUpdate(const Update &update) {
    m_update = update;
}

Update Updates::update() const {
    return m_update;
}

void Updates::setUpdates(const QList<Update> &updates) {
    m_updates = updates;
}

QList<Update> Updates::updates() const {
    return m_updates;
}

void Updates::setUserId(qint32 userId) {
    m_userId = userId;
}

qint32 Updates::userId() const {
    return m_userId;
}

void Updates::setUsers(const QList<User> &users) {
    m_users = users;
}

QList<User> Updates::users() const {
    return m_users;
}

bool Updates::operator ==(const Updates &b) {
    return m_chatId == b.m_chatId &&
           m_chats == b.m_chats &&
           m_date == b.m_date &&
           m_flags == b.m_flags &&
           m_fromId == b.m_fromId &&
           m_fwdDate == b.m_fwdDate &&
           m_fwdFromId == b.m_fwdFromId &&
           m_id == b.m_id &&
           m_message == b.m_message &&
           m_pts == b.m_pts &&
           m_ptsCount == b.m_ptsCount &&
           m_replyToMsgId == b.m_replyToMsgId &&
           m_seq == b.m_seq &&
           m_seqStart == b.m_seqStart &&
           m_update == b.m_update &&
           m_updates == b.m_updates &&
           m_userId == b.m_userId &&
           m_users == b.m_users;
}

void Updates::setClassType(Updates::UpdatesType classType) {
    m_classType = classType;
}

Updates::UpdatesType Updates::classType() const {
    return m_classType;
}

bool Updates::fetch(InboundPkt *in) {

    int x = in->fetchInt();
    switch(x) {
    case typeUpdatesTooLong: {
        return true;
    }
        break;
    
    case typeUpdateShortMessage: {
        m_flags = in->fetchInt();
        m_id = in->fetchInt();
        m_userId = in->fetchInt();
        m_message = in->fetchQString();
        m_pts = in->fetchInt();
        m_ptsCount = in->fetchInt();
        m_date = in->fetchInt();
        if(m_flags & 1<<2) {
            m_fwdFromId = in->fetchInt();
        }
        if(m_flags & 1<<2) {
            m_fwdDate = in->fetchInt();
        }
        if(m_flags & 1<<3) {
            m_replyToMsgId = in->fetchInt();
        }
        return true;
    }
        break;
    
    case typeUpdateShortChatMessage: {
        m_flags = in->fetchInt();
        m_id = in->fetchInt();
        m_fromId = in->fetchInt();
        m_chatId = in->fetchInt();
        m_message = in->fetchQString();
        m_pts = in->fetchInt();
        m_ptsCount = in->fetchInt();
        m_date = in->fetchInt();
        if(m_flags & 1<<2) {
            m_fwdFromId = in->fetchInt();
        }
        if(m_flags & 1<<2) {
            m_fwdDate = in->fetchInt();
        }
        if(m_flags & 1<<3) {
            m_replyToMsgId = in->fetchInt();
        }
        return true;
    }
        break;
    
    case typeUpdateShort: {
        m_update.fetch(in);
        m_date = in->fetchInt();
        return true;
    }
        break;
    
    case typeUpdatesCombined: {
        if(in->fetchInt() != (qint32)TL_Vector) return false;
        qint32 m_updates_length = in->fetchInt();
        m_updates.clear();
        for (qint32 i = 0; i < m_updates_length; i++) {
            Update type;
            type.fetch(in);
            m_updates.append(type);
        }
        if(in->fetchInt() != (qint32)TL_Vector) return false;
        qint32 m_users_length = in->fetchInt();
        m_users.clear();
        for (qint32 i = 0; i < m_users_length; i++) {
            User type;
            type.fetch(in);
            m_users.append(type);
        }
        if(in->fetchInt() != (qint32)TL_Vector) return false;
        qint32 m_chats_length = in->fetchInt();
        m_chats.clear();
        for (qint32 i = 0; i < m_chats_length; i++) {
            Chat type;
            type.fetch(in);
            m_chats.append(type);
        }
        m_date = in->fetchInt();
        m_seqStart = in->fetchInt();
        m_seq = in->fetchInt();
        return true;
    }
        break;
    
    case typeUpdates: {
        if(in->fetchInt() != (qint32)TL_Vector) return false;
        qint32 m_updates_length = in->fetchInt();
        m_updates.clear();
        for (qint32 i = 0; i < m_updates_length; i++) {
            Update type;
            type.fetch(in);
            m_updates.append(type);
        }
        if(in->fetchInt() != (qint32)TL_Vector) return false;
        qint32 m_users_length = in->fetchInt();
        m_users.clear();
        for (qint32 i = 0; i < m_users_length; i++) {
            User type;
            type.fetch(in);
            m_users.append(type);
        }
        if(in->fetchInt() != (qint32)TL_Vector) return false;
        qint32 m_chats_length = in->fetchInt();
        m_chats.clear();
        for (qint32 i = 0; i < m_chats_length; i++) {
            Chat type;
            type.fetch(in);
            m_chats.append(type);
        }
        m_date = in->fetchInt();
        m_seq = in->fetchInt();
        return true;
    }
        break;
    
    default:
        LQTG_FETCH_ASSERT;
        return false;
    }
}

bool Updates::push(OutboundPkt *out) const {

    out->appendInt(m_classType);
    switch(m_classType) {
    case typeUpdatesTooLong: {
        return true;
    }
        break;
    
    case typeUpdateShortMessage: {
        out->appendInt(m_flags);
        out->appendInt(m_id);
        out->appendInt(m_userId);
        out->appendQString(m_message);
        out->appendInt(m_pts);
        out->appendInt(m_ptsCount);
        out->appendInt(m_date);
        out->appendInt(m_fwdFromId);
        out->appendInt(m_fwdDate);
        out->appendInt(m_replyToMsgId);
        return true;
    }
        break;
    
    case typeUpdateShortChatMessage: {
        out->appendInt(m_flags);
        out->appendInt(m_id);
        out->appendInt(m_fromId);
        out->appendInt(m_chatId);
        out->appendQString(m_message);
        out->appendInt(m_pts);
        out->appendInt(m_ptsCount);
        out->appendInt(m_date);
        out->appendInt(m_fwdFromId);
        out->appendInt(m_fwdDate);
        out->appendInt(m_replyToMsgId);
        return true;
    }
        break;
    
    case typeUpdateShort: {
        m_update.push(out);
        out->appendInt(m_date);
        return true;
    }
        break;
    
    case typeUpdatesCombined: {
        out->appendInt(TL_Vector);
        out->appendInt(m_updates.count());
        for (qint32 i = 0; i < m_updates.count(); i++) {
            m_updates[i].push(out);
        }
        out->appendInt(TL_Vector);
        out->appendInt(m_users.count());
        for (qint32 i = 0; i < m_users.count(); i++) {
            m_users[i].push(out);
        }
        out->appendInt(TL_Vector);
        out->appendInt(m_chats.count());
        for (qint32 i = 0; i < m_chats.count(); i++) {
            m_chats[i].push(out);
        }
        out->appendInt(m_date);
        out->appendInt(m_seqStart);
        out->appendInt(m_seq);
        return true;
    }
        break;
    
    case typeUpdates: {
        out->appendInt(TL_Vector);
        out->appendInt(m_updates.count());
        for (qint32 i = 0; i < m_updates.count(); i++) {
            m_updates[i].push(out);
        }
        out->appendInt(TL_Vector);
        out->appendInt(m_users.count());
        for (qint32 i = 0; i < m_users.count(); i++) {
            m_users[i].push(out);
        }
        out->appendInt(TL_Vector);
        out->appendInt(m_chats.count());
        for (qint32 i = 0; i < m_chats.count(); i++) {
            m_chats[i].push(out);
        }
        out->appendInt(m_date);
        out->appendInt(m_seq);
        return true;
    }
        break;
    
    default:
        return false;
    }
}

