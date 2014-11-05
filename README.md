WebEngineWrapper
================

Simple Qt WebEngine wrapper for use on PyQt5/QML

As PyQt5 doesn't have bindings for [QtWebEngine]
(http://qt-project.org/wiki/QtWebEngine) yet (last tested on PyQt version
*5.4-snapshot-837edec02d98*), and we need to initialize its OpenGL resource
sharing on the main() function, I've done this simple wrapper to ease this task.

You'll only need it on this condition: Developing a PyQt5 application **AND**
want to use WebEngineView on QML (at least until QtWebEngine get exposed to
python by PyQt).


Requirements
------------

- Qt 5.4 (tested with the beta version);
- python (2.7.8);
- sip (4.16.2);
- PyQt (5.4-snapshot-837edec02d98, but should work on 5.3.2 as well);
- any addition requirements for the above tools/libraries.


Building
--------

Simple run on the repository root folder:
```
$ mkdir build; cd build
$ qmake .. && make
```

If you're on a mac machine, you will need to add *QMAKE_MAC_SDK* on the qmake
command, something like this, according to your Mac SDK version:
```
$ qmake QMAKE_MAC_SDK=macosx10.10 ../
```


Example
------

Just run on the repo root, after building the plugin:
```
$ export QML2_IMPORT_PATH=$PWD/build/
$ cd example; python app.py
```

The *QML2_IMPORT_PATH* environment variable is needed to proper locate the
plugin. Meanwhile, you can edit the *qmldir* file and use [*pyqt5qmlplugin*]
(http://pyqt.sourceforge.net/Docs/PyQt5/qml.html#writing-python-plugins-for-qmlscene)
instead.


Final notes
----------

- You do not need this plugin when developing a pure Qt/C++ application;
- This plugin allows you to use the [WebEngineView]
(http://doc-snapshot.qt-project.org/qt5-5.4/qml-qtwebengine-webengineview.html)
QML component together with a PyQt5 application. See how it is achieved on the
'example' folder;
- Based on the 'quicknanobrowser' example from Qt5.4 source
(*qt-everywhere-opensource-src-5.4.0-beta/qtwebengine/examples/webengine/quicknanobrowser*).
