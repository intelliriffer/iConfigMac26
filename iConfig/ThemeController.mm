/*
; iConnectivity iConfig source code and documentation is released under a GPLv3 license.
;
; A copy is available from the Open Source Initiative site at:
;	https://opensource.org/licenses/gpl-3.0.html
*/

#include "ThemeController.h"
#include <QDebug>
#include <QCoreApplication>

#if defined(Q_OS_MAC)
#import <Cocoa/Cocoa.h>
#include <objc/objc.h>
#include <objc/runtime.h>

// Type-safe message sending macros
#define SEND_MSG(obj, sel) [obj performSelector:sel]
#endif

static const QString SETTINGS_KEY = "appearance/themeMode";

ThemeMode ThemeController::getCurrentThemeMode()
{
    QSettings settings(QCoreApplication::organizationName(),
                       QCoreApplication::applicationName());
    int mode = settings.value(SETTINGS_KEY, static_cast<int>(ThemeMode::System)).toInt();
    return static_cast<ThemeMode>(mode);
}

void ThemeController::setThemeMode(ThemeMode mode)
{
    QSettings settings(QCoreApplication::organizationName(),
                       QCoreApplication::applicationName());
    settings.setValue(SETTINGS_KEY, static_cast<int>(mode));
    applyTheme();
}

void ThemeController::applyTheme()
{
    ThemeMode currentMode = getCurrentThemeMode();

#if defined(Q_OS_MAC)
    setMacOSAppearance(currentMode);
#endif

    // Update style hints for Qt's internal color scheme detection
    if (currentMode == ThemeMode::Light) {
        QGuiApplication::styleHints()->setColorScheme(Qt::ColorScheme::Light);
    } else if (currentMode == ThemeMode::Dark) {
        QGuiApplication::styleHints()->setColorScheme(Qt::ColorScheme::Dark);
    } else {
        // System mode - Qt will follow system settings automatically
        QGuiApplication::styleHints()->setColorScheme(
            QGuiApplication::styleHints()->colorScheme());
    }

    qDebug() << "Theme applied:" << themeModeToString(currentMode);
}

QString ThemeController::themeModeToString(ThemeMode mode)
{
    switch (mode) {
    case ThemeMode::System:
        return "System";
    case ThemeMode::Light:
        return "Light";
    case ThemeMode::Dark:
        return "Dark";
    default:
        return "Unknown";
    }
}

#ifdef Q_OS_MAC
void ThemeController::setMacOSAppearance(ThemeMode mode)
{
    NSApplication *app = [NSApplication sharedApplication];

    switch (mode) {
    case ThemeMode::System:
        // Don't force any appearance - let macOS control it automatically
        qInfo() << "macOS appearance set to system default";
        break;
    case ThemeMode::Light: {
        NSAppearance *appearance = [NSAppearance appearanceNamed:NSAppearanceNameAqua];
        if (appearance) {
            [app setAppearance:appearance];
            qInfo() << "macOS appearance forced to Light";
        }
        break;
    }
    case ThemeMode::Dark: {
        NSAppearance *appearance = [NSAppearance appearanceNamed:NSAppearanceNameVibrantDark];
        if (appearance) {
            [app setAppearance:appearance];
            qInfo() << "macOS appearance forced to Dark";
        }
        break;
    }
    }
}
#endif
