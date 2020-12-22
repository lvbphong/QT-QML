#include <QGuiApplication>
#include <QQmlApplicationEngine>
#include "myperson.h"
#include <QQmlContext>


//Style:
//->Material
//->Imagine
//->Univesal
//->Fusion

int main(int argc, char *argv[])
{
    QCoreApplication::setAttribute(Qt::AA_EnableHighDpiScaling);

    QQuickStyle::setStyle("Material");

    QGuiApplication app(argc, argv);

    QQmlApplicationEngine engine;

    QObjectList people;
    people.append(new MyPerson("Jay", 20));
    people.append(new MyPerson("Jily", 25));
    people.append(new MyPerson("Jax", 24));
    people.append(new MyPerson("Lee", 30));
    people.append(new MyPerson("Min", 45));
    people.append(new MyPerson("Tee", 20));

    engine.rootContext()->setContextProperty("people", QVariant::fromValue(people));

    const QUrl url(QStringLiteral("qrc:/main.qml"));
    QObject::connect(&engine, &QQmlApplicationEngine::objectCreated,
                     &app, [url](QObject *obj, const QUrl &objUrl) {
        if (!obj && url == objUrl)
            QCoreApplication::exit(-1);
    }, Qt::QueuedConnection);
    engine.load(url);

    return app.exec();
}
