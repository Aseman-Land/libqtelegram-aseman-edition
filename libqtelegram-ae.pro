QT += gui
QT += network
QT += multimedia

TARGET = qtelegram-ae
TEMPLATE = lib
DEFINES += LIBQTELEGRAM_LIBRARY

macx {
    CONFIG += staticlib
    QT += macextras
} android {
    CONFIG += staticlib
}

include(libqtelegram-ae.pri)

INSTALL_PREFIX = $$[QT_INSTALL_HEADERS]/libqtelegram-ae
INSTALL_HEADERS = $$HEADERS
include(qmake/headerinstall.pri)

target = $$TARGET
isEmpty(LIBDIR) {
    target.path = $$[QT_INSTALL_LIBS]
} else {
    target.path = $$LIBDIR
}

INSTALLS += target
