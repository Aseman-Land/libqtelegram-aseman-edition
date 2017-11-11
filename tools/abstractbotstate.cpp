#include "abstractbotstate.h"

#include <QDebug>

AbstractBotState::AbstractBotState(TelegramBot *bot) :
    QObject(bot),
    _bot(bot)
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
        bot()->sendMessage(QString::number(userId), text, Q_NULLPTR, "", false, false, 0, markup);
    else
        bot()->sendMessage(QString::number(userId), text, Q_NULLPTR);
}

AbstractBotState::~AbstractBotState()
{
}
