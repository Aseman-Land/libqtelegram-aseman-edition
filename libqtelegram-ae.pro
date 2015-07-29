QT += gui
QT += network
QT += multimedia

TARGET = qtelegram-ae
TEMPLATE = lib
DEFINES += LIBQTELEGRAM_LIBRARY

win32 {
    isEmpty(OPENSSL_LIB_DIR): OPENSSL_LIB_DIR = $${DESTDIR}
    isEmpty(OPENSSL_INCLUDE_PATH): OPENSSL_INCLUDE_PATH = $${DESTDIR}/include/openssl

    LIBS += -L$${OPENSSL_LIB_DIR} -lssleay32 -lcrypto -lz
    INCLUDEPATH += $${OPENSSL_INCLUDE_PATH}
} else {
    isEmpty(OPENSSL_INCLUDE_PATH): OPENSSL_INCLUDE_PATH = /usr/include/openssl /usr/local/include/openssl
    isEmpty(OPENSSL_LIB_DIR) {
        LIBS += -lssl -lcrypto -lz
    } else {
        LIBS += -L$${OPENSSL_LIB_DIR} -lssl -lcrypto -lz
    }

    INCLUDEPATH += $${OPENSSL_INCLUDE_PATH}

    macx {
        CONFIG += staticlib
        QT += macextras
    } else {
    }
}

SOURCES += \
    util/utils.cpp \
    util/cryptoutils.cpp \
    util/asserter.cpp \
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
    telegram.cpp \
    types/types.cpp \
    types/telegramtypeobject.cpp \
    types/accountauthorizations.cpp \
    types/accountdaysttl.cpp \
    types/accountpassword.cpp \
    types/accountpasswordinputsettings.cpp \
    types/accountpasswordsettings.cpp \
    types/accountprivacyrules.cpp \
    types/accountsentchangephonecode.cpp \
    types/audio.cpp \
    types/authauthorization.cpp \
    types/authcheckedphone.cpp \
    types/authexportedauthorization.cpp \
    types/authorization.cpp \
    types/authpasswordrecovery.cpp \
    types/authsentcode.cpp \
    types/chat.cpp \
    types/chatfull.cpp \
    types/chatinvite.cpp \
    types/chatlocated.cpp \
    types/chatparticipant.cpp \
    types/chatparticipants.cpp \
    types/chatphoto.cpp \
    types/config.cpp \
    types/contact.cpp \
    types/contactblocked.cpp \
    types/contactfound.cpp \
    types/contactlink.cpp \
    types/contactsblocked.cpp \
    types/contactscontacts.cpp \
    types/contactsfound.cpp \
    types/contactsimportedcontacts.cpp \
    types/contactslink.cpp \
    types/contactssuggested.cpp \
    types/contactstatus.cpp \
    types/contactsuggested.cpp \
    types/dcoption.cpp \
    types/dialog.cpp \
    types/disabledfeature.cpp \
    types/document.cpp \
    types/documentattribute.cpp \
    types/encryptedchat.cpp \
    types/encryptedfile.cpp \
    types/encryptedmessage.cpp \
    types/exportedchatinvite.cpp \
    types/filelocation.cpp \
    types/geochatmessage.cpp \
    types/geochatslocated.cpp \
    types/geochatsmessages.cpp \
    types/geochatsstatedmessage.cpp \
    types/geopoint.cpp \
    types/helpappupdate.cpp \
    types/helpinvitetext.cpp \
    types/helpsupport.cpp \
    types/importedcontact.cpp \
    types/inputappevent.cpp \
    types/inputaudio.cpp \
    types/inputchatphoto.cpp \
    types/inputcontact.cpp \
    types/inputdocument.cpp \
    types/inputencryptedchat.cpp \
    types/inputencryptedfile.cpp \
    types/inputfile.cpp \
    types/inputfilelocation.cpp \
    types/inputgeochat.cpp \
    types/inputgeopoint.cpp \
    types/inputmedia.cpp \
    types/inputnotifypeer.cpp \
    types/inputpeer.cpp \
    types/inputpeernotifyevents.cpp \
    types/inputpeernotifysettings.cpp \
    types/inputphoto.cpp \
    types/inputphotocrop.cpp \
    types/inputprivacykey.cpp \
    types/inputprivacyrule.cpp \
    types/inputstickerset.cpp \
    types/inputuser.cpp \
    types/inputvideo.cpp \
    types/message.cpp \
    types/messageaction.cpp \
    types/messagemedia.cpp \
    types/messagesaffectedhistory.cpp \
    types/messagesaffectedmessages.cpp \
    types/messagesallstickers.cpp \
    types/messageschatfull.cpp \
    types/messageschats.cpp \
    types/messagesdhconfig.cpp \
    types/messagesdialogs.cpp \
    types/messagesfilter.cpp \
    types/messagesmessage.cpp \
    types/messagesmessages.cpp \
    types/messagessentencryptedmessage.cpp \
    types/messagessentmessage.cpp \
    types/messagesstickers.cpp \
    types/messagesstickerset.cpp \
    types/nearestdc.cpp \
    types/notifypeer.cpp \
    types/peer.cpp \
    types/peernotifyevents.cpp \
    types/peernotifysettings.cpp \
    types/photo.cpp \
    types/photosize.cpp \
    types/photosphoto.cpp \
    types/photosphotos.cpp \
    types/privacykey.cpp \
    types/privacyrule.cpp \
    types/receivednotifymessage.cpp \
    types/sendmessageaction.cpp \
    types/stickerpack.cpp \
    types/stickerset.cpp \
    types/storagefiletype.cpp \
    types/update.cpp \
    types/updates.cpp \
    types/updatesdifference.cpp \
    types/updatesstate.cpp \
    types/uploadfile.cpp \
    types/user.cpp \
    types/userfull.cpp \
    types/userprofilephoto.cpp \
    types/userstatus.cpp \
    types/video.cpp \
    types/wallpaper.cpp \
    types/webpage.cpp \
    types/decryptedmessage.cpp \
    types/decryptedmessageaction.cpp \
    types/decryptedmessagemedia.cpp \
    file/uploadfileengine.cpp

