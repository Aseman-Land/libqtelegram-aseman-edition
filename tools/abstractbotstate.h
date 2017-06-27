#ifndef ABSTRACTBOTSTATE_H
#define ABSTRACTBOTSTATE_H

#include "libqtelegram_global.h"

#include <telegram/bottypes/bottypes.h>
#include <telegrambot.h>

class LIBQTELEGRAMSHARED_EXPORT AbstractBotState: public QObject
{
    Q_OBJECT
public:
    AbstractBotState(TelegramBot *bot);
    ~AbstractBotState();

    virtual QString title(qint32 userId) = 0;
    virtual BotReplyKeyboardMarkup buttons(qint32 userId) = 0;
    virtual QString processResult(qint32 userId, const BotMessage &message, QString &nextTitle) = 0;
    virtual QString id() const = 0;

    TelegramBot *bot() const { return _bot; }

    static QList<QList<BotKeyboardButton>> convertListToButtons(const QList<QList<QString>> &list);

protected:
    void sendMessage(int userId, const QString &text, const BotReplyKeyboardMarkup &markup = BotReplyKeyboardMarkup::null);

private:
    TelegramBot *_bot;
};

#endif // ABSTRACTBOTSTATE_H
