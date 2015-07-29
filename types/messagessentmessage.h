#ifndef LQTG_MESSAGESSENTMESSAGE
#define LQTG_MESSAGESSENTMESSAGE

#include "telegramtypeobject.h"
#include <QtGlobal>
#include <QList>
#include "contactslink.h"
#include "messagemedia.h"

class MessagesSentMessage : public TelegramTypeObject
{
public:
    enum MessagesSentMessageType {
        typeMessagesSentMessage = 0x4c3d47f3,
        typeMessagesSentMessageLink = 0x35a1a663
    };

    MessagesSentMessage(MessagesSentMessageType classType = typeMessagesSentMessage, InboundPkt *in = 0);
    MessagesSentMessage(InboundPkt *in);
    virtual ~MessagesSentMessage();

    void setDate(qint32 date);
    qint32 date() const;

    void setId(qint32 id);
    qint32 id() const;

    void setLinks(const QList<ContactsLink> &links);
    QList<ContactsLink> links() const;

    void setMedia(const MessageMedia &media);
    MessageMedia media() const;

    void setPts(qint32 pts);
    qint32 pts() const;

    void setPtsCount(qint32 ptsCount);
    qint32 ptsCount() const;

    void setSeq(qint32 seq);
    qint32 seq() const;

    void setClassType(MessagesSentMessageType classType);
    MessagesSentMessageType classType() const;

    bool fetch(InboundPkt *in);
    bool push(OutboundPkt *out) const;

    bool operator ==(const MessagesSentMessage &b);

private:
    qint32 m_date;
    qint32 m_id;
    QList<ContactsLink> m_links;
    MessageMedia m_media;
    qint32 m_pts;
    qint32 m_ptsCount;
    qint32 m_seq;
    MessagesSentMessageType m_classType;
};

#endif // LQTG_MESSAGESSENTMESSAGE