HEADERS += \
    util/cryptoutils.h \
    util/utils.h \
    util/tlvalues.h \
    util/constants.h \
    util/asserter.h \
    types/types.h \
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
    libqtelegram_global.h \
    types/telegramtypeobject.h \
    types/accountauthorizations.h \
    types/accountdaysttl.h \
    types/accountpassword.h \
    types/accountpasswordinputsettings.h \
    types/accountpasswordsettings.h \
    types/accountprivacyrules.h \
    types/accountsentchangephonecode.h \
    types/audio.h \
    types/authauthorization.h \
    types/authcheckedphone.h \
    types/authexportedauthorization.h \
    types/authorization.h \
    types/authpasswordrecovery.h \
    types/authsentcode.h \
    types/chat.h \
    types/chatfull.h \
    types/chatinvite.h \
    types/chatlocated.h \
    types/chatparticipant.h \
    types/chatparticipants.h \
    types/chatphoto.h \
    types/config.h \
    types/contact.h \
    types/contactblocked.h \
    types/contactfound.h \
    types/contactlink.h \
    types/contactsblocked.h \
    types/contactscontacts.h \
    types/contactsfound.h \
    types/contactsimportedcontacts.h \
    types/contactslink.h \
    types/contactssuggested.h \
    types/contactstatus.h \
    types/contactsuggested.h \
    types/dcoption.h \
    types/dialog.h \
    types/disabledfeature.h \
    types/document.h \
    types/documentattribute.h \
    types/encryptedchat.h \
    types/encryptedfile.h \
    types/encryptedmessage.h \
    types/exportedchatinvite.h \
    types/filelocation.h \
    types/geochatmessage.h \
    types/geochatslocated.h \
    types/geochatsmessages.h \
    types/geochatsstatedmessage.h \
    types/geopoint.h \
    types/helpappupdate.h \
    types/helpinvitetext.h \
    types/helpsupport.h \
    types/importedcontact.h \
    types/inputappevent.h \
    types/inputaudio.h \
    types/inputchatphoto.h \
    types/inputcontact.h \
    types/inputdocument.h \
    types/inputencryptedchat.h \
    types/inputencryptedfile.h \
    types/inputfile.h \
    types/inputfilelocation.h \
    types/inputgeochat.h \
    types/inputgeopoint.h \
    types/inputmedia.h \
    types/inputnotifypeer.h \
    types/inputpeer.h \
    types/inputpeernotifyevents.h \
    types/inputpeernotifysettings.h \
    types/inputphoto.h \
    types/inputphotocrop.h \
    types/inputprivacykey.h \
    types/inputprivacyrule.h \
    types/inputstickerset.h \
    types/inputuser.h \
    types/inputvideo.h \
    types/message.h \
    types/messageaction.h \
    types/messagemedia.h \
    types/messagesaffectedhistory.h \
    types/messagesaffectedmessages.h \
    types/messagesallstickers.h \
    types/messageschatfull.h \
    types/messageschats.h \
    types/messagesdhconfig.h \
    types/messagesdialogs.h \
    types/messagesfilter.h \
    types/messagesmessage.h \
    types/messagesmessages.h \
    types/messagessentencryptedmessage.h \
    types/messagessentmessage.h \
    types/messagesstickers.h \
    types/messagesstickerset.h \
    types/nearestdc.h \
    types/notifypeer.h \
    types/peer.h \
    types/peernotifyevents.h \
    types/peernotifysettings.h \
    types/photo.h \
    types/photosize.h \
    types/photosphoto.h \
    types/photosphotos.h \
    types/privacykey.h \
    types/privacyrule.h \
    types/receivednotifymessage.h \
    types/sendmessageaction.h \
    types/stickerpack.h \
    types/stickerset.h \
    types/storagefiletype.h \
    types/update.h \
    types/updates.h \
    types/updatesdifference.h \
    types/updatesstate.h \
    types/uploadfile.h \
    types/user.h \
    types/userfull.h \
    types/userprofilephoto.h \
    types/userstatus.h \
    types/video.h \
    types/wallpaper.h \
    types/webpage.h \
    types/decryptedmessage.h \
    types/decryptedmessageaction.h \
    types/decryptedmessagemedia.h \
    file/uploadfileengine.h

linux {
    contains(QMAKE_HOST.arch, x86_64) {
        LIB_PATH = x86_64-linux-gnu
    } else {
        LIB_PATH = i386-linux-gnu
    }
}

isEmpty(PREFIX) {
    PREFIX = /usr
}

INSTALL_PREFIX = $$PREFIX/include/libqtelegram-ae
INSTALL_HEADERS = $$HEADERS
include(qmake/headerinstall.pri)

target = $$TARGET
isEmpty(LIBDIR) {
    target.path = $$PREFIX/lib/$$LIB_PATH
} else {
    target.path = $$LIBDIR
}

INSTALLS += target
