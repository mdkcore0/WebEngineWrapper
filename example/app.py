#!/usr/bin/env python
# -*- coding: UTF-8 -*-

import sys
import os

from PyQt5.QtWidgets import QApplication
from PyQt5.QtQuick import QQuickView
from PyQt5.QtCore import QUrl

if __name__ == '__main__':
    app = QApplication(sys.argv)

    view = QQuickView()
    view.resize(800, 600)
    view.setResizeMode(QQuickView.SizeRootObjectToView)

    view.setSource(QUrl.fromLocalFile(
        os.path.join(os.path.dirname(__file__), 'main.qml')))
    view.show()

    sys.exit(app.exec_())
