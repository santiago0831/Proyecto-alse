/********************************************************************************
** Form generated from reading UI file 'register.ui'
**
** Created by: Qt User Interface Compiler version 5.9.5
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_REGISTER_H
#define UI_REGISTER_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_REGISTER
{
public:
    QLabel *label;
    QLabel *label_2;
    QLineEdit *create_user;
    QLineEdit *create_passw;
    QLabel *label_3;
    QLineEdit *cnf_passw;
    QPushButton *BOTON_REGI2;

    void setupUi(QWidget *REGISTER)
    {
        if (REGISTER->objectName().isEmpty())
            REGISTER->setObjectName(QStringLiteral("REGISTER"));
        REGISTER->setWindowModality(Qt::ApplicationModal);
        REGISTER->resize(460, 270);
        REGISTER->setMinimumSize(QSize(460, 270));
        REGISTER->setMaximumSize(QSize(460, 270));
        label = new QLabel(REGISTER);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(60, 50, 91, 18));
        label_2 = new QLabel(REGISTER);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(60, 100, 121, 18));
        create_user = new QLineEdit(REGISTER);
        create_user->setObjectName(QStringLiteral("create_user"));
        create_user->setGeometry(QRect(160, 40, 221, 32));
        create_passw = new QLineEdit(REGISTER);
        create_passw->setObjectName(QStringLiteral("create_passw"));
        create_passw->setGeometry(QRect(200, 90, 181, 32));
        create_passw->setEchoMode(QLineEdit::Password);
        label_3 = new QLabel(REGISTER);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(60, 150, 131, 18));
        cnf_passw = new QLineEdit(REGISTER);
        cnf_passw->setObjectName(QStringLiteral("cnf_passw"));
        cnf_passw->setGeometry(QRect(200, 140, 181, 32));
        cnf_passw->setEchoMode(QLineEdit::Password);
        BOTON_REGI2 = new QPushButton(REGISTER);
        BOTON_REGI2->setObjectName(QStringLiteral("BOTON_REGI2"));
        BOTON_REGI2->setGeometry(QRect(190, 200, 88, 34));

        retranslateUi(REGISTER);

        QMetaObject::connectSlotsByName(REGISTER);
    } // setupUi

    void retranslateUi(QWidget *REGISTER)
    {
        REGISTER->setWindowTitle(QApplication::translate("REGISTER", "Form", Q_NULLPTR));
        label->setText(QApplication::translate("REGISTER", "CREATE USER", Q_NULLPTR));
        label_2->setText(QApplication::translate("REGISTER", "CREATE PASSWORD", Q_NULLPTR));
        label_3->setText(QApplication::translate("REGISTER", "CONFIRM PASSWORD", Q_NULLPTR));
        BOTON_REGI2->setText(QApplication::translate("REGISTER", "REGISTER", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class REGISTER: public Ui_REGISTER {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_REGISTER_H
