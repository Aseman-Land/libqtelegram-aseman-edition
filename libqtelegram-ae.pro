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

linux {
    contains(QMAKE_HOST.arch, x86_64) {
        LIB_PATH = x86_64-linux-gnu
    } else {
        LIB_PATH = i386-linux-gnu
    }
}

isEmpty(PREFIX) {
    INSTALL_HEADER = $$[QT_INSTALL_HEADERS]
    INSTALL_LIBS = $$[QT_INSTALL_LIBS]
} else {
    INSTALL_HEADER = $$PREFIX/include
    INSTALL_LIBS = $$PREFIX/lib/$$LIB_PATH
}

INSTALL_PREFIX = $$INSTALL_HEADER/libqtelegram-ae
INSTALL_HEADERS = $$HEADERS
include(qmake/headerinstall.pri)

target = $$TARGET
target.path = $$INSTALL_LIBS

INSTALLS += target
