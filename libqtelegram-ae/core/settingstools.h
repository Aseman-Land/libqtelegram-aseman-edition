#ifndef SETTINGSTOOLS_H
#define SETTINGSTOOLS_H

#include <QMap>
#include <QVariantMap>

class Telegram;
namespace SettingsTools {
typedef bool (*ReadFunc)(Telegram *tg, QVariantMap &map);
typedef bool (*WriteFunc)(Telegram *tg, const QVariantMap &map);
}

#endif // SETTINGSTOOLS_H
