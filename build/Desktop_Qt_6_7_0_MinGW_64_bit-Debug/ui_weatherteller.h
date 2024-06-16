/********************************************************************************
** Form generated from reading UI file 'weatherteller.ui'
**
** Created by: Qt User Interface Compiler version 6.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WEATHERTELLER_H
#define UI_WEATHERTELLER_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QScrollArea>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_WeatherTeller
{
public:
    QVBoxLayout *verticalLayout;
    QFrame *header;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer;
    QLineEdit *cityName;
    QPushButton *refresh;
    QSpacerItem *horizontalSpacer_3;
    QScrollArea *scrollArea;
    QWidget *scrollAreaContents;
    QVBoxLayout *verticalLayout_5;
    QFrame *first_block;
    QGridLayout *gridLayout;
    QSpacerItem *verticalSpacer;
    QFrame *firs_inner;
    QGridLayout *gridLayout_3;
    QFrame *frame;
    QHBoxLayout *horizontalLayout_6;
    QSpacerItem *horizontalSpacer_19;
    QLabel *celsius;
    QSpacerItem *horizontalSpacer_18;
    QFrame *frame_2;
    QHBoxLayout *horizontalLayout_7;
    QSpacerItem *horizontalSpacer_15;
    QLabel *clearity;
    QSpacerItem *horizontalSpacer_14;
    QFrame *frame_10;
    QHBoxLayout *horizontalLayout_8;
    QSpacerItem *horizontalSpacer_17;
    QLabel *airq;
    QSpacerItem *horizontalSpacer_16;
    QSpacerItem *horizontalSpacer_4;
    QSpacerItem *horizontalSpacer_5;
    QSpacerItem *verticalSpacer_2;
    QFrame *frame_3;
    QVBoxLayout *verticalLayout_2;
    QLabel *label_4;
    QFrame *frame_4;
    QHBoxLayout *horizontalLayout_2;
    QLabel *firstImage;
    QLabel *label_5;
    QSpacerItem *horizontalSpacer_6;
    QLabel *firstMinMax;
    QFrame *frame_5;
    QHBoxLayout *horizontalLayout_3;
    QLabel *secondImage;
    QLabel *label_7;
    QSpacerItem *horizontalSpacer_7;
    QLabel *secondMinMax;
    QFrame *frame_6;
    QHBoxLayout *horizontalLayout_4;
    QLabel *thirdImage;
    QLabel *label_9;
    QSpacerItem *horizontalSpacer_8;
    QLabel *thirdMinMax;
    QFrame *frame_7;
    QHBoxLayout *horizontalLayout_5;
    QFrame *frame_8;
    QVBoxLayout *verticalLayout_4;
    QLabel *windDirection;
    QLabel *windSpeed;
    QFrame *frame_9;
    QGridLayout *gridLayout_2;
    QLabel *label_13;
    QSpacerItem *horizontalSpacer_9;
    QLabel *humidity;
    QLabel *label_14;
    QSpacerItem *horizontalSpacer_10;
    QLabel *feelsLike;
    QLabel *label_15;
    QSpacerItem *horizontalSpacer_11;
    QLabel *uv;
    QSpacerItem *horizontalSpacer_12;
    QLabel *label_16;
    QLabel *pressure;

    void setupUi(QWidget *WeatherTeller)
    {
        if (WeatherTeller->objectName().isEmpty())
            WeatherTeller->setObjectName("WeatherTeller");
        WeatherTeller->resize(484, 742);
        verticalLayout = new QVBoxLayout(WeatherTeller);
        verticalLayout->setObjectName("verticalLayout");
        header = new QFrame(WeatherTeller);
        header->setObjectName("header");
        header->setFrameShape(QFrame::StyledPanel);
        header->setFrameShadow(QFrame::Raised);
        horizontalLayout = new QHBoxLayout(header);
        horizontalLayout->setObjectName("horizontalLayout");
        horizontalSpacer = new QSpacerItem(113, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        cityName = new QLineEdit(header);
        cityName->setObjectName("cityName");

        horizontalLayout->addWidget(cityName);

        refresh = new QPushButton(header);
        refresh->setObjectName("refresh");

        horizontalLayout->addWidget(refresh);

        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_3);


        verticalLayout->addWidget(header);

        scrollArea = new QScrollArea(WeatherTeller);
        scrollArea->setObjectName("scrollArea");
        scrollArea->setFrameShape(QFrame::NoFrame);
        scrollArea->setFrameShadow(QFrame::Plain);
        scrollArea->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        scrollArea->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        scrollArea->setWidgetResizable(true);
        scrollAreaContents = new QWidget();
        scrollAreaContents->setObjectName("scrollAreaContents");
        scrollAreaContents->setGeometry(QRect(0, -146, 466, 820));
        verticalLayout_5 = new QVBoxLayout(scrollAreaContents);
        verticalLayout_5->setObjectName("verticalLayout_5");
        first_block = new QFrame(scrollAreaContents);
        first_block->setObjectName("first_block");
        first_block->setMinimumSize(QSize(0, 400));
        gridLayout = new QGridLayout(first_block);
        gridLayout->setObjectName("gridLayout");
        verticalSpacer = new QSpacerItem(20, 68, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        gridLayout->addItem(verticalSpacer, 2, 1, 1, 1);

        firs_inner = new QFrame(first_block);
        firs_inner->setObjectName("firs_inner");
        firs_inner->setFrameShape(QFrame::StyledPanel);
        firs_inner->setFrameShadow(QFrame::Raised);
        gridLayout_3 = new QGridLayout(firs_inner);
        gridLayout_3->setObjectName("gridLayout_3");
        frame = new QFrame(firs_inner);
        frame->setObjectName("frame");
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Raised);
        horizontalLayout_6 = new QHBoxLayout(frame);
        horizontalLayout_6->setObjectName("horizontalLayout_6");
        horizontalSpacer_19 = new QSpacerItem(13, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout_6->addItem(horizontalSpacer_19);

        celsius = new QLabel(frame);
        celsius->setObjectName("celsius");
        QFont font;
        font.setPointSize(30);
        font.setBold(true);
        font.setKerning(true);
        celsius->setFont(font);

        horizontalLayout_6->addWidget(celsius);

        horizontalSpacer_18 = new QSpacerItem(13, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout_6->addItem(horizontalSpacer_18);


        gridLayout_3->addWidget(frame, 0, 0, 1, 1);

        frame_2 = new QFrame(firs_inner);
        frame_2->setObjectName("frame_2");
        frame_2->setFrameShape(QFrame::StyledPanel);
        frame_2->setFrameShadow(QFrame::Raised);
        horizontalLayout_7 = new QHBoxLayout(frame_2);
        horizontalLayout_7->setObjectName("horizontalLayout_7");
        horizontalSpacer_15 = new QSpacerItem(26, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout_7->addItem(horizontalSpacer_15);

        clearity = new QLabel(frame_2);
        clearity->setObjectName("clearity");
        QFont font1;
        font1.setPointSize(16);
        clearity->setFont(font1);

        horizontalLayout_7->addWidget(clearity);

        horizontalSpacer_14 = new QSpacerItem(25, 25, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout_7->addItem(horizontalSpacer_14);


        gridLayout_3->addWidget(frame_2, 1, 0, 1, 1);

        frame_10 = new QFrame(firs_inner);
        frame_10->setObjectName("frame_10");
        frame_10->setFrameShape(QFrame::StyledPanel);
        frame_10->setFrameShadow(QFrame::Raised);
        horizontalLayout_8 = new QHBoxLayout(frame_10);
        horizontalLayout_8->setObjectName("horizontalLayout_8");
        horizontalSpacer_17 = new QSpacerItem(3, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout_8->addItem(horizontalSpacer_17);

        airq = new QLabel(frame_10);
        airq->setObjectName("airq");
        airq->setFont(font1);

        horizontalLayout_8->addWidget(airq);

        horizontalSpacer_16 = new QSpacerItem(3, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout_8->addItem(horizontalSpacer_16);


        gridLayout_3->addWidget(frame_10, 2, 0, 1, 1);


        gridLayout->addWidget(firs_inner, 1, 1, 1, 1);

        horizontalSpacer_4 = new QSpacerItem(150, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        gridLayout->addItem(horizontalSpacer_4, 1, 0, 1, 1);

        horizontalSpacer_5 = new QSpacerItem(149, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        gridLayout->addItem(horizontalSpacer_5, 1, 2, 1, 1);

        verticalSpacer_2 = new QSpacerItem(20, 68, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        gridLayout->addItem(verticalSpacer_2, 0, 1, 1, 1);


        verticalLayout_5->addWidget(first_block);

        frame_3 = new QFrame(scrollAreaContents);
        frame_3->setObjectName("frame_3");
        verticalLayout_2 = new QVBoxLayout(frame_3);
        verticalLayout_2->setObjectName("verticalLayout_2");
        label_4 = new QLabel(frame_3);
        label_4->setObjectName("label_4");

        verticalLayout_2->addWidget(label_4);

        frame_4 = new QFrame(frame_3);
        frame_4->setObjectName("frame_4");
        frame_4->setFrameShape(QFrame::StyledPanel);
        frame_4->setFrameShadow(QFrame::Raised);
        horizontalLayout_2 = new QHBoxLayout(frame_4);
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        horizontalLayout_2->setContentsMargins(-1, 0, -1, 0);
        firstImage = new QLabel(frame_4);
        firstImage->setObjectName("firstImage");
        firstImage->setEnabled(true);
        firstImage->setMinimumSize(QSize(64, 64));
        firstImage->setBaseSize(QSize(64, 64));
        firstImage->setAlignment(Qt::AlignCenter);

        horizontalLayout_2->addWidget(firstImage);

        label_5 = new QLabel(frame_4);
        label_5->setObjectName("label_5");
        QFont font2;
        font2.setPointSize(12);
        label_5->setFont(font2);

        horizontalLayout_2->addWidget(label_5);

        horizontalSpacer_6 = new QSpacerItem(335, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_6);

        firstMinMax = new QLabel(frame_4);
        firstMinMax->setObjectName("firstMinMax");
        firstMinMax->setFont(font2);

        horizontalLayout_2->addWidget(firstMinMax);


        verticalLayout_2->addWidget(frame_4);

        frame_5 = new QFrame(frame_3);
        frame_5->setObjectName("frame_5");
        frame_5->setFrameShape(QFrame::StyledPanel);
        frame_5->setFrameShadow(QFrame::Raised);
        horizontalLayout_3 = new QHBoxLayout(frame_5);
        horizontalLayout_3->setObjectName("horizontalLayout_3");
        horizontalLayout_3->setContentsMargins(-1, 0, -1, 0);
        secondImage = new QLabel(frame_5);
        secondImage->setObjectName("secondImage");
        secondImage->setMinimumSize(QSize(64, 64));
        secondImage->setBaseSize(QSize(64, 64));
        secondImage->setAlignment(Qt::AlignCenter);

        horizontalLayout_3->addWidget(secondImage);

        label_7 = new QLabel(frame_5);
        label_7->setObjectName("label_7");
        label_7->setFont(font2);

        horizontalLayout_3->addWidget(label_7);

        horizontalSpacer_7 = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_7);

        secondMinMax = new QLabel(frame_5);
        secondMinMax->setObjectName("secondMinMax");
        secondMinMax->setFont(font2);

        horizontalLayout_3->addWidget(secondMinMax);


        verticalLayout_2->addWidget(frame_5);

        frame_6 = new QFrame(frame_3);
        frame_6->setObjectName("frame_6");
        frame_6->setFrameShape(QFrame::StyledPanel);
        frame_6->setFrameShadow(QFrame::Raised);
        horizontalLayout_4 = new QHBoxLayout(frame_6);
        horizontalLayout_4->setObjectName("horizontalLayout_4");
        horizontalLayout_4->setContentsMargins(-1, 0, -1, 0);
        thirdImage = new QLabel(frame_6);
        thirdImage->setObjectName("thirdImage");
        thirdImage->setMinimumSize(QSize(64, 64));
        thirdImage->setBaseSize(QSize(64, 64));
        thirdImage->setAlignment(Qt::AlignCenter);

        horizontalLayout_4->addWidget(thirdImage);

        label_9 = new QLabel(frame_6);
        label_9->setObjectName("label_9");
        label_9->setFont(font2);

        horizontalLayout_4->addWidget(label_9);

        horizontalSpacer_8 = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout_4->addItem(horizontalSpacer_8);

        thirdMinMax = new QLabel(frame_6);
        thirdMinMax->setObjectName("thirdMinMax");
        thirdMinMax->setFont(font2);

        horizontalLayout_4->addWidget(thirdMinMax);


        verticalLayout_2->addWidget(frame_6);


        verticalLayout_5->addWidget(frame_3);

        frame_7 = new QFrame(scrollAreaContents);
        frame_7->setObjectName("frame_7");
        frame_7->setFrameShape(QFrame::StyledPanel);
        frame_7->setFrameShadow(QFrame::Raised);
        horizontalLayout_5 = new QHBoxLayout(frame_7);
        horizontalLayout_5->setObjectName("horizontalLayout_5");
        frame_8 = new QFrame(frame_7);
        frame_8->setObjectName("frame_8");
        frame_8->setFrameShape(QFrame::StyledPanel);
        frame_8->setFrameShadow(QFrame::Raised);
        verticalLayout_4 = new QVBoxLayout(frame_8);
        verticalLayout_4->setObjectName("verticalLayout_4");
        windDirection = new QLabel(frame_8);
        windDirection->setObjectName("windDirection");
        windDirection->setFont(font1);

        verticalLayout_4->addWidget(windDirection);

        windSpeed = new QLabel(frame_8);
        windSpeed->setObjectName("windSpeed");
        windSpeed->setFont(font1);

        verticalLayout_4->addWidget(windSpeed);


        horizontalLayout_5->addWidget(frame_8);

        frame_9 = new QFrame(frame_7);
        frame_9->setObjectName("frame_9");
        frame_9->setFrameShape(QFrame::StyledPanel);
        frame_9->setFrameShadow(QFrame::Raised);
        gridLayout_2 = new QGridLayout(frame_9);
        gridLayout_2->setObjectName("gridLayout_2");
        label_13 = new QLabel(frame_9);
        label_13->setObjectName("label_13");

        gridLayout_2->addWidget(label_13, 0, 0, 1, 1);

        horizontalSpacer_9 = new QSpacerItem(159, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        gridLayout_2->addItem(horizontalSpacer_9, 0, 1, 1, 1);

        humidity = new QLabel(frame_9);
        humidity->setObjectName("humidity");

        gridLayout_2->addWidget(humidity, 0, 2, 1, 1);

        label_14 = new QLabel(frame_9);
        label_14->setObjectName("label_14");

        gridLayout_2->addWidget(label_14, 1, 0, 1, 1);

        horizontalSpacer_10 = new QSpacerItem(159, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        gridLayout_2->addItem(horizontalSpacer_10, 1, 1, 1, 1);

        feelsLike = new QLabel(frame_9);
        feelsLike->setObjectName("feelsLike");

        gridLayout_2->addWidget(feelsLike, 1, 2, 1, 1);

        label_15 = new QLabel(frame_9);
        label_15->setObjectName("label_15");

        gridLayout_2->addWidget(label_15, 2, 0, 2, 1);

        horizontalSpacer_11 = new QSpacerItem(159, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        gridLayout_2->addItem(horizontalSpacer_11, 2, 1, 1, 1);

        uv = new QLabel(frame_9);
        uv->setObjectName("uv");

        gridLayout_2->addWidget(uv, 2, 2, 2, 1);

        horizontalSpacer_12 = new QSpacerItem(159, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        gridLayout_2->addItem(horizontalSpacer_12, 3, 1, 2, 1);

        label_16 = new QLabel(frame_9);
        label_16->setObjectName("label_16");

        gridLayout_2->addWidget(label_16, 4, 0, 1, 1);

        pressure = new QLabel(frame_9);
        pressure->setObjectName("pressure");

        gridLayout_2->addWidget(pressure, 4, 2, 1, 1);


        horizontalLayout_5->addWidget(frame_9);


        verticalLayout_5->addWidget(frame_7);

        scrollArea->setWidget(scrollAreaContents);

        verticalLayout->addWidget(scrollArea);


        retranslateUi(WeatherTeller);

        QMetaObject::connectSlotsByName(WeatherTeller);
    } // setupUi

    void retranslateUi(QWidget *WeatherTeller)
    {
        WeatherTeller->setWindowTitle(QCoreApplication::translate("WeatherTeller", "WeatherTeller", nullptr));
        cityName->setText(QCoreApplication::translate("WeatherTeller", "wich city?", nullptr));
        refresh->setText(QCoreApplication::translate("WeatherTeller", "refresh", nullptr));
        celsius->setText(QCoreApplication::translate("WeatherTeller", "20C", nullptr));
        clearity->setText(QCoreApplication::translate("WeatherTeller", "clear", nullptr));
        airq->setText(QCoreApplication::translate("WeatherTeller", "moderate", nullptr));
        label_4->setText(QCoreApplication::translate("WeatherTeller", "2 day forecast", nullptr));
        firstImage->setText(QCoreApplication::translate("WeatherTeller", "photo", nullptr));
        label_5->setText(QCoreApplication::translate("WeatherTeller", "today", nullptr));
        firstMinMax->setText(QCoreApplication::translate("WeatherTeller", "temp", nullptr));
        secondImage->setText(QCoreApplication::translate("WeatherTeller", "photo", nullptr));
        label_7->setText(QCoreApplication::translate("WeatherTeller", "tomorrow", nullptr));
        secondMinMax->setText(QCoreApplication::translate("WeatherTeller", "temp", nullptr));
        thirdImage->setText(QCoreApplication::translate("WeatherTeller", "photo", nullptr));
        label_9->setText(QCoreApplication::translate("WeatherTeller", "day after tommorow", nullptr));
        thirdMinMax->setText(QCoreApplication::translate("WeatherTeller", "temp", nullptr));
        windDirection->setText(QCoreApplication::translate("WeatherTeller", "direction: N", nullptr));
        windSpeed->setText(QCoreApplication::translate("WeatherTeller", "speed: ", nullptr));
        label_13->setText(QCoreApplication::translate("WeatherTeller", "Humidity", nullptr));
        humidity->setText(QCoreApplication::translate("WeatherTeller", "TextLabel", nullptr));
        label_14->setText(QCoreApplication::translate("WeatherTeller", "Real feel", nullptr));
        feelsLike->setText(QCoreApplication::translate("WeatherTeller", "TextLabel", nullptr));
        label_15->setText(QCoreApplication::translate("WeatherTeller", "UV", nullptr));
        uv->setText(QCoreApplication::translate("WeatherTeller", "TextLabel", nullptr));
        label_16->setText(QCoreApplication::translate("WeatherTeller", "Pressure", nullptr));
        pressure->setText(QCoreApplication::translate("WeatherTeller", "TextLabel", nullptr));
    } // retranslateUi

};

namespace Ui {
    class WeatherTeller: public Ui_WeatherTeller {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WEATHERTELLER_H
