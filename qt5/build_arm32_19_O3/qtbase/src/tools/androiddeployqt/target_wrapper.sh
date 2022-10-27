#!/bin/sh
LD_LIBRARY_PATH=/home/dsr/Projects/qt5/build_arm32_19_O3/qtbase/lib${LD_LIBRARY_PATH:+:$LD_LIBRARY_PATH}
export LD_LIBRARY_PATH
QT_PLUGIN_PATH=/home/dsr/Projects/qt5/build_arm32_19_O3/qtbase/plugins${QT_PLUGIN_PATH:+:$QT_PLUGIN_PATH}
export QT_PLUGIN_PATH
exec /home/dsr/Projects/qt5/build_arm32_19_O3/qtbase/bin/androiddeployqt "$@"
