/********************************************************************************
** Form generated from reading UI file 'start.ui'
**
** Created by: Qt User Interface Compiler version 5.9.5
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_START_H
#define UI_START_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_START
{
public:
    QWidget *centralWidget;
    QPushButton *BOTON_LOGIN;
    QPushButton *BOTON_REGI;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *START)
    {
        if (START->objectName().isEmpty())
            START->setObjectName(QStringLiteral("START"));
        START->setWindowModality(Qt::WindowModal);
        START->resize(250, 250);
        START->setMinimumSize(QSize(250, 250));
        START->setMaximumSize(QSize(250, 250));
        centralWidget = new QWidget(START);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        BOTON_LOGIN = new QPushButton(centralWidget);
        BOTON_LOGIN->setObjectName(QStringLiteral("BOTON_LOGIN"));
        BOTON_LOGIN->setGeometry(QRect(80, 50, 88, 34));
        BOTON_REGI = new QPushButton(centralWidget);
        BOTON_REGI->setObjectName(QStringLiteral("BOTON_REGI"));
        BOTON_REGI->setGeometry(QRect(80, 100, 88, 34));
        START->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(START);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 250, 30));
        START->setMenuBar(menuBar);
        mainToolBar = new QToolBar(START);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        START->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(START);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        START->setStatusBar(statusBar);

        retranslateUi(START);

        QMetaObject::connectSlotsByName(START);
    } // setupUi

    void retranslateUi(QMainWindow *START)
    {
        START->setWindowTitle(QApplication::translate("START", "START", Q_NULLPTR));
        BOTON_LOGIN->setText(QApplication::translate("START", "LOGIN", Q_NULLPTR));
        BOTON_REGI->setText(QApplication::translate("START", "REGISTER", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class START: public Ui_START {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_START_H
