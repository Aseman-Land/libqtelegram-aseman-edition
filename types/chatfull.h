/*
 * Copyright 2014 Canonical Ltd.
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; version 3.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 *
 * Authors:
 *      Roberto Mier
 *      Tiago Herrmann
 */

#ifndef CHATFULL_H
#define CHATFULL_H

#include "chatparticipants.h"
#include "photo.h"
#include "peernotifysettings.h"

class ChatFull
{
public:

    enum ChatFullType {
       typeChatFull = 0x630e61be
    };

    ChatFull() :
        m_participants(ChatParticipants::typeChatParticipants),
        m_chatPhoto(Photo::typePhotoEmpty),
        m_id(0),
        m_notifySettings(PeerNotifySettings::typePeerNotifySettingsEmpty),
        m_classType(typeChatFull) {}

    void setId(qint32 id) {
        m_id = id;
    }
    qint32 id() const {
        return m_id;
    }
    void setParticipants(ChatParticipants participants) {
        m_participants = participants;
    }
    ChatParticipants participants() const {
        return m_participants;
    }
    void setChatPhoto(Photo chatPhoto) {
        m_chatPhoto = chatPhoto;
    }
    Photo chatPhoto() const {
        return m_chatPhoto;
    }
    void setNotifySettings(PeerNotifySettings notifySettings) {
        m_notifySettings = notifySettings;
    }
    PeerNotifySettings notifySettings() const {
        return m_notifySettings;
    }
    void setClassType(ChatFullType classType) {
        m_classType = classType;
    }
    ChatFullType classType() const {
        return m_classType;
    }

private:
    ChatParticipants m_participants;
    Photo m_chatPhoto;
    qint32 m_id;
    PeerNotifySettings m_notifySettings;
    ChatFullType m_classType;
};
#endif // CHATFULL_H
