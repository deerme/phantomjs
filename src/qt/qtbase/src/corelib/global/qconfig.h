/* Everything */
/* Compile time features */
/* Qt was configured for a static build */
#if !defined(QT_SHARED) && !defined(QT_STATIC)
# define QT_STATIC
#endif

#define QT_LARGEFILE_SUPPORT 64
#define QT_POINTER_SIZE 8
#define QT_REDUCE_RELOCATIONS

// Compiler sub-arch support
#define QT_COMPILER_SUPPORTS_SSE2 1
#define QT_COMPILER_SUPPORTS_SSE3 1
#define QT_COMPILER_SUPPORTS_SSSE3 1
#define QT_COMPILER_SUPPORTS_SSE4_1 1
#define QT_COMPILER_SUPPORTS_SSE4_2 1
#define QT_COMPILER_SUPPORTS_AVX 1
#define QT_COMPILER_SUPPORTS_AVX2 1

#ifndef QT_BOOTSTRAPPED

#if defined(QT_BUILTIN_GIF_READER) && defined(QT_NO_BUILTIN_GIF_READER)
# undef QT_BUILTIN_GIF_READER
#elif !defined(QT_BUILTIN_GIF_READER) && !defined(QT_NO_BUILTIN_GIF_READER)
# define QT_BUILTIN_GIF_READER 1
#endif

#if defined(QT_LINKED_OPENSSL) && defined(QT_NO_LINKED_OPENSSL)
# undef QT_LINKED_OPENSSL
#elif !defined(QT_LINKED_OPENSSL) && !defined(QT_NO_LINKED_OPENSSL)
# define QT_LINKED_OPENSSL
#endif

#if defined(QT_NO_ALSA) && defined(QT_ALSA)
# undef QT_NO_ALSA
#elif !defined(QT_NO_ALSA) && !defined(QT_ALSA)
# define QT_NO_ALSA
#endif

#if defined(QT_NO_CUPS) && defined(QT_CUPS)
# undef QT_NO_CUPS
#elif !defined(QT_NO_CUPS) && !defined(QT_CUPS)
# define QT_NO_CUPS
#endif

#if defined(QT_NO_DBUS) && defined(QT_DBUS)
# undef QT_NO_DBUS
#elif !defined(QT_NO_DBUS) && !defined(QT_DBUS)
# define QT_NO_DBUS
#endif

#if defined(QT_NO_EGL) && defined(QT_EGL)
# undef QT_NO_EGL
#elif !defined(QT_NO_EGL) && !defined(QT_EGL)
# define QT_NO_EGL
#endif

#if defined(QT_NO_EGLFS) && defined(QT_EGLFS)
# undef QT_NO_EGLFS
#elif !defined(QT_NO_EGLFS) && !defined(QT_EGLFS)
# define QT_NO_EGLFS
#endif

#if defined(QT_NO_EGL_X11) && defined(QT_EGL_X11)
# undef QT_NO_EGL_X11
#elif !defined(QT_NO_EGL_X11) && !defined(QT_EGL_X11)
# define QT_NO_EGL_X11
#endif

#if defined(QT_NO_EVDEV) && defined(QT_EVDEV)
# undef QT_NO_EVDEV
#elif !defined(QT_NO_EVDEV) && !defined(QT_EVDEV)
# define QT_NO_EVDEV
#endif

#if defined(QT_NO_GLIB) && defined(QT_GLIB)
# undef QT_NO_GLIB
#elif !defined(QT_NO_GLIB) && !defined(QT_GLIB)
# define QT_NO_GLIB
#endif

#if defined(QT_NO_LIBPROXY) && defined(QT_LIBPROXY)
# undef QT_NO_LIBPROXY
#elif !defined(QT_NO_LIBPROXY) && !defined(QT_LIBPROXY)
# define QT_NO_LIBPROXY
#endif

#if defined(QT_NO_OPENGL) && defined(QT_OPENGL)
# undef QT_NO_OPENGL
#elif !defined(QT_NO_OPENGL) && !defined(QT_OPENGL)
# define QT_NO_OPENGL
#endif

