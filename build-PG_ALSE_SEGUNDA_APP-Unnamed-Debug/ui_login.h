/********************************************************************************
** Form generated from reading UI file 'login.ui'
**
** Created by: Qt User Interface Compiler version 5.9.5
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LOGIN_H
#define UI_LOGIN_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_LOGIN
{
public:
    QPushButton *BOTON_LOGIN2;
    QGroupBox *groupBox_3;
    QLineEdit *passw_line;
    QGroupBox *groupBox;
    QLineEdit *user_line;

    void setupUi(QWidget *LOGIN)
    {
        if (LOGIN->objectName().isEmpty())
            LOGIN->setObjectName(QStringLiteral("LOGIN"));
        LOGIN->setWindowModality(Qt::ApplicationModal);
        LOGIN->resize(520, 300);
        LOGIN->setMinimumSize(QSize(520, 300));
        LOGIN->setMaximumSize(QSize(520, 300));
        BOTON_LOGIN2 = new QPushButton(LOGIN);
        BOTON_LOGIN2->setObjectName(QStringLiteral("BOTON_LOGIN2"));
        BOTON_LOGIN2->setGeometry(QRect(220, 200, 88, 34));
        groupBox_3 = new QGroupBox(LOGIN);
        groupBox_3->setObjectName(QStringLiteral("groupBox_3"));
        groupBox_3->setGeometry(QRect(80, 130, 351, 61));
        passw_line = new QLineEdit(groupBox_3);
        passw_line->setObjectName(QStringLiteral("passw_line"));
        passw_line->setGeometry(QRect(10, 20, 331, 32));
        passw_line->setEchoMode(QLineEdit::Password);
        groupBox = new QGroupBox(LOGIN);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        groupBox->setGeometry(QRect(80, 50, 351, 61));
        user_line = new QLineEdit(groupBox);
        user_line->setObjectName(QStringLiteral("user_line"));
        user_line->setGeometry(QRect(10, 20, 331, 32));

        retranslateUi(LOGIN);

        QMetaObject::connectSlotsByName(LOGIN);
    } // setupUi

    void retranslateUi(QWidget *LOGIN)
    {
        LOGIN->setWindowTitle(QApplication::translate("LOGIN", "Form", Q_NULLPTR));
        BOTON_LOGIN2->setText(QApplication::translate("LOGIN", "LOGIN", Q_NULLPTR));
        groupBox_3->setTitle(QApplication::translate("LOGIN", "PASSWORD", Q_NULLPTR));
        groupBox->setTitle(QApplication::translate("LOGIN", "USER", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class LOGIN: public Ui_LOGIN {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LOGIN_H
