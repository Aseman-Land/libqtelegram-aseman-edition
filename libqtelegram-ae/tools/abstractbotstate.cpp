#include "abstractbotstate.h"
#include "botstatemanager.h"

#include <QDebug>

AbstractBotState::AbstractBotState(TelegramBot *bot) :
    QObject(bot),
    _bot(bot),
    _stateManager(Q_NULLPTR)
{
}

BotReplyKeyboardMarkup AbstractBotState::buttons(qint32 userId)
{
    Q_UNUSED(userId)
    return BotReplyKeyboardMarkup::null;
}

BotInlineKeyboardMarkup AbstractBotState::inlineButtons(qint32 userId)
{
    Q_UNUSED(userId)
    return BotInlineKeyboardMarkup::null;
}

QList<QList<BotKeyboardButton> > AbstractBotState::convertListToButtons(const QList<QList<QString> > &buttons)
{
    QList<QList<BotKeyboardButton>> btnsList;
    for(const QList<QString> &list: buttons)
    {
        QList<BotKeyboardButton> btnsListInnter;
        for(const QString &txt: list)
        {
            BotKeyboardButton btn;
            btn.setText(txt);
            btnsListInnter << btn;
        }

        btnsList << btnsListInnter;
    }
    return btnsList;
}

void AbstractBotState::sendMessage(int userId, const QString &text, const BotReplyKeyboardMarkup &markup)
{
    if(markup.keyboard().count())
        bot()->sendMessage(QString::number(userId), text, Q_NULLPTR, QStringLiteral(""), false, false, 0, markup);
    else
        bot()->sendMessage(QString::number(userId), text, Q_NULLPTR);
}

void AbstractBotState::sendPhoto(int userId, const QString &photo, const QString &text, const BotReplyKeyboardMarkup &markup)
{
    bot()->sendPhoto(QString::number(userId), photo, Q_NULLPTR, text, false, 0, markup);
}

void AbstractBotState::sendLocation(int userId, qreal latitude, qreal longitude, const BotReplyKeyboardMarkup &markup)
{
    bot()->sendLocation(QString::number(userId), latitude, longitude, Q_NULLPTR, false, false, 0, markup);
}

void AbstractBotState::setStateManager(BotStateManager *stateManager)
{
    _stateManager = stateManager;
}

AbstractBotState::~AbstractBotState()
{
}
