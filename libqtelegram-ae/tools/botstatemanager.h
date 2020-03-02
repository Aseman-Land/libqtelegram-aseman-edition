#ifndef BOTSTATEMANAGER_H
#define BOTSTATEMANAGER_H

#include "libqtelegram_global.h"
#include "abstractbotstate.h"

#include <QObject>
#include <telegrambot.h>

class LIBQTELEGRAMSHARED_EXPORT BotStateManager : public QObject
{
    Q_OBJECT
    Q_PROPERTY(QString initialState READ initialState WRITE setInitialState NOTIFY initialStateChanged)
    Q_PROPERTY(TelegramBot* telegramBot READ telegramBot WRITE setTelegramBot NOTIFY telegramBotChanged)
    Q_PROPERTY(int updateInterval READ updateInterval WRITE setUpdateInterval NOTIFY updateIntervalChanged)
    Q_PROPERTY(QString cache READ cache WRITE setCache NOTIFY cacheChanged)
    Q_PROPERTY(QString settingsPath READ settingsPath WRITE setSettingsPath NOTIFY settingsPathChanged)

    class Private;

public:
    BotStateManager(QObject *parent = Q_NULLPTR);
    virtual ~BotStateManager();

    void setInitialState(const QString &initialState);
    QString initialState() const;

    void setTelegramBot(TelegramBot *telegramBot);
    TelegramBot *telegramBot() const;

    void setUpdateInterval(int updateInterval);
    int updateInterval() const;

    void setCache(const QString &cache);
    QString cache() const;

    void setSettingsPath(const QString &path);
    QString settingsPath() const;

    BotStateManager & operator <<(AbstractBotState *state);

Q_SIGNALS:
    void initialStateChanged();
    void telegramBotChanged();
    void updateIntervalChanged();
    void cacheChanged();
    void settingsPathChanged();

public Q_SLOTS:
    void changeState(qint32 userId, const QString &stateId, QString title, const QString &replaceMsgId);

protected:
    void timerEvent(QTimerEvent *e);
    void checkUpdates();
    void checkUpdate(const BotUpdate &update);
    void sendMessage(int userId, const QString &text, const BotReplyKeyboardMarkup &markup, const BotInlineKeyboardMarkup &inlintMarkup, const QString &stateId, const QString &replace_message);

    QString getCurrentState(int userId);
    void setCurrentState(int id, const QString &currentState);

    QVariant getData(int userId, const QString &role);
    void setData(int userId, const QString &role, const QVariant &data);

    void saveUserData();
    void loadUserData();

private:
    Private *p;
};

#endif // BOTSTATEMANAGER_H
