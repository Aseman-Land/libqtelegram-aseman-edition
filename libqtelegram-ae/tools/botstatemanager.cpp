#define SETTINGS_LAST_UPDATE_KEY "lastUpdate"
#define USER_DATA_STEP_KEY "currentStep"
#define BOT_INIT_COMMAND "/start"

#include "abstractbotstate.h"
#include "botstatemanager.h"

#include <QPointer>
#include <QTimerEvent>
#include <QSettings>
#include <QFile>
#include <QDataStream>

class BotStateManager::Private
{
public:
    QString initialState;
    int timerId;
    int updateInterval;
    bool inited;

    QString cache;
    QString settingsPath;

    QVariantHash userData;
    QSettings *settings;
    QPointer<TelegramBot> bot;

    QHash<QString, AbstractBotState*> states;
};

BotStateManager::BotStateManager(QObject *parent) :
    QObject(parent)
{
    p = new Private;
    p->timerId = 0;
    p->inited = false;
    p->updateInterval = 0;
    p->settings = new QSettings(this);

    setUpdateInterval(2000);
}

void BotStateManager::setInitialState(const QString &initialState)
{
    if(p->initialState == initialState)
        return;

    p->initialState = initialState;
    Q_EMIT initialStateChanged();
}

QString BotStateManager::initialState() const
{
    return p->initialState;
}

void BotStateManager::setTelegramBot(TelegramBot *bot)
{
    if(p->bot == bot)
        return;

    p->bot = bot;
    Q_EMIT telegramBotChanged();
}

TelegramBot *BotStateManager::telegramBot() const
{
    return p->bot;
}

void BotStateManager::setUpdateInterval(int updateInterval)
{
    if(p->updateInterval == updateInterval)
        return;

    p->updateInterval = updateInterval;

    if(p->timerId)
        killTimer(p->timerId);
    p->timerId = 0;
    if(p->updateInterval)
        p->timerId = startTimer(p->updateInterval);

    Q_EMIT updateIntervalChanged();
}

int BotStateManager::updateInterval() const
{
    return p->updateInterval;
}

void BotStateManager::setCache(const QString &cache)
{
    if(p->cache == cache)
        return;

    p->cache = cache;
    loadUserData();

    Q_EMIT cacheChanged();
}

QString BotStateManager::cache() const
{
    return p->cache;
}

void BotStateManager::setSettingsPath(const QString &settingsPath)
{
    if(p->settingsPath == settingsPath)
        return;

    p->settingsPath = settingsPath;
    delete p->settings;
    p->settings = new QSettings(p->settingsPath, QSettings::IniFormat, this);

    Q_EMIT settingsPathChanged();
}

QString BotStateManager::settingsPath() const
{
    return p->settingsPath;
}

BotStateManager &BotStateManager::operator <<(AbstractBotState *state)
{
    p->states[state->id()] = state;
    if(p->initialState.isEmpty() && p->states.count() == 1)
        setInitialState(state->id());

    connect(state, &AbstractBotState::destroyed, this, [this, state](){
        p->states.remove(state->id());
    });
    return *this;
}

void BotStateManager::timerEvent(QTimerEvent *e)
{
    if(e->timerId() == p->timerId)
    {
        killTimer(p->timerId);
        p->timerId = 0;
        checkUpdates();
    }
}

void BotStateManager::checkUpdates()
{
    if(!p->bot)
        return;

    qint32 currentUpdate = p->settings->value(SETTINGS_LAST_UPDATE_KEY).toInt();
    p->bot->getUpdates([this](const QList<BotUpdate> &res, const TelegramBot::CallbackError &error){
        p->timerId = startTimer(p->updateInterval);
        if(!error.null) {
            qDebug() << error.errorCode << error.errorText;
            return;
        }

        for(const BotUpdate &upd: res) {
            if(!upd.updateId())
                continue;

            if(p->inited)
                checkUpdate(upd);

            qint32 currentUpdate = p->settings->value(SETTINGS_LAST_UPDATE_KEY).toInt();
            if(currentUpdate < upd.updateId())
                p->settings->setValue(SETTINGS_LAST_UPDATE_KEY, upd.updateId());

            qDebug() << upd.updateId();
            p->inited = true;
        }

        p->inited = true;
    }, currentUpdate+1);
}

