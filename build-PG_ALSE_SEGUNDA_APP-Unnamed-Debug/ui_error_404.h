/********************************************************************************
** Form generated from reading UI file 'error_404.ui'
**
** Created by: Qt User Interface Compiler version 5.9.5
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ERROR_404_H
#define UI_ERROR_404_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_error_404
{
public:
    QLabel *texto_1;
    QLabel *label_2;
    QPushButton *boton_back;

    void setupUi(QWidget *error_404)
    {
        if (error_404->objectName().isEmpty())
            error_404->setObjectName(QStringLiteral("error_404"));
        error_404->setWindowModality(Qt::ApplicationModal);
        error_404->resize(400, 250);
        error_404->setMinimumSize(QSize(400, 250));
        error_404->setMaximumSize(QSize(400, 250));
        texto_1 = new QLabel(error_404);
        texto_1->setObjectName(QStringLiteral("texto_1"));
        texto_1->setGeometry(QRect(40, 50, 321, 51));
        label_2 = new QLabel(error_404);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(40, 100, 331, 41));
        boton_back = new QPushButton(error_404);
        boton_back->setObjectName(QStringLiteral("boton_back"));
        boton_back->setGeometry(QRect(150, 160, 88, 34));

        retranslateUi(error_404);

        QMetaObject::connectSlotsByName(error_404);
    } // setupUi

    void retranslateUi(QWidget *error_404)
    {
        error_404->setWindowTitle(QApplication::translate("error_404", "Form", Q_NULLPTR));
        texto_1->setText(QApplication::translate("error_404", "El usuario ya existe o las contrase\303\261as no coinciden", Q_NULLPTR));
        label_2->setText(QApplication::translate("error_404", "The user already exist or the passwords don't match", Q_NULLPTR));
        boton_back->setText(QApplication::translate("error_404", "BACK", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class error_404: public Ui_error_404 {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ERROR_404_H
