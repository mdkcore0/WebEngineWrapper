#include "webenginewrapper.h"

#include <qqml.h>
#include <QtWebEngine/qtwebengineglobal.h>

void WebEngineWrapper::initialize()
{
    QtWebEngine::initialize();
}

void WebEngineWrapperPlugin::registerTypes(const char *uri) {
    Q_UNUSED(uri);

    qmlRegisterType<WebEngineWrapper>("WebEngineWrapper", 1, 0,
            "WebEngineWrapper");
}
