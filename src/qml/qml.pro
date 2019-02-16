TARGET  = telegramqml
TARGETPATH = TelegramQml
IMPORT_VERSION = 1.0

ios|osx|clang: QMAKE_CXXFLAGS += -Wno-narrowing
QT += core gui network qml quick telegram xml multimedia sql
CONFIG += c++11

DEFINES += TELEGRAMQML_LIBRARY
DEFINES += TELEGRAMQML_QML_PLUGIN
CONFIG += qt no_keywords c++11
static: DEFINES += ASEMAN_STATIC_BUILD

INCLUDEPATH += $$PWD $$PWD/../../libqtelegram-ae/

SOURCES += \
    $$PWD/telegramengine.cpp \
    $$PWD/telegramapp.cpp \
    $$PWD/telegramhost.cpp \
    $$PWD/telegramauthenticate.cpp \
    $$PWD/tqobject.cpp \
    $$PWD/telegramtools.cpp \
    $$PWD/telegramqml_plugin.cpp \
    $$PWD/telegramqmlinitializer.cpp \
    $$PWD/telegramshareddatamanager.cpp \
    $$PWD/telegramsharedpointer.cpp \
    $$PWD/telegrammessagelistmodel.cpp \
    $$PWD/telegramdialoglistmodel.cpp \
    $$PWD/telegramenums.cpp \
    $$PWD/telegramprofilemanagermodel.cpp \
    $$PWD/telegramabstractenginelistmodel.cpp \
    $$PWD/telegramabstractlistmodel.cpp \
    $$PWD/telegramimageelement.cpp \
    $$PWD/telegrampeerdetails.cpp \
    $$PWD/telegramnotificationhandler.cpp \
    $$PWD/telegrammessagefetcher.cpp \
    $$PWD/private/telegramthumbnailercore.cpp \
    $$PWD/private/telegramthumbnailer.cpp \
    $$PWD/private/telegramfilelocation.cpp \
    $$PWD/private/telegramuploadhandler.cpp \
    $$PWD/private/telegramdownloadhandler.cpp \
    $$PWD/telegramstickerscategoriesmodel.cpp \
    $$PWD/telegramstickersmodel.cpp \
    $$PWD/tqmldocumentexporter.cpp \
    $$PWD/tqbaseobject.cpp \
    $$PWD/telegrammessagesearchmodel.cpp \
    $$PWD/telegramstatus.cpp \
    $$PWD/telegramstatustyping.cpp \
    $$PWD/telegramtesttools.cpp \
    $$PWD/telegramtopmessagesmodel.cpp \
    $$PWD/telegramcache.cpp \
    $$PWD/telegrammemberslistmodel.cpp \
    $$PWD/telegrammedialistmodel.cpp \
    $$PWD/telegramauthstore.cpp \
    $$PWD/telegramqmlsharedpointer.cpp

HEADERS += \
    $$PWD/telegramqml_macros.h \
    $$PWD/telegramqml_global.h \
    $$PWD/telegramengine.h \
    $$PWD/telegramapp.h \
    $$PWD/telegramhost.h \
    $$PWD/telegramauthenticate.h \
    $$PWD/tqobject.h \
    $$PWD/telegramtools.h \
    $$PWD/telegramqml_plugin.h \
    $$PWD/telegramqmlinitializer.h \
    $$PWD/telegramshareddatamanager.h \
    $$PWD/telegramsharedpointer.h \
    $$PWD/telegrammessagelistmodel.h \
    $$PWD/telegramdialoglistmodel.h \
    $$PWD/telegramenums.h \
    $$PWD/telegramprofilemanagermodel.h \
    $$PWD/telegramabstractenginelistmodel.h \
    $$PWD/telegramabstractlistmodel.h \
    $$PWD/telegramimageelement.h \
    $$PWD/telegrampeerdetails.h \
    $$PWD/telegramnotificationhandler.h \
    $$PWD/telegrammessagefetcher.h \
    $$PWD/private/telegramthumbnailercore.h \
    $$PWD/private/telegramthumbnailer.h \
    $$PWD/private/telegramfilelocation.h \
    $$PWD/private/telegramuploadhandler.h \
    $$PWD/private/telegramdownloadhandler.h \
    $$PWD/telegramstickerscategoriesmodel.h \
    $$PWD/telegramstickersmodel.h \
    $$PWD/tqmldocumentexporter.h \
    $$PWD/tqbaseobject.h \
    $$PWD/telegrammessagesearchmodel.h \
    $$PWD/telegramstatus.h \
    $$PWD/telegramstatustyping.h \
    $$PWD/telegramtesttools.h \
    $$PWD/telegramtopmessagesmodel.h \
    $$PWD/telegramcache.h \
    $$PWD/telegrammemberslistmodel.h \
    $$PWD/telegrammedialistmodel.h \
    $$PWD/telegramauthstore.h \
    $$PWD/telegramqmlsharedpointer.h \
    $$PWD/private/tqmlmessageobject.h

RESOURCES += \
    $$PWD/tqmlresource.qrc

DISTFILES = qmldir \
    plugins.qmltypes

load(qml_plugin)
