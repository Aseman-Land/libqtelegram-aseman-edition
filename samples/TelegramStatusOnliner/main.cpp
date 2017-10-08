#include <QCoreApplication>
#include <QTimer>
#include <QDebug>
#include <QTime>

#include <telegram.h>

#include <iostream>

SendMessageAction::SendMessageActionClassType chooseNewAction()
{
    int rnd = qrand()%8;

    switch(rnd)
    {
    case 00: return SendMessageAction::typeSendMessageTypingAction;
    case 01: return SendMessageAction::typeSendMessageGamePlayAction;
    case 02: return SendMessageAction::typeSendMessageUploadVideoAction;
    case 03: return SendMessageAction::typeSendMessageRecordAudioAction;
    case 04: return SendMessageAction::typeSendMessageUploadAudioAction;
    case 05: return SendMessageAction::typeSendMessageUploadPhotoAction;
    case 06: return SendMessageAction::typeSendMessageUploadDocumentAction;
    case 07: return SendMessageAction::typeSendMessageRecordVideoAction;
    }
    return SendMessageAction::typeSendMessageTypingAction;
}

void makeItOnWrite(Telegram *tg, const InputPeer &peer)
{
    static int counter = 0;
    static SendMessageAction::SendMessageActionClassType action = chooseNewAction();

    counter++;
    if(counter % 1 == 0)
        action = chooseNewAction();

    tg->messagesSetTyping(peer, action, [tg, peer](TG_MESSAGES_SET_TYPING_CALLBACK){
        if(!error.null)
            qDebug() << __FUNCTION__ << error.errorCode << error.errorText;

        QTimer::singleShot(4000, tg, [tg, peer](){ makeItOnWrite(tg, peer); });
    });
}

int main(int argc, char *argv[])
{
    qsrand(QTime::currentTime().msec());

    QCoreApplication a(argc, argv);

    qint64 userId = 0;
    if(a.arguments().length() == 3)
        userId = a.arguments().at(2).toInt();
    else
    if(a.arguments().length() != 2)
    {
        qDebug() << "TelegramMonoChannelFetcher +phoneNumber";
        return 0;
    }

    QString phoneNumber = a.arguments().at(1);

    qputenv("QT_LOGGING_RULES", "tg.*=false");

    qDebug() << "Creating Telegram object...";
    Telegram telegram("149.154.167.50", 443, 2, 22432, "d1a8259a0c129bfab0b9756cd5d8a47f",
                      phoneNumber,
                      QCoreApplication::applicationDirPath(),
                      ":/tg-server.pub");

    Telegram::connect(&telegram, &Telegram::authNeeded, [&](){
        telegram.authSendCode([&](TG_AUTH_SEND_CODE_CALLBACK){
            Q_UNUSED(msgId)
            Q_UNUSED(result)
            Q_UNUSED(error)
            int code;
            qDebug() << "Please enter the number:";
            std::cin >> code;
            QString sCode = QString::number(code);
            telegram.authSignIn(sCode, [&](TG_AUTH_SIGN_IN_CALLBACK){
              Q_UNUSED(msgId);
              if(!error.null) {
                qDebug() << error.errorText;
              }
            });
        });
    });

    Telegram::connect(&telegram, &Telegram::authLoggedIn, [&](){
        qDebug() << "Logged In";
        telegram.messagesGetDialogs(0, 0, 0, InputPeer::typeInputPeerEmpty, 200, [&](TG_MESSAGES_GET_DIALOGS_CALLBACK){
            Q_UNUSED(msgId)
            if(!error.null) {
                qDebug() << error.errorText;
                return;
            }

            QHash<qint32, Chat> chats;
            Q_FOREACH(const Chat &chat, result.chats())
                chats[chat.id()] = chat;
            QHash<qint32, User> users;
            Q_FOREACH(const User &user, result.users())
                users[user.id()] = user;

            int inputId = -1;
            int num = 0;
            QMap<int, Dialog> dialogsMap;
            QMap<int, qint64> accessHashes;
            Q_FOREACH(const Dialog &dlg, result.dialogs())
            {
                Peer peer = dlg.peer();
                switch(static_cast<int>(peer.classType()))
                {
                case Peer::typePeerChat:
                    if(chats.contains(peer.chatId())) {
                        if(userId && userId != peer.chatId())
                            break;
                        else
                        if(userId)
                            inputId = num;

                        qDebug() << QString("%1. %2 (%3)").arg(num).arg(chats.value(peer.chatId()).title())
                                    .arg(peer.chatId()).toStdString().c_str();
                        accessHashes[num] = chats.value(peer.chatId()).accessHash();
                    }
                    break;
                case Peer::typePeerChannel:
                    continue;
                    if(chats.contains(peer.chatId())) {
                        qDebug() << QString("%1. %2 (%3)").arg(num).arg(chats.value(peer.channelId()).title())
                                    .arg(peer.chatId()).toStdString().c_str();
                        accessHashes[num] = chats.value(peer.channelId()).accessHash();
                    }
                    break;
                case Peer::typePeerUser:
                    if(userId && userId != peer.userId())
                        break;
                    else
                    if(userId)
                        inputId = num;

                    if(users.contains(peer.userId())) {
                        qDebug() << QString("%1. %2 (%3)").arg(num).arg(users.value(peer.userId()).firstName() + " " +
                                    users.value(peer.userId()).lastName().trimmed()).arg(peer.userId()).toStdString().c_str();
                        accessHashes[num] = users.value(peer.userId()).accessHash();
                    }
                    break;
                }

                dialogsMap[num] = dlg;
                num++;
            }

            if(inputId == -1)
            {
                qDebug() << "Please enter id of the conversation:";
                std::cin >> inputId;
            }

            Dialog dlg = dialogsMap[inputId];
            InputPeer inputPeer;
            inputPeer.setAccessHash(accessHashes[inputId]);

            Peer peer = dlg.peer();
            switch(static_cast<int>(peer.classType()))
            {
            case Peer::typePeerChat:
                inputPeer.setChatId(peer.chatId());
                inputPeer.setClassType(InputPeer::typeInputPeerChat);
                break;
            case Peer::typePeerChannel:
                inputPeer.setChannelId(peer.channelId());
                inputPeer.setClassType(InputPeer::typeInputPeerChannel);
                break;
            case Peer::typePeerUser:
                inputPeer.setUserId(peer.userId());
                inputPeer.setClassType(InputPeer::typeInputPeerUser);
                break;
            }

            makeItOnWrite(&telegram, inputPeer);
        });;
    });

    qDebug() << "Initializing telegram...";
    telegram.init();

    return a.exec();
}
