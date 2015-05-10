QT += gui
QT += network

TARGET = qtelegram-ae
TEMPLATE = lib
DEFINES += LIBQTELEGRAM_LIBRARY

win32 {
    LIBS += -L$$OUT_PWD/$$DESTDIR -lssleay32 -lcrypto -lz
    INCLUDEPATH += $$OUT_PWD/$$DESTDIR/include
} else {
macx {
    QT += macextras
    LIBS += -lssl -lcrypto -lz
    INCLUDEPATH += /usr/include/
} else {
    LIBS += -lssl -lcrypto -lz
    INCLUDEPATH += /usr/include/
}
}

SOURCES += \
    util/utils.cpp \
    util/cryptoutils.cpp \
    util/asserter.cpp \
    file/uploadfile.cpp \
    file/downloadfile.cpp \
    file/filehandler.cpp \
    secret/decrypter.cpp \
    secret/secretstate.cpp \
    secret/secretchat.cpp \
    secret/encrypter.cpp \
    secret/decryptedmessagebuilder.cpp \
    core/outboundpkt.cpp \
    core/eventtimer.cpp \
    core/settings.cpp \
    core/dcprovider.cpp \
    core/api.cpp \
    core/sessionmanager.cpp \
    core/inboundpkt.cpp \
    core/abstractapi.cpp \
    core/connection.cpp \
    core/query.cpp \
    core/session.cpp \
    core/dcauth.cpp \
    telegram.cpp

HEADERS += \
    util/cryptoutils.h \
    util/utils.h \
    util/tlvalues.h \
    util/constants.h \
    util/asserter.h \
    types/inputcontact.h \
    types/inputdocument.h \
    types/message.h \
    types/notifypeer.h \
    types/dialog.h \
    types/photo.h \
    types/decryptedmessagemedia.h \
    types/photosize.h \
    types/inputencryptedfile.h \
    types/document.h \
    types/inputfilelocation.h \
    types/inputgeochat.h \
    types/inputpeer.h \
    types/inputfile.h \
    types/messageaction.h \
    types/sendmessageaction.h \
    types/userstatus.h \
    types/contactblocked.h \
    types/types.h \
    types/updatesstate.h \
    types/chatfull.h \
    types/peernotifysettings.h \
    types/contactsforeignlink.h \
    types/decryptedmessageaction.h \
    types/geopoint.h \
    types/inputnotifypeer.h \
    types/inputmedia.h \
    types/inputaudio.h \
    types/contactstatus.h \
    types/chatphoto.h \
    types/messagemedia.h \
    types/geochatmessage.h \
    types/decryptedmessage.h \
    types/user.h \
    types/contactsmylink.h \
    types/filelocation.h \
    types/audio.h \
    types/inputphoto.h \
    types/inputgeopoint.h \
    types/inputpeernotifysettings.h \
    types/wallpaper.h \
    types/encryptedfile.h \
    types/encryptedmessage.h \
    types/storagefiletype.h \
    types/messagesfilter.h \
    types/inputencryptedchat.h \
    types/chatparticipants.h \
    types/inputvideo.h \
    types/inputchatphoto.h \
    types/update.h \
    types/dcoption.h \
    types/peer.h \
    types/userprofilephoto.h \
    types/inputuser.h \
    types/chatparticipant.h \
    types/importedcontact.h \
    types/encryptedchat.h \
    types/inputphotocrop.h \
    types/chat.h \
    types/contact.h \
    types/video.h \
    types/contactslink.h \
    types/chatlocated.h \
    file/uploadfile.h \
    file/filehandler.h \
    file/file.h \
    file/downloadfile.h \
    file/fileoperation.h \
    secret/secretchatmessage.h \
    secret/decryptedmessagebuilder.h \
    secret/decrypter.h \
    secret/secretchat.h \
    secret/encrypter.h \
    secret/secretstate.h \
    core/query.h \
    core/session.h \
    core/connection.h \
    core/settings.h \
    core/outboundpkt.h \
    core/querymethods.h \
    core/sessionmanager.h \
    core/dcprovider.h \
    core/abstractapi.h \
    core/api.h \
    core/inboundpkt.h \
    core/dcauth.h \
    core/endpoint.h \
    core/eventtimer.h \
    core/dc.h \
    telegram.h \
    libqtelegram_global.h