void BotStateManager::checkUpdate(const BotUpdate &upd)
{
    const BotMessage &msg = upd.message();

    qint32 userId = msg.from().id();
    if(!userId)
        userId = upd.inlineQuery().from().id();
    if(!userId)
        userId = upd.chosenInlineResult().from().id();
    if(!userId)
        userId = upd.callbackQuery().from().id();

    QString currentStateId = getCurrentState(userId);
    if(msg.text() == BOT_INIT_COMMAND)
    {
        currentStateId.clear();
        setCurrentState(userId, currentStateId);
    }

    QString title;
    QString replaceMsgId = QString();
    QString newStateId;
    if(currentStateId.isEmpty())
        newStateId = p->initialState;
    else {
        AbstractBotState *state = p->states.value(currentStateId);
        if(state)
            newStateId = state->processResult(userId, upd, title, replaceMsgId);
        else {
            setCurrentState(userId, QString());
            return;
        }
    }

    AbstractBotState *newState = p->states.value(newStateId);
    if(!newState)
        return;

    if(title.isEmpty()) title = newState->title(userId);
    const BotInlineKeyboardMarkup &inlineMarkup = newState->inlineButtons(userId);
    const BotReplyKeyboardMarkup &markup = newState->buttons(userId);
    sendMessage(userId, title, markup, inlineMarkup, newStateId, replaceMsgId);
}

void BotStateManager::sendMessage(int userId, const QString &text, const BotReplyKeyboardMarkup &markup, const BotInlineKeyboardMarkup &inlintMarkup, const QString &stateId, const QString &replace_message)
{
    TelegramBot::Callback<BotMessage> callback = [this, userId, stateId](const BotMessage &res, const TelegramBot::CallbackError &error){
        Q_UNUSED(res)
        if(!error.null) {
            qDebug() << error.errorCode << error.errorText;
            return;
        }

        setCurrentState(userId, stateId);
    };

    if(replace_message.count())
        p->bot->editMessageText(QString::number(userId), replace_message, QString(), text, callback, QString(), false, inlintMarkup);
    else
    if(inlintMarkup.inlineKeyboard().count())
        p->bot->sendMessage(QString::number(userId), text, callback, QString(), false, false, 0, inlintMarkup);
    else
    if(markup.keyboard().count())
        p->bot->sendMessage(QString::number(userId), text, callback, QString(), false, false, 0, markup);
    else
        p->bot->sendMessage(QString::number(userId), text, callback);
}

QString BotStateManager::getCurrentState(int id)
{
    QString userId = QString::number(id);
    QVariantMap dataMap = p->userData.value(userId).toMap();
    return dataMap.value(USER_DATA_STEP_KEY).toString();
}

void BotStateManager::setCurrentState(int id, const QString &currentState)
{
    QString userId = QString::number(id);
    QVariantMap dataMap = p->userData.value(userId).toMap();
    dataMap[USER_DATA_STEP_KEY] = currentState;
    p->userData[userId] = dataMap;
    saveUserData();
}

QVariant BotStateManager::getData(int id, const QString &role)
{
    QString userId = QString::number(id);
    QVariantMap dataMap = p->userData.value(userId).toMap();
    return dataMap.value(role);
}

void BotStateManager::setData(int id, const QString &role, const QVariant &data)
{
    QString userId = QString::number(id);
    QVariantMap dataMap = p->userData.value(userId).toMap();
    dataMap[role] = data;
    p->userData[userId] = dataMap;
}

void BotStateManager::saveUserData()
{
    QFile file(p->cache);
    file.open(QFile::WriteOnly);

    QDataStream stream(&file);
    stream << p->userData;
    qDebug() << p->userData.count() << "items saved";

    file.close();
}

void BotStateManager::loadUserData()
{
    QFile file(p->cache);
    if(!file.open(QFile::ReadOnly))
        return;

    QDataStream stream(&file);
    stream >> p->userData;
    qDebug() << p->userData.count() << "items loaded";

    file.close();
}

BotStateManager::~BotStateManager()
{
    delete p;
}
