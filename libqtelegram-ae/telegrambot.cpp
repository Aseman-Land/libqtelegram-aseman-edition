#define METHOD_DEFINE QString("https://api.telegram.org/bot" + p->token + "/" + __FUNCTION__)

#include "telegrambot.h"

#include <QJsonDocument>
#include <QJsonObject>
#include <QNetworkAccessManager>
#include <QNetworkReply>
#include <QNetworkRequest>
#include <QUrlQuery>

class TelegramBotPrivate
{
public:
    QNetworkAccessManager *manager;
    QString token;
};

TelegramBot::TelegramBot(const QString &token, QObject *parent) :
    TelegramBot(parent)
{
    p->token = token;
}

TelegramBot::TelegramBot(QObject *parent) :
    QObject(parent)
{
    p = new TelegramBotPrivate;
    p->manager = new QNetworkAccessManager(this);
}

void TelegramBot::getMe(Callback<BotUser> callback)
{
    QUrlQuery query = QUrlQuery();

    postQuery(__FUNCTION__, query, [this, callback](const QVariant &res, const CallbackError &error){
        _callCallback<BotUser>(callback, res.toMap(), error);
    });
}

void TelegramBot::getUpdates(Callback<QList<BotUpdate> > callback, qint32 offset, qint32 limit, qint32 timeout, const QStringList &allowed_updates)
{
    QUrlQuery query = QUrlQuery();
    if(offset) query.addQueryItem(QStringLiteral("offset"), QString::number(offset));
    if(limit) query.addQueryItem(QStringLiteral("limit"), QString::number(limit));
    if(timeout) query.addQueryItem(QStringLiteral("timeout"), QString::number(timeout));
    for(const QString &alupd: allowed_updates)
        query.addQueryItem(QStringLiteral("allowed_updates[]"), alupd);

    postQuery(__FUNCTION__, query, [this, callback](const QVariant &res, const CallbackError &error){
        QList<BotUpdate> list;
        for(const QVariant &var: res.toList())
            list << BotUpdate(var.toMap());

        _callCallback<QList<BotUpdate> >(callback, list, error);
    });
}

void TelegramBot::sendMessage(const QString &chat_id, const QString &text, Callback<BotMessage> callback, const QString &parse_mode, bool disable_web_page_preview, bool disable_notification, int reply_to_message_id, const BotInlineKeyboardMarkup &reply_markup)
{
    sendMessage(chat_id, text, callback, parse_mode, disable_web_page_preview, disable_notification, reply_to_message_id, reply_markup.toMap());
}

void TelegramBot::sendMessage(const QString &chat_id, const QString &text, Callback<BotMessage> callback, const QString &parse_mode, bool disable_web_page_preview, bool disable_notification, int reply_to_message_id, const BotReplyKeyboardMarkup &reply_markup)
{
    sendMessage(chat_id, text, callback, parse_mode, disable_web_page_preview, disable_notification, reply_to_message_id, reply_markup.toMap());
}

void TelegramBot::sendMessage(const QString &chat_id, const QString &text, Callback<BotMessage> callback, const QString &parse_mode, bool disable_web_page_preview, bool disable_notification, int reply_to_message_id, const BotReplyKeyboardRemove &reply_markup)
{
    sendMessage(chat_id, text, callback, parse_mode, disable_web_page_preview, disable_notification, reply_to_message_id, reply_markup.toMap());
}

void TelegramBot::sendMessage(const QString &chat_id, const QString &text, Callback<BotMessage> callback, const QString &parse_mode, bool disable_web_page_preview, bool disable_notification, int reply_to_message_id, const BotForceReply &reply_markup)
{
    sendMessage(chat_id, text, callback, parse_mode, disable_web_page_preview, disable_notification, reply_to_message_id, reply_markup.toMap());
}

void TelegramBot::sendMessage(const QString &chat_id, const QString &text, Callback<BotMessage> callback, const QString &parse_mode, bool disable_web_page_preview, bool disable_notification, int reply_to_message_id)
{
    sendMessage(chat_id, text, callback, parse_mode, disable_web_page_preview, disable_notification, reply_to_message_id, QMap<QString, QVariant>());
}

void TelegramBot::sendPhoto(const QString &chat_id, const QString &photo, Callback<BotMessage> callback, const QString &caption, bool disable_notification, int reply_to_message_id, const BotReplyKeyboardMarkup &reply_markup)
{
    QVariantMap reply_markup_map = reply_markup.toMap();
    QUrlQuery query = QUrlQuery();
    query.addQueryItem(QStringLiteral("chat_id"), chat_id.toInt()? QString::number(chat_id.toInt()) : chat_id);
    if(photo.count()) query.addQueryItem(QStringLiteral("photo"), photo);
    if(caption.count()) query.addQueryItem(QStringLiteral("caption"), caption);
    if(disable_notification) query.addQueryItem(QStringLiteral("disable_notification"), disable_notification?QStringLiteral("true"):QStringLiteral("false"));
    if(reply_to_message_id) query.addQueryItem(QStringLiteral("reply_to_message_id"), QString::number(reply_to_message_id));
    if(reply_markup_map.count()) {
        QJsonDocument doc( QJsonObject::fromVariantMap(reply_markup_map) );
        query.addQueryItem(QStringLiteral("reply_markup"), QString::fromUtf8(doc.toJson(QJsonDocument::Compact)));
    }

    postQuery(__FUNCTION__, query, [this, callback](const QVariant &res, const CallbackError &error){
        _callCallback<BotMessage>(callback, res.toMap(), error);
    });
}

