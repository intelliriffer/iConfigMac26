/*
; iConnectivity iConfig source code and documentation is released under a GPLv3 license.
;
; A copy is available from the Open Source Initiative site at:
;	https://opensource.org/licenses/gpl-3.0.html
*/

#ifndef THEMECONTROLLER_H
#define THEMECONTROLLER_H

#include <QString>
#include <QSettings>
#include <QGuiApplication>
#include <QStyleHints>

// Theme mode enumeration
enum class ThemeMode {
    System,  // Follow system appearance
    Light,   // Force light theme
    Dark     // Force dark theme
};

class ThemeController
{
public:
    explicit ThemeController(QObject *parent = nullptr);

    // Get current theme mode from settings
    static ThemeMode getCurrentThemeMode();

    // Set theme mode and apply it
    static void setThemeMode(ThemeMode mode);

    // Apply the theme immediately based on current setting
    static void applyTheme();

    // Convert theme mode to string for UI display
    static QString themeModeToString(ThemeMode mode);

private:
#if defined(Q_OS_MAC)
    static void setMacOSAppearance(ThemeMode mode);
#endif
};

#endif // THEMECONTROLLER_H
