#ifndef UPDATES
#define UPDATES

#include <QtGlobal>
#include "update.h"
#include "chat.h"
#include "user.h"
#include "core/inboundpkt.h"
#include "core/outboundpkt.h"

class Updates
{
public:

    enum UpdatesType {
       typeUpdates = 0x74ae4240
    };

    Updates() :
        m_date(0),
        m_seq(0),
        m_classType(typeUpdates) {}

    QList<Update> updates() const {
        return m_updates;
    }
    void setUpdates(const QList<Update> &updates) {
        m_updates = updates;
    }
    QList<User> users() const {
        return m_users;
    }
    void setUsers(const QList<User> &users) {
        m_users = users;
    }
    QList<Chat> chats() const {
        return m_chats;
    }
    void setChats(const QList<Chat> &chats) {
        m_chats = chats;
    }
    qint32 date() const {
        return m_date;
    }
    void setDate(const qint32 &date) {
        m_date = date;
    }
    qint32 seq() const {
        return m_seq;
    }
    void setSeq(const qint32 &seq) {
        m_seq = seq;
    }
    void setClassType(UpdatesType classType) {
        m_classType = classType;
    }
    UpdatesType classType() const {
        return m_classType;
    }

private:
    QList<Update> m_updates;
    QList<User> m_users;
    QList<Chat> m_chats;
    qint32 m_date;
    qint32 m_seq;
    UpdatesType m_classType;
};

#endif // UPDATES


