#!/bin/sh
QT_VERSION=5.12.2
export QT_VERSION
QT_VER=5.12
export QT_VER
QT_VERSION_TAG=5122
export QT_VERSION_TAG
QT_INSTALL_DOCS=/home/dsr/Projects/qt5/qtbase/doc
export QT_INSTALL_DOCS
BUILDDIR=/home/dsr/Projects/qt5/build_arm32_19_O3/qtbase/src/opengl
export BUILDDIR
exec /home/dsr/Projects/qt5/build_arm32_19_O3/qtbase/bin/qdoc "$@"
