#ifndef __WEBENGINE_H__
#define __WEBENGINE_H__

#include <QtQuick/QQuickItem>
#include <QQmlExtensionPlugin>

class WebEngineWrapper : public QQuickItem
{
    Q_OBJECT
public:
    Q_INVOKABLE void initialize();
};

class WebEngineWrapperPlugin: public QQmlExtensionPlugin
{
    Q_OBJECT
    Q_PLUGIN_METADATA(IID "org.thecoreme.WebEngineWrapper")

public:
    void registerTypes(const char *uri);
};

#endif
