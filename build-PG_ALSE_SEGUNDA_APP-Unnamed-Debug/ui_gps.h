/********************************************************************************
** Form generated from reading UI file 'gps.ui'
**
** Created by: Qt User Interface Compiler version 5.9.5
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_GPS_H
#define UI_GPS_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_gps
{
public:
    QWidget *layoutWidget;
    QGridLayout *gridLayout_4;
    QSpacerItem *horizontalSpacer_7;
    QLabel *label_4;
    QSpacerItem *horizontalSpacer_8;
    QLineEdit *txt_Vel;
    QLineEdit *txt_Dir;
    QPushButton *Left_Button;
    QPushButton *Right_Button;
    QWidget *layoutWidget1;
    QGridLayout *gridLayout_3;
    QSpacerItem *horizontalSpacer;
    QLabel *label_3;
    QSpacerItem *horizontalSpacer_2;
    QHBoxLayout *horizontalLayout_3;
    QLineEdit *txt_Lat;
    QLineEdit *txt_Lon;
    QLineEdit *txt_Alt;
    QWidget *layoutWidget2;
    QGridLayout *gridLayout;
    QSpacerItem *horizontalSpacer_5;
    QLabel *label_2;
    QSpacerItem *horizontalSpacer_6;
    QLineEdit *txt_Preci;
    QWidget *layoutWidget3;
    QGridLayout *gridLayout_2;
    QSpacerItem *horizontalSpacer_3;
    QLabel *label;
    QSpacerItem *horizontalSpacer_4;
    QLineEdit *txt_Temp;
    QLineEdit *txt_Hum;
    QWidget *layoutWidget4;
    QGridLayout *gridLayout_6;
    QSpacerItem *horizontalSpacer_9;
    QLabel *label_5;
    QSpacerItem *horizontalSpacer_10;
    QGridLayout *gridLayout_5;
    QLineEdit *txt_Min;
    QLineEdit *txt_Hr;
    QLineEdit *line_status;
    QLabel *label_6;

    void setupUi(QWidget *gps)
    {
        if (gps->objectName().isEmpty())
            gps->setObjectName(QStringLiteral("gps"));
        gps->setWindowModality(Qt::ApplicationModal);
        gps->resize(470, 250);
        gps->setMinimumSize(QSize(470, 250));
        gps->setMaximumSize(QSize(470, 250));
        layoutWidget = new QWidget(gps);
        layoutWidget->setObjectName(QStringLiteral("layoutWidget"));
        layoutWidget->setGeometry(QRect(10, 140, 278, 60));
        gridLayout_4 = new QGridLayout(layoutWidget);
        gridLayout_4->setObjectName(QStringLiteral("gridLayout_4"));
        gridLayout_4->setContentsMargins(0, 0, 0, 0);
        horizontalSpacer_7 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_4->addItem(horizontalSpacer_7, 0, 0, 1, 1);

        label_4 = new QLabel(layoutWidget);
        label_4->setObjectName(QStringLiteral("label_4"));

        gridLayout_4->addWidget(label_4, 0, 1, 1, 2);

        horizontalSpacer_8 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_4->addItem(horizontalSpacer_8, 0, 3, 1, 1);

        txt_Vel = new QLineEdit(layoutWidget);
        txt_Vel->setObjectName(QStringLiteral("txt_Vel"));

        gridLayout_4->addWidget(txt_Vel, 1, 0, 1, 2);

        txt_Dir = new QLineEdit(layoutWidget);
        txt_Dir->setObjectName(QStringLiteral("txt_Dir"));

        gridLayout_4->addWidget(txt_Dir, 1, 2, 1, 2);

        Left_Button = new QPushButton(gps);
        Left_Button->setObjectName(QStringLiteral("Left_Button"));
        Left_Button->setGeometry(QRect(10, 210, 88, 34));
        Right_Button = new QPushButton(gps);
        Right_Button->setObjectName(QStringLiteral("Right_Button"));
        Right_Button->setGeometry(QRect(110, 210, 88, 34));
        layoutWidget1 = new QWidget(gps);
        layoutWidget1->setObjectName(QStringLiteral("layoutWidget1"));
        layoutWidget1->setGeometry(QRect(10, 70, 451, 62));
        gridLayout_3 = new QGridLayout(layoutWidget1);
        gridLayout_3->setObjectName(QStringLiteral("gridLayout_3"));
        gridLayout_3->setContentsMargins(0, 0, 0, 0);
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_3->addItem(horizontalSpacer, 0, 0, 1, 1);

        label_3 = new QLabel(layoutWidget1);
        label_3->setObjectName(QStringLiteral("label_3"));

        gridLayout_3->addWidget(label_3, 0, 1, 1, 1);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_3->addItem(horizontalSpacer_2, 0, 2, 1, 1);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        txt_Lat = new QLineEdit(layoutWidget1);
        txt_Lat->setObjectName(QStringLiteral("txt_Lat"));

        horizontalLayout_3->addWidget(txt_Lat);

        txt_Lon = new QLineEdit(layoutWidget1);
        txt_Lon->setObjectName(QStringLiteral("txt_Lon"));

        horizontalLayout_3->addWidget(txt_Lon);

        txt_Alt = new QLineEdit(layoutWidget1);
        txt_Alt->setObjectName(QStringLiteral("txt_Alt"));

        horizontalLayout_3->addWidget(txt_Alt);


        gridLayout_3->addLayout(horizontalLayout_3, 1, 0, 1, 3);

        layoutWidget2 = new QWidget(gps);
        layoutWidget2->setObjectName(QStringLiteral("layoutWidget2"));
        layoutWidget2->setGeometry(QRect(290, 10, 173, 60));
        gridLayout = new QGridLayout(layoutWidget2);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        gridLayout->setContentsMargins(0, 0, 0, 0);
        horizontalSpacer_5 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer_5, 0, 0, 1, 1);

        label_2 = new QLabel(layoutWidget2);
        label_2->setObjectName(QStringLiteral("label_2"));

        gridLayout->addWidget(label_2, 0, 1, 1, 1);

        horizontalSpacer_6 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer_6, 0, 2, 1, 1);

        txt_Preci = new QLineEdit(layoutWidget2);
        txt_Preci->setObjectName(QStringLiteral("txt_Preci"));

        gridLayout->addWidget(txt_Preci, 1, 0, 1, 3);

        layoutWidget3 = new QWidget(gps);
        layoutWidget3->setObjectName(QStringLiteral("layoutWidget3"));
        layoutWidget3->setGeometry(QRect(13, 10, 278, 60));
        gridLayout_2 = new QGridLayout(layoutWidget3);
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        gridLayout_2->setContentsMargins(0, 0, 0, 0);
        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_2->addItem(horizontalSpacer_3, 0, 0, 1, 1);

        label = new QLabel(layoutWidget3);
        label->setObjectName(QStringLiteral("label"));

        gridLayout_2->addWidget(label, 0, 1, 1, 2);

        horizontalSpacer_4 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_2->addItem(horizontalSpacer_4, 0, 3, 1, 1);

        txt_Temp = new QLineEdit(layoutWidget3);
        txt_Temp->setObjectName(QStringLiteral("txt_Temp"));

        gridLayout_2->addWidget(txt_Temp, 1, 0, 1, 2);

        txt_Hum = new QLineEdit(layoutWidget3);
        txt_Hum->setObjectName(QStringLiteral("txt_Hum"));

        gridLayout_2->addWidget(txt_Hum, 1, 2, 1, 2);

        layoutWidget4 = new QWidget(gps);
        layoutWidget4->setObjectName(QStringLiteral("layoutWidget4"));
        layoutWidget4->setGeometry(QRect(290, 140, 171, 61));
        gridLayout_6 = new QGridLayout(layoutWidget4);
        gridLayout_6->setObjectName(QStringLiteral("gridLayout_6"));
        gridLayout_6->setContentsMargins(0, 0, 0, 0);
        horizontalSpacer_9 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_6->addItem(horizontalSpacer_9, 0, 0, 1, 1);

        label_5 = new QLabel(layoutWidget4);
        label_5->setObjectName(QStringLiteral("label_5"));

        gridLayout_6->addWidget(label_5, 0, 1, 1, 1);

        horizontalSpacer_10 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_6->addItem(horizontalSpacer_10, 0, 2, 1, 1);

        gridLayout_5 = new QGridLayout();
        gridLayout_5->setObjectName(QStringLiteral("gridLayout_5"));
        txt_Min = new QLineEdit(layoutWidget4);
        txt_Min->setObjectName(QStringLiteral("txt_Min"));

        gridLayout_5->addWidget(txt_Min, 0, 1, 1, 1);

        txt_Hr = new QLineEdit(layoutWidget4);
        txt_Hr->setObjectName(QStringLiteral("txt_Hr"));

        gridLayout_5->addWidget(txt_Hr, 0, 0, 1, 1);


        gridLayout_6->addLayout(gridLayout_5, 1, 0, 1, 3);

        line_status = new QLineEdit(gps);
        line_status->setObjectName(QStringLiteral("line_status"));
        line_status->setGeometry(QRect(340, 210, 113, 32));
        label_6 = new QLabel(gps);
        label_6->setObjectName(QStringLiteral("label_6"));
        label_6->setGeometry(QRect(280, 220, 58, 18));

        retranslateUi(gps);

        QMetaObject::connectSlotsByName(gps);
    } // setupUi

    void retranslateUi(QWidget *gps)
    {
        gps->setWindowTitle(QApplication::translate("gps", "Form", Q_NULLPTR));
        label_4->setText(QApplication::translate("gps", "Viento", Q_NULLPTR));
        Left_Button->setText(QApplication::translate("gps", "Left", Q_NULLPTR));
        Right_Button->setText(QApplication::translate("gps", "Right", Q_NULLPTR));
        label_3->setText(QApplication::translate("gps", "GPS", Q_NULLPTR));
        label_2->setText(QApplication::translate("gps", "Precipitaci\303\263n", Q_NULLPTR));
        label->setText(QApplication::translate("gps", "Temperatura", Q_NULLPTR));
        label_5->setText(QApplication::translate("gps", "Horas-Minutos", Q_NULLPTR));
        label_6->setText(QApplication::translate("gps", "Status:", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class gps: public Ui_gps {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_GPS_H
