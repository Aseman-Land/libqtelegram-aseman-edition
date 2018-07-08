#ifndef TELEGRAMBOT_H
#define TELEGRAMBOT_H

#include <QObject>
#include <QNetworkReply>

#include "libqtelegram_global.h"
#include "telegram/bottypes/bottypes.h"

#include <functional>

class TelegramBotPrivate;
class LIBQTELEGRAMSHARED_EXPORT TelegramBot : public QObject
{
    Q_OBJECT
public:
    TelegramBot(const QString &token, QObject *parent = Q_NULLPTR);
    TelegramBot(QObject *parent = Q_NULLPTR);
    virtual ~TelegramBot();

    class CallbackError {
    public:
        CallbackError() : errorCode(0), null(true) {}
        qint32 errorCode;
        QString errorText;
        bool null;
    };

    template<typename T>
    using Callback = std::function<void (T,CallbackError)>;

    static CallbackError apiError() {
        CallbackError error;
        error.errorCode = -1;
        error.errorText = QStringLiteral("LIBQTELEGRAM_API_ERROR");
        error.null = false;
        return error;
    }

    void getMe(Callback<BotUser> callback = Q_NULLPTR);
    void getUpdates(Callback< QList<BotUpdate> > callback = Q_NULLPTR, qint32 offset = 0, qint32 limit = 0, qint32 timeout = 0, const QStringList &allowed_updates = QStringList());

    void sendMessage(const QString &chat_id, const QString &text, Callback<BotMessage> callback, const QString &parse_mode, bool disable_web_page_preview, bool disable_notification, int reply_to_message_id, const BotInlineKeyboardMarkup &reply_markup);
    void sendMessage(const QString &chat_id, const QString &text, Callback<BotMessage> callback, const QString &parse_mode, bool disable_web_page_preview, bool disable_notification, int reply_to_message_id, const BotReplyKeyboardMarkup &reply_markup);
    void sendMessage(const QString &chat_id, const QString &text, Callback<BotMessage> callback, const QString &parse_mode, bool disable_web_page_preview, bool disable_notification, int reply_to_message_id, const BotReplyKeyboardRemove &reply_markup);
    void sendMessage(const QString &chat_id, const QString &text, Callback<BotMessage> callback, const QString &parse_mode, bool disable_web_page_preview, bool disable_notification, int reply_to_message_id, const BotForceReply &reply_markup);
    void sendMessage(const QString &chat_id, const QString &text, Callback<BotMessage> callback = Q_NULLPTR, const QString &parse_mode = QString(), bool disable_web_page_preview = false, bool disable_notification = false, int reply_to_message_id = 0);

    void sendPhoto(const QString &chat_id, const QString &photo, Callback<BotMessage> callback, const QString &caption, bool disable_notification, int reply_to_message_id, const BotReplyKeyboardMarkup &reply_markup);

    void sendLocation(const QString &chat_id, qreal latitude, qreal longitude, Callback<BotMessage> callback, bool live_period, bool disable_notification, int reply_to_message_id, const BotReplyKeyboardMarkup &reply_markup);

    void editMessageText(const QString &chat_id, const QString &message_id, const QString &inline_message_id, const QString &text, Callback<BotMessage> callback, const QString &parse_mode, bool disable_web_page_preview, const BotInlineKeyboardMarkup &reply_markup);
    void editMessageCaption(const QString &chat_id, const QString &message_id, const QString &inline_message_id, const QString &caption, Callback<BotMessage> callback, const BotInlineKeyboardMarkup &reply_markup);
    void editMessageReplyMarkup(const QString &chat_id, const QString &message_id, const QString &inline_message_id, Callback<BotMessage> callback, const BotInlineKeyboardMarkup &reply_markup);

    void setToken(const QString &token);
    QString token() const;

Q_SIGNALS:

public Q_SLOTS:

private:
    void error(QNetworkReply::NetworkError error);
    void sslErrors(const QList<QSslError> &errors);

protected:
    void sendMessage(const QString &chat_id, const QString &text, Callback<BotMessage> callback, const QString &parse_mode, bool disable_web_page_preview, bool disable_notification, int reply_to_message_id, const QMap<QString, QVariant> &reply_markup);

    void postQuery(const QString &method, const QUrlQuery &query, std::function<void (const QVariant &res, const CallbackError &error)> callback);

    template<typename T>
    void _callCallback(const Callback<T> &callback, T result, const CallbackError &error) {
        if(callback) callback(result, error);
    }

private:
    TelegramBotPrivate *p;
};

#endif // TELEGRAMBOT_H
