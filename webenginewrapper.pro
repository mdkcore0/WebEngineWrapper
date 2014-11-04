QT += qml quick webengine
TEMPLATE = lib

HEADERS = webenginewrapper.h
SOURCES = webenginewrapper.cpp

CONFIG += plugin c++11

DESTDIR = WebEngineWrapper
TARGET = webenginewrapper

QMAKE_POST_LINK = $$QMAKE_COPY $$PWD/qmldir $$OUT_PWD/$$DESTDIR
