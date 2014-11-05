import QtQuick 2.4
import QtWebEngine 1.0

import WebEngineWrapper 1.0

Item {
    // initialize the OpenGL resource sharing, as required
    WebEngineWrapper {
        Component.onCompleted: initialize()
    }

    WebEngineView {
        anchors.fill: parent
        url: "https://www.google.com/maps"
    }
}
