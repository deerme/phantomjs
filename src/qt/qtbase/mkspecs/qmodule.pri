CONFIG +=  compile_examples qpa largefile precompile_header use_gold_linker enable_new_dtags sse2 sse3 ssse3 sse4_1 sse4_2 avx avx2 pcre
QT_BUILD_PARTS += libs
QT_NO_DEFINES =  ALSA CUPS DBUS EGL EGLFS EGL_X11 EVDEV GLIB LIBPROXY OPENGL OPENVG PRINTPREVIEWWIDGET PULSEAUDIO QML_DEBUGGER SESSIONMANAGER STYLE_GTK TABLET TSLIB XINERAMA XINPUT XKB
QT_QCONFIG_PATH = 
host_build {
    QT_CPU_FEATURES.x86_64 =  mmx sse sse2
} else {
    QT_CPU_FEATURES.x86_64 =  mmx sse sse2
}
QT_COORD_TYPE = double
QT_CFLAGS_MYSQL   = -I/usr/include/mysql
QT_LFLAGS_MYSQL   = -lmysqlclient_r -lpthread -lz -lm -ldl
QT_LFLAGS_ODBC   = -lodbc
OPENSSL_LIBS = -lssl -lcrypto
styles += mac fusion windows
DEFINES += QT_NO_MTDEV
CONFIG += use_libmysqlclient_r
QMAKE_CFLAGS_FONTCONFIG = -I/usr/include/freetype2  
QMAKE_LIBS_FONTCONFIG = -lfontconfig -lfreetype  
DEFINES += QT_NO_LIBUDEV
DEFINES += QT_NO_EVDEV
DEFINES += QT_NO_TSLIB
DEFINES += QT_NO_LIBINPUT
QMAKE_LIBXI_VERSION_MAJOR = 1
QMAKE_LIBXI_VERSION_MINOR = 7
QMAKE_LIBXI_VERSION_PATCH = 1
DEFINES +=  "QT_NO_GRAPHICSVIEW" "QT_NO_GRAPHICSEFFECT" "QT_NO_STYLESHEET" "QT_NO_STYLE_CDE" "QT_NO_STYLE_CLEANLOOKS" "QT_NO_STYLE_MOTIF" "QT_NO_STYLE_PLASTIQUE" "QT_NO_PRINTPREVIEWDIALOG"
sql-drivers = 
sql-plugins =  mysql sqlite
