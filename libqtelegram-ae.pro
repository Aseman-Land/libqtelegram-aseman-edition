QT += gui
QT += network
QT += multimedia

TARGET = qtelegram-ae
TEMPLATE = lib
DEFINES += LIBQTELEGRAM_LIBRARY LQTG_DISABLE_LOG

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

include(telegram/telegram.pri)

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
    secret/decryptedmessage.cpp \
    secret/decryptedmessageaction.cpp \
    secret/decryptedmessagemedia.cpp \
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
    file/uploadfileengine.cpp

HEADERS += \
    util/cryptoutils.h \
    util/utils.h \
    util/tlvalues.h \
    util/constants.h \
    util/asserter.h \
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
    secret/decryptedmessage.h \
    secret/decryptedmessageaction.h \
    secret/decryptedmessagemedia.h \
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