void TelegramBot::sendLocation(const QString &chat_id, qreal latitude, qreal longitude, Callback<BotMessage> callback, bool live_period, bool disable_notification, int reply_to_message_id, const BotReplyKeyboardMarkup &reply_markup)
{
    QVariantMap reply_markup_map = reply_markup.toMap();
    QUrlQuery query = QUrlQuery();
    query.addQueryItem(QStringLiteral("chat_id"), chat_id.toInt()? QString::number(chat_id.toInt()) : chat_id);
    query.addQueryItem(QStringLiteral("latitude"), QString::number(latitude));
    query.addQueryItem(QStringLiteral("longitude"), QString::number(longitude));
    if(live_period) query.addQueryItem(QStringLiteral("live_period"), live_period?QStringLiteral("true"):QStringLiteral("false"));
    if(disable_notification) query.addQueryItem(QStringLiteral("disable_notification"), disable_notification?QStringLiteral("true"):QStringLiteral("false"));
    if(reply_to_message_id) query.addQueryItem(QStringLiteral("reply_to_message_id"), QString::number(reply_to_message_id));
    if(reply_markup_map.count()) {
        QJsonDocument doc( QJsonObject::fromVariantMap(reply_markup_map) );
        query.addQueryItem(QStringLiteral("reply_markup"), QString::fromUtf8(doc.toJson(QJsonDocument::Compact)));
    }

    postQuery(__FUNCTION__, query, [this, callback](const QVariant &res, const CallbackError &error){
        _callCallback<BotMessage>(callback, res.toMap(), error);
    });
}

void TelegramBot::editMessageText(const QString &chat_id, const QString &message_id, const QString &inline_message_id, const QString &text, Callback<BotMessage> callback, const QString &parse_mode, bool disable_web_page_preview, const BotInlineKeyboardMarkup &reply_markup)
{
    QVariantMap reply_markup_map = reply_markup.toMap();
    QUrlQuery query = QUrlQuery();
    query.addQueryItem(QStringLiteral("chat_id"), chat_id.toInt()? QString::number(chat_id.toInt()) : chat_id);
    if(text.count()) query.addQueryItem(QStringLiteral("text"), text);
    if(message_id.count()) query.addQueryItem(QStringLiteral("message_id"), message_id);
    if(inline_message_id.count()) query.addQueryItem(QStringLiteral("inline_message_id"), inline_message_id);
    if(parse_mode.count()) query.addQueryItem(QStringLiteral("parse_mode"), parse_mode);
    if(disable_web_page_preview) query.addQueryItem(QStringLiteral("disable_web_page_preview"), disable_web_page_preview?QStringLiteral("true"):("false"));
    if(reply_markup_map.count()) {
        QJsonDocument doc( QJsonObject::fromVariantMap(reply_markup_map) );
        query.addQueryItem(QStringLiteral("reply_markup"), QString::fromUtf8(doc.toJson(QJsonDocument::Compact)));
    }

    postQuery(__FUNCTION__, query, [this, callback](const QVariant &res, const CallbackError &error){
        _callCallback<BotMessage>(callback, res.toMap(), error);
    });
}

void TelegramBot::editMessageCaption(const QString &chat_id, const QString &message_id, const QString &inline_message_id, const QString &caption, Callback<BotMessage> callback, const BotInlineKeyboardMarkup &reply_markup)
{
    QVariantMap reply_markup_map = reply_markup.toMap();
    QUrlQuery query = QUrlQuery();
    query.addQueryItem(QStringLiteral("chat_id"), chat_id.toInt()? QString::number(chat_id.toInt()) : chat_id);
    if(caption.count()) query.addQueryItem(QStringLiteral("caption"), caption);
    if(message_id.count()) query.addQueryItem(QStringLiteral("message_id"), message_id);
    if(inline_message_id.count()) query.addQueryItem(QStringLiteral("inline_message_id"), inline_message_id);
    if(reply_markup_map.count()) {
        QJsonDocument doc( QJsonObject::fromVariantMap(reply_markup_map) );
        query.addQueryItem(QStringLiteral("reply_markup"), QString::fromUtf8(doc.toJson(QJsonDocument::Compact)));
    }

    postQuery(__FUNCTION__, query, [this, callback](const QVariant &res, const CallbackError &error){
        _callCallback<BotMessage>(callback, res.toMap(), error);
    });
}

