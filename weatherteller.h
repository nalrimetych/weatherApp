#ifndef WEATHERTELLER_H
#define WEATHERTELLER_H

#include <QWidget>
#include <QLabel>
#include <QtNetwork>
#include <QFile>
#include <string>

QT_BEGIN_NAMESPACE
namespace Ui {
class WeatherTeller;
}
QT_END_NAMESPACE

class WeatherTeller : public QWidget
{
    Q_OBJECT

public:
    WeatherTeller(QWidget *parent = nullptr);
    ~WeatherTeller();


    void downloadImage(const QString &url, QLabel *label);

public slots:
    void lookUp();

private:
    Ui::WeatherTeller *ui;

    QNetworkAccessManager manager;

    void  displayImage(const QString &filePath, QLabel *label);





};
#endif // WEATHERTELLER_H