#if defined(QT_NO_OPENVG) && defined(QT_OPENVG)
# undef QT_NO_OPENVG
#elif !defined(QT_NO_OPENVG) && !defined(QT_OPENVG)
# define QT_NO_OPENVG
#endif

#if defined(QT_NO_PRINTPREVIEWWIDGET) && defined(QT_PRINTPREVIEWWIDGET)
# undef QT_NO_PRINTPREVIEWWIDGET
#elif !defined(QT_NO_PRINTPREVIEWWIDGET) && !defined(QT_PRINTPREVIEWWIDGET)
# define QT_NO_PRINTPREVIEWWIDGET
#endif

#if defined(QT_NO_PULSEAUDIO) && defined(QT_PULSEAUDIO)
# undef QT_NO_PULSEAUDIO
#elif !defined(QT_NO_PULSEAUDIO) && !defined(QT_PULSEAUDIO)
# define QT_NO_PULSEAUDIO
#endif

#if defined(QT_NO_QML_DEBUGGER) && defined(QT_QML_DEBUGGER)
# undef QT_NO_QML_DEBUGGER
#elif !defined(QT_NO_QML_DEBUGGER) && !defined(QT_QML_DEBUGGER)
# define QT_NO_QML_DEBUGGER
#endif

#if defined(QT_NO_SESSIONMANAGER) && defined(QT_SESSIONMANAGER)
# undef QT_NO_SESSIONMANAGER
#elif !defined(QT_NO_SESSIONMANAGER) && !defined(QT_SESSIONMANAGER)
# define QT_NO_SESSIONMANAGER
#endif

#if defined(QT_NO_STYLE_GTK) && defined(QT_STYLE_GTK)
# undef QT_NO_STYLE_GTK
#elif !defined(QT_NO_STYLE_GTK) && !defined(QT_STYLE_GTK)
# define QT_NO_STYLE_GTK
#endif

#if defined(QT_NO_TABLET) && defined(QT_TABLET)
# undef QT_NO_TABLET
#elif !defined(QT_NO_TABLET) && !defined(QT_TABLET)
# define QT_NO_TABLET
#endif

#if defined(QT_NO_TSLIB) && defined(QT_TSLIB)
# undef QT_NO_TSLIB
#elif !defined(QT_NO_TSLIB) && !defined(QT_TSLIB)
# define QT_NO_TSLIB
#endif

#if defined(QT_NO_XINERAMA) && defined(QT_XINERAMA)
# undef QT_NO_XINERAMA
#elif !defined(QT_NO_XINERAMA) && !defined(QT_XINERAMA)
# define QT_NO_XINERAMA
#endif

#if defined(QT_NO_XINPUT) && defined(QT_XINPUT)
# undef QT_NO_XINPUT
#elif !defined(QT_NO_XINPUT) && !defined(QT_XINPUT)
# define QT_NO_XINPUT
#endif

#if defined(QT_NO_XKB) && defined(QT_XKB)
# undef QT_NO_XKB
#elif !defined(QT_NO_XKB) && !defined(QT_XKB)
# define QT_NO_XKB
#endif

#if defined(QT_RUNTIME_XCURSOR) && defined(QT_NO_RUNTIME_XCURSOR)
# undef QT_RUNTIME_XCURSOR
#elif !defined(QT_RUNTIME_XCURSOR) && !defined(QT_NO_RUNTIME_XCURSOR)
# define QT_RUNTIME_XCURSOR
#endif

#if defined(QT_RUNTIME_XFIXES) && defined(QT_NO_RUNTIME_XFIXES)
# undef QT_RUNTIME_XFIXES
#elif !defined(QT_RUNTIME_XFIXES) && !defined(QT_NO_RUNTIME_XFIXES)
# define QT_RUNTIME_XFIXES
#endif

#if defined(QT_RUNTIME_XRANDR) && defined(QT_NO_RUNTIME_XRANDR)
# undef QT_RUNTIME_XRANDR
#elif !defined(QT_RUNTIME_XRANDR) && !defined(QT_NO_RUNTIME_XRANDR)
# define QT_RUNTIME_XRANDR
#endif

#endif // QT_BOOTSTRAPPED

#define QT_VISIBILITY_AVAILABLE

#define QT_QPA_DEFAULT_PLATFORM_NAME "phantom"
