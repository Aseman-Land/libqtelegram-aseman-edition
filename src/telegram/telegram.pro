TARGET = QtTelegram

load(qt_module)
QT -= gui
QT += network

#GIT_REVISION = $$system(git rev-parse HEAD)
BUILD_UUID = $$system(uuidgen)

macx {
    QT += macextras
}
DEFINES += LIBQTELEGRAM_LIBRARY
CONFIG += typeobjects

include(../../libqtelegram-ae.pri)

contains(CONFIG, static) || contains(CONFIG, staticlib) {
    message("libqtelegram will be build as static library")
    DEFINES += LIBQTELEGRAM_STATIC=1
}

!contains(CONFIG, no_install) {
    INSTALL_HEADERS_PREFIX = $$[QT_INSTALL_HEADERS]
    INSTALL_PREFIX = $$INSTALL_HEADERS_PREFIX/QtTelegram
    INSTALL_HEADERS = $$HEADERS
    include(../../qmake/headerinstall.pri)
}
