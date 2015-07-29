#ifndef LQTG_CHATFULL
#define LQTG_CHATFULL

#include "telegramtypeobject.h"
#include "photo.h"
#include "exportedchatinvite.h"
#include <QtGlobal>
#include "peernotifysettings.h"
#include "chatparticipants.h"

class ChatFull : public TelegramTypeObject
{
public:
    enum ChatFullType {
        typeChatFull = 0xcade0791
    };

    ChatFull(ChatFullType classType = typeChatFull, InboundPkt *in = 0);
    ChatFull(InboundPkt *in);
    virtual ~ChatFull();

    void setChatPhoto(const Photo &chatPhoto);
    Photo chatPhoto() const;

    void setExportedInvite(const ExportedChatInvite &exportedInvite);
    ExportedChatInvite exportedInvite() const;

    void setId(qint32 id);
    qint32 id() const;

    void setNotifySettings(const PeerNotifySettings &notifySettings);
    PeerNotifySettings notifySettings() const;

    void setParticipants(const ChatParticipants &participants);
    ChatParticipants participants() const;

    void setClassType(ChatFullType classType);
    ChatFullType classType() const;

    bool fetch(InboundPkt *in);
    bool push(OutboundPkt *out) const;

    bool operator ==(const ChatFull &b);

private:
    Photo m_chatPhoto;
    ExportedChatInvite m_exportedInvite;
    qint32 m_id;
    PeerNotifySettings m_notifySettings;
    ChatParticipants m_participants;
    ChatFullType m_classType;
};

#endif // LQTG_CHATFULL
