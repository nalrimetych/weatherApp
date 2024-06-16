#include "weatherteller.h"

#include <QApplication>

#include <QtNetwork>
#include <QJsonDocument>
#include <QJsonObject>
#include <QJsonArray>
#include <QDebug>


int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    WeatherTeller w;
    w.show();

    return a.exec();
}
