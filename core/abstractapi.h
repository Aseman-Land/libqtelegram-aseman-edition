/*
 * Copyright 2013 Vitaly Valtman
 * Copyright 2014 Canonical Ltd.
 * Authors:
 *      Roberto Mier
 *      Tiago Herrmann
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
 */

#ifndef ABSTRACTAPI_H
#define ABSTRACTAPI_H

#include <QObject>
#include <QMap>
#include "types/update.h"
#include "session.h"
#include "sessionmanager.h"

class AbstractApi : public SessionManager
{
    Q_OBJECT
public:
    explicit AbstractApi(Session *session, QObject *parent = 0);
    ~AbstractApi();

Q_SIGNALS:
    void updatesTooLong();
    void updateShortMessage(qint32 id, qint32 fromId, const QString &message, qint32 pts, qint32 date, qint32 seq);
    void updateShortChatMessage(qint32 id, qint32 fromId, qint32 chatId, const QString &message, qint32 pts, qint32 date, qint32 seq);
    void updateShort(Update update, qint32 date);
    void updatesCombined(QList<Update> updates, QList<User> users, QList<Chat> chats, qint32 date, qint32 seqStart, qint32 seq);
    void updates(QList<Update> udts, QList<User> users, QList<Chat> chats, qint32 date, qint32 seq);

protected:
    // default error method. Overriten in inherited classes
    virtual void onError(Query *q, qint32 errorCode, const QString &errorText) = 0;

private:
    void connectUpdatesSignals(Session *session);
    void connectResponsesSignals(Session *session);

private Q_SLOTS:
    void onResultReceived(Query *q, InboundPkt &inboundPkt);
    void onErrorReceived(Query *q, qint32 errorCode, QString errorText);
};

#endif // ABSTRACTAPI_H
