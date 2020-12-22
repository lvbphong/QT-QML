#include <QDebug>
#include <QGuiApplication>
#include <QQmlApplicationEngine>
#include <QPushButton>

int main(int argc, char *argv[])
{
    QCoreApplication::setAttribute(Qt::AA_EnableHighDpiScaling);

    QGuiApplication app(argc, argv);

    QQmlApplicationEngine engine;
    const QUrl url(QStringLiteral("qrc:/main.qml"));
    QObject::connect(&engine, &QQmlApplicationEngine::objectCreated,
                     &app, [url](QObject *obj, const QUrl &objUrl) {
        if (!obj && url == objUrl)
            QCoreApplication::exit(-1);
    }, Qt::QueuedConnection);
    engine.load(url);

    QObject* root = engine.rootObjects()[0];
    QPushButton* ok = (QPushButton*)root->findChild<QObject*>("button_ok");

    ok->setProperty("text", "dmm");

    return app.exec();
}
