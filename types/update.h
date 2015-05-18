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

#ifndef UPDATE_H
#define UPDATE_H

#include "dcoption.h"
#include "contactsmylink.h"
#include "peernotifysettings.h"
#include "userprofilephoto.h"
#include "chatparticipants.h"
#include "userstatus.h"
#include "message.h"
#include "contactsforeignlink.h"
#include "notifypeer.h"
#include "geochatmessage.h"
#include "encryptedmessage.h"
#include "encryptedchat.h"
#include "sendmessageaction.h"

class Update
{
public:

    enum UpdateType {
       typeUpdateInvalid = 0,
       typeUpdateUserStatus = 0x1bfbd823,
       typeUpdateNotifySettings = 0xbec268ef,
       typeUpdateMessageID = 0x4e90bfd6,
       typeUpdateChatUserTyping = 0x9a65ea1f,
       typeUpdateActivation = 0x6f690963,
       typeUpdateRestoreMessages = 0xd15de04d,
       typeUpdateEncryption = 0xb4a2e88d,
       typeUpdateUserName = 0xda22d9ad,
       typeUpdateUserBlocked = 0x80ece81a,
       typeUpdateNewMessage = 0x13abdb3,
       typeUpdateContactLink = 0x51a48a9a,
       typeUpdateChatParticipantDelete = 0x6e5f8c22,
       typeUpdateNewAuthorization = 0x8f06529a,
       typeUpdateChatParticipantAdd = 0x3a0eeb22,
       typeUpdateDcOptions = 0x8e5e9873,
       typeUpdateDeleteMessages = 0xa92bfe26,
       typeUpdateUserTyping = 0x5c486927,
       typeUpdateEncryptedChatTyping = 0x1710f156,
       typeUpdateReadMessages = 0xc6649e31,
       typeUpdateUserPhoto = 0x95313b0c,
       typeUpdateContactRegistered = 0x2575bbb9,
       typeUpdateNewEncryptedMessage = 0x12bcbd9a,
       typeUpdateEncryptedMessagesRead = 0x38fe25b7,
       typeUpdateChatParticipants = 0x7761198,
       typeUpdateNewGeoChatMessage = 0x5a68e3f7,
       typeUpdateServiceNotification = 0x82dd3e4
    };

    Update(UpdateType classType = typeUpdateInvalid) :
        mId(0),
        mPrevious(false),
        mPopup(false),
        mDevice(""),
        mMyLink(ContactsMyLink::typeContactsMyLinkEmpty),
        mChatId(0),
        mUserId(0),
        mPts(0),
        mVersion(0),
        mQts(0),
        mDate(0),
        mNotifySettings(PeerNotifySettings::typePeerNotifySettingsEmpty),
        mChat(EncryptedChat::typeEncryptedChatEmpty),
        mInviterId(0),
        mPhoto(UserProfilePhoto::typeUserProfilePhotoEmpty),
        mParticipants(ChatParticipants::typeChatParticipants),
        mRandomId(0),
        mFirstName(""),
        mLastName(""),
        mStatus(UserStatus::typeUserStatusEmpty),
        mMessage(Message::typeMessageEmpty),
        mMedia(MessageMedia::typeMessageMediaEmpty),
        mGeoChatMessage(GeoChatMessage::typeGeoChatMessageEmpty),
        mEncryptedMessage(EncryptedMessage::typeEncryptedMessage),
        mForeignLink(ContactsForeignLink::typeContactsForeignLinkUnknown),
        mMaxDate(0),
        mAuthKeyId(0),
        mLocation(""),
        mPeer(NotifyPeer::typeNotifyAll),
        mBlocked(false),
        mClassType(classType) {}

