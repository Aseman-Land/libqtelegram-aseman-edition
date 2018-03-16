QT += core
QT -= gui

CONFIG += c++11

INCLUDEPATH += $$[QT_INSTALL_HEADERS]/libqtelegram-ae/
LIBS += -lqtelegram-ae

TARGET = TelegramStatusOnliner
TEMPLATE = app

SOURCES += main.cpp

# You can also make your code fail to compile if you use deprecated APIs.
# In order to do so, uncomment the following line.
# You can also select to disable deprecated APIs only up to a certain version of Qt.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

RESOURCES += \
    resource.qrc