void TelegramBot::editMessageReplyMarkup(const QString &chat_id, const QString &message_id, const QString &inline_message_id, Callback<BotMessage> callback, const BotInlineKeyboardMarkup &reply_markup)
{
    QVariantMap reply_markup_map = reply_markup.toMap();
    QUrlQuery query = QUrlQuery();
    query.addQueryItem(QStringLiteral("chat_id"), chat_id.toInt()? QString::number(chat_id.toInt()) : chat_id);
    if(message_id.count()) query.addQueryItem(QStringLiteral("message_id"), message_id);
    if(inline_message_id.count()) query.addQueryItem(QStringLiteral("inline_message_id"), inline_message_id);
    if(reply_markup_map.count()) {
        QJsonDocument doc( QJsonObject::fromVariantMap(reply_markup_map) );
        query.addQueryItem(QStringLiteral("reply_markup"), QString::fromUtf8(doc.toJson(QJsonDocument::Compact)));
    }

    postQuery(__FUNCTION__, query, [this, callback](const QVariant &res, const CallbackError &error){
        _callCallback<BotMessage>(callback, res.toMap(), error);
    });
}

void TelegramBot::sendMessage(const QString &chat_id, const QString &text, Callback<BotMessage> callback, const QString &parse_mode, bool disable_web_page_preview, bool disable_notification, int reply_to_message_id, const QMap<QString, QVariant> &reply_markup)
{
    QUrlQuery query = QUrlQuery();
    query.addQueryItem(QStringLiteral("chat_id"), chat_id.toInt()? QString::number(chat_id.toInt()) : chat_id);
    query.addQueryItem(QStringLiteral("text"), text);
    if(parse_mode.count()) query.addQueryItem(QStringLiteral("parse_mode"), parse_mode);
    if(disable_web_page_preview) query.addQueryItem(QStringLiteral("disable_web_page_preview"), disable_web_page_preview?QStringLiteral("true"):("false"));
    if(disable_notification) query.addQueryItem(QStringLiteral("disable_notification"), disable_notification?QStringLiteral("true"):("false"));
    if(reply_to_message_id) query.addQueryItem(QStringLiteral("reply_to_message_id"), QString::number(reply_to_message_id));
    if(reply_markup.count()) {
        QJsonDocument doc( QJsonObject::fromVariantMap(reply_markup) );
        query.addQueryItem(QStringLiteral("reply_markup"), QString::fromUtf8(doc.toJson(QJsonDocument::Compact)));
    }

    postQuery(__FUNCTION__, query, [this, callback](const QVariant &res, const CallbackError &error){
        _callCallback<BotMessage>(callback, res.toMap(), error);
    });
}

void TelegramBot::postQuery(const QString &method, const QUrlQuery &query, std::function<void (const QVariant &res, const CallbackError &error)> callback)
{
    QSslConfiguration config(QSslConfiguration::defaultConfiguration());

    QUrl url = QUrl("https://api.telegram.org/bot" + p->token + "/" + method);
    url.setQuery(query);

    QNetworkRequest request;
    request.setSslConfiguration(config);
    request.setRawHeader("Accept", "application/xml");
    request.setRawHeader("Content-Type", "application/xml");
    request.setUrl(url);

    QNetworkReply *reply = p->manager->get(request);

    connect(reply, &QNetworkReply::finished, this, [this, callback, reply](){
        QByteArray result = reply->readAll();
        reply->deleteLater();

        QJsonDocument json = QJsonDocument::fromJson(result);
        if(!json.isObject())
        {
            callback(QVariant(), apiError());
            return;
        }

        QJsonObject object = json.object();
        QVariantHash hash = object.toVariantHash();
        if(!hash.value(QStringLiteral("ok")).toBool()) {
            CallbackError error;
            error.errorCode = hash.value(QStringLiteral("error_code")).toInt();
            error.errorText = hash.value(QStringLiteral("description")).toString();
            error.null = false;
            callback(QVariant(), CallbackError());
        }

        callback(hash.value(QStringLiteral("result")), CallbackError());
    });

    connect(reply, &QNetworkReply::sslErrors, this, &TelegramBot::sslErrors);
    connect(reply, static_cast<void (QNetworkReply::*)(QNetworkReply::NetworkError)>(&QNetworkReply::error), this, &TelegramBot::error);
}

void TelegramBot::setToken(const QString &token)
{
    p->token = token;
}

QString TelegramBot::token() const
{
    return p->token;
}

void TelegramBot::error(QNetworkReply::NetworkError error)
{
    Q_UNUSED(error)
}

void TelegramBot::sslErrors(const QList<QSslError> &errors)
{
    Q_UNUSED(errors)
}

TelegramBot::~TelegramBot()
{
    delete p;
}