    void setUserId(qint32 userId) {
        mUserId = userId;
    }
    qint32 userId() const {
        return mUserId;
    }
    void setStatus(UserStatus status) {
        mStatus = status;
    }
    UserStatus status() const {
        return mStatus;
    }
    void setPeer(NotifyPeer peer) {
        mPeer = peer;
    }
    NotifyPeer peer() const {
        return mPeer;
    }
    void setNotifySettings(PeerNotifySettings notifySettings) {
        mNotifySettings = notifySettings;
    }
    PeerNotifySettings notifySettings() const {
        return mNotifySettings;
    }
    void setId(qint32 id) {
        mId = id;
    }
    qint32 id() const {
        return mId;
    }
    void setRandomId(qint64 randomId) {
        mRandomId = randomId;
    }
    qint64 randomId() const {
        return mRandomId;
    }
    void setChatId(qint32 chatId) {
        mChatId = chatId;
    }
    qint32 chatId() const {
        return mChatId;
    }
    void setMessages(const QList<qint32> & messages) {
        mMessages = messages;
    }
    QList<qint32> messages() const {
        return mMessages;
    }
    void setPts(qint32 pts) {
        mPts = pts;
    }
    qint32 pts() const {
        return mPts;
    }
    void setChat(EncryptedChat chat) {
        mChat = chat;
    }
    EncryptedChat chat() const {
        return mChat;
    }
    void setDate(qint32 date) {
        mDate = date;
    }
    qint32 date() const {
        return mDate;
    }
    void setFirstName(const QString & firstName) {
        mFirstName = firstName;
    }
    QString firstName() const {
        return mFirstName;
    }
    void setLastName(const QString & lastName) {
        mLastName = lastName;
    }
    QString lastName() const {
        return mLastName;
    }
    void setUsername(const QString & username) {
        mUsername = username;
    }
    QString username() const {
        return mUsername;
    }
    void setBlocked(bool blocked) {
        mBlocked = blocked;
    }
    bool blocked() const {
        return mBlocked;
    }
    void setMessage(Message message) {
        mMessage = message;
    }
    Message message() const {
        return mMessage;
    }
    void setMessage(GeoChatMessage message) {
        mGeoChatMessage = message;
    }
    EncryptedMessage encryptedMessage() const {
        return mEncryptedMessage;
    }
    void setEncryptedMessage(const EncryptedMessage &encryptedMessage) {
        mEncryptedMessage = encryptedMessage;
    }
    GeoChatMessage geoChatMessage() const {
        return mGeoChatMessage;
    }
    void setMyLink(ContactsMyLink myLink) {
        mMyLink = myLink;
    }
    ContactsMyLink myLink() const {
        return mMyLink;
    }
    void setForeignLink(ContactsForeignLink foreignLink) {
        mForeignLink = foreignLink;
    }
    ContactsForeignLink foreignLink() const {
        return mForeignLink;
    }
    void setVersion(qint32 version) {
        mVersion = version;
    }
    qint32 version() const {
        return mVersion;
    }
    void setAuthKeyId(qint64 authKeyId) {
        mAuthKeyId = authKeyId;
    }
    qint64 authKeyId() const {
        return mAuthKeyId;
    }
    void setDevice(const QString & device) {
        mDevice = device;
    }
    QString device() const {
        return mDevice;
    }
    void setLocation(const QString & location) {
        mLocation = location;
    }
    QString location() const {
        return mLocation;
    }
    void setInviterId(qint32 inviterId) {
        mInviterId = inviterId;
    }
    qint32 inviterId() const {
        return mInviterId;
    }
    void setDcOptions(const QList<DcOption> & dcOptions) {
        mDcOptions = dcOptions;
    }
    QList<DcOption> dcOptions() const {
        return mDcOptions;
    }
    void setPhoto(UserProfilePhoto photo) {
        mPhoto = photo;
    }
    UserProfilePhoto photo() const {
        return mPhoto;
    }
    void setPrevious(bool previous) {
        mPrevious = previous;
    }
    bool previous() const {
        return mPrevious;
    }
    void setQts(qint32 qts) {
        mQts = qts;
    }
    qint32 qts() const {
        return mQts;
    }
    void setMaxDate(qint32 maxDate) {
        mMaxDate = maxDate;
    }
    qint32 maxDate() const {
        return mMaxDate;
    }
    void setParticipants(ChatParticipants participants) {
        mParticipants = participants;
    }
    ChatParticipants participants() const {
        return mParticipants;
    }
    void setAction(const SendMessageAction &action) {
        mAction = action;
    }
    SendMessageAction action() const {
        return mAction;
    }
    void setMedia(const MessageMedia &media) {
        mMedia = media;
    }
    MessageMedia media() const {
        return mMedia;
    }
    void setPopup(bool popup) {
        mPopup = popup;
    }
    bool popup() const {
        return mPopup;
    }
    void setClassType(UpdateType classType) {
        mClassType = classType;
    }
    void setType(const QString &type) {
        mType = type;
    }
    QString type() const {
        return mType;
    }
    void setMessageText(const QString &message) {
        mMessageText = message;
    }
    QString messageText() const {
        return mMessageText;
    }
    UpdateType classType() const {
        return mClassType;
    }

private:
    qint32 mId;
    bool mPrevious;
    bool mPopup;
    QString mType;
    QString mMessageText;
    QList<DcOption> mDcOptions;
    QString mDevice;
    ContactsMyLink mMyLink;
    qint32 mChatId;
    qint32 mUserId;
    qint32 mPts;
    qint32 mVersion;
    qint32 mQts;
    qint32 mDate;
    PeerNotifySettings mNotifySettings;
    EncryptedChat mChat;
    qint32 mInviterId;
    UserProfilePhoto mPhoto;
    QList<qint32> mMessages;
    ChatParticipants mParticipants;
    qint64 mRandomId;
    QString mFirstName;
    QString mLastName;
    QString mUsername;
    UserStatus mStatus;
    Message mMessage;
    MessageMedia mMedia;
    GeoChatMessage mGeoChatMessage;
    EncryptedMessage mEncryptedMessage;
    ContactsForeignLink mForeignLink;
    qint32 mMaxDate;
    qint64 mAuthKeyId;
    QString mLocation;
    NotifyPeer mPeer;
    bool mBlocked;
    SendMessageAction mAction;
    UpdateType mClassType;
};
#endif // UPDATE_H
