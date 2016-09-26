
add_library(Qt5::PhantomIntegrationPlugin MODULE IMPORTED)

_populate_Gui_plugin_properties(PhantomIntegrationPlugin RELEASE "platforms/libqphantom.a")

list(APPEND Qt5Gui_PLUGINS Qt5::PhantomIntegrationPlugin)
