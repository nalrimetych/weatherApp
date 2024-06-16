#include "weatherteller.h"
#include "ui_weatherteller.h"


WeatherTeller::WeatherTeller(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::WeatherTeller)
{
    ui->setupUi(this);


    connect( ui->refresh, SIGNAL(clicked()), this, SLOT(lookUp()));
    lookUp();
}

void WeatherTeller::lookUp() {
    QString address = "https://api.weatherapi.com/v1/forecast.json?key=82390879580f4360b86104959240906&q=" + ui->cityName->text() + "&days=3&aqi=yes&alerts=yes";
    QUrl reqtarget(address);

    QNetworkRequest request(reqtarget);
    QNetworkReply *reply = manager.get(request);

    QObject::connect(reply, &QNetworkReply::finished, [=]() {
        if(reply->error() == QNetworkReply::NoError) {
            QByteArray response = reply->readAll();
            QJsonDocument jsonDoc = QJsonDocument::fromJson(response);

            if(!jsonDoc.isNull() && jsonDoc.isObject()) {


                QJsonObject jsonObj = jsonDoc.object();                       //jsondoc
                if(jsonObj.contains("error"))
                    return;
                QJsonObject locationObj = jsonObj["location"].toObject();     //    location
                QJsonObject currentObj = jsonObj["current"].toObject();       //    current
                QJsonObject conditionObj = currentObj["condition"].toObject();//        condition
                QJsonObject airqObj = currentObj["air_quality"].toObject();   //        air_quality

                QJsonObject forecastObj = jsonObj["forecast"].toObject();     //    forecast
                QJsonArray forecastArr = forecastObj["forecastday"].toArray();//       forecastday

                QJsonObject zeroObj = forecastArr[0].toObject();
                QJsonObject zeroInfoObj = zeroObj["day"].toObject();
                QJsonObject zeroCondObj = zeroInfoObj["condition"].toObject();

                QJsonObject oneObj = forecastArr[1].toObject();
                QJsonObject oneInfoObj = oneObj["day"].toObject();
                QJsonObject oneCondObj = oneInfoObj["condition"].toObject();

                QJsonObject twoObj = forecastArr[2].toObject();
                QJsonObject twoInfoObj = twoObj["day"].toObject();
                QJsonObject twoCondObj = twoInfoObj["condition"].toObject();

                QString newtitle = "weather in " + locationObj["region"].toString() + "/" + locationObj["name"].toString();
                this->setWindowTitle(newtitle);


                QString tempC = QString::number((int)currentObj["temp_c"].toDouble()) + "°C";
                ui->celsius->setText( tempC );


                ui->clearity->setText( conditionObj["text"].toString() );

                QString aqis[6]{"Good", "Moderate", "Unhealthy for sensitive groups", "Unhealthy", "Very unhealthy", "Hazardous"};
                QString qindexstr = "air quality: ";
                int qindex = (int)airqObj["us-epa-index"].toDouble();
                qindexstr += aqis[qindex-1];
                ui->airq->setText( qindexstr );


                QString imageUrl = "https:" + zeroCondObj["icon"].toString();
                downloadImage(imageUrl, ui->firstImage);
                QString minmax = QString::number((int)zeroInfoObj["maxtemp_c"].toDouble()) + "°" + " / " + QString::number((int)zeroInfoObj["mintemp_c"].toDouble()) + "°";
                ui->firstMinMax->setText( minmax );

                imageUrl = "https:" + oneCondObj["icon"].toString();
                downloadImage(imageUrl, ui->secondImage);
                minmax = QString::number((int)oneInfoObj["maxtemp_c"].toDouble()) + "°" + " / " + QString::number((int)oneInfoObj["mintemp_c"].toDouble()) + "°";
                ui->secondMinMax->setText( minmax );

                imageUrl = "https:" + twoCondObj["icon"].toString();
                downloadImage(imageUrl, ui->thirdImage);
                minmax = QString::number((int)twoInfoObj["maxtemp_c"].toDouble()) + "°" + " / " + QString::number((int)twoInfoObj["mintemp_c"].toDouble()) + "°";
                ui->thirdMinMax->setText( minmax );


                QString direction = "direction: " + currentObj["wind_dir"].toString();
                ui->windDirection->setText(direction);
                QString speed = "speed: " + QString::number(currentObj["wind_kph"].toDouble()) + "km/h";
                ui->windSpeed->setText(speed);


                QString temp = QString::number(currentObj["humidity"].toDouble()) + "%";
                ui->humidity->setText(temp);

                temp = QString::number((int)currentObj["feelslike_c"].toDouble()) + "°";
                ui->feelsLike->setText(temp);

                temp = QString::number(currentObj["uv"].toDouble());
                ui->uv->setText(temp);

                temp = QString::number(currentObj["pressure_mb"].toDouble()) + "mbar";
                ui->pressure->setText(temp);

            }
        }
        reply->deleteLater();
    });
}

void WeatherTeller::downloadImage(const QString &url, QLabel *label) {
    QNetworkRequest request;
    request.setUrl(QUrl(url));
    QNetworkReply *reply = manager.get(request);


    QObject::connect(reply, &QNetworkReply::finished, [=]() {
        if(reply->error() == QNetworkReply::NoError) {
            QByteArray data = reply->readAll();
            QFile file("176.png");
            if(file.open(QIODevice::WriteOnly)) {
                file.write(data);
                file.close();
                displayImage("176.png", label);
            } else
                qDebug() << "couldn't open file for writing";
        } else
            qDebug() << "download failed: " << reply->errorString();
        reply->deleteLater();
    });
}

void WeatherTeller::displayImage(const QString &filePath, QLabel *label) {
    QPixmap pixmap(filePath);
    if(!pixmap.isNull()) {
        label->setPixmap(pixmap);
        label->setScaledContents(true);
    } else
        qDebug() << "failed to load the image";
}

WeatherTeller::~WeatherTeller()
{
    delete ui;
}
