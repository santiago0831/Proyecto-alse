/********************************************************************************
** Form generated from reading UI file 'datos_p.ui'
**
** Created by: Qt User Interface Compiler version 5.9.5
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DATOS_P_H
#define UI_DATOS_P_H

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

class Ui_datos_p
{
public:
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QLabel *label_4;
    QLabel *label_5;
    QLabel *label_6;
    QLabel *label_7;
    QLabel *label_8;
    QLineEdit *nombre;
    QLineEdit *apellido;
    QLineEdit *document_line;
    QLineEdit *day_line;
    QLineEdit *month_line;
    QLineEdit *year_line;
    QPushButton *boton_validar;

    void setupUi(QWidget *datos_p)
    {
        if (datos_p->objectName().isEmpty())
            datos_p->setObjectName(QStringLiteral("datos_p"));
        datos_p->setWindowModality(Qt::ApplicationModal);
        datos_p->resize(400, 350);
        datos_p->setMinimumSize(QSize(400, 350));
        datos_p->setMaximumSize(QSize(400, 350));
        label = new QLabel(datos_p);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(110, 30, 181, 18));
        label->setAutoFillBackground(false);
        label_2 = new QLabel(datos_p);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(10, 80, 101, 18));
        label_3 = new QLabel(datos_p);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(10, 120, 111, 18));
        label_4 = new QLabel(datos_p);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setGeometry(QRect(10, 160, 151, 18));
        label_5 = new QLabel(datos_p);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setGeometry(QRect(10, 220, 141, 18));
        label_6 = new QLabel(datos_p);
        label_6->setObjectName(QStringLiteral("label_6"));
        label_6->setGeometry(QRect(160, 200, 31, 18));
        label_7 = new QLabel(datos_p);
        label_7->setObjectName(QStringLiteral("label_7"));
        label_7->setGeometry(QRect(220, 200, 31, 18));
        label_8 = new QLabel(datos_p);
        label_8->setObjectName(QStringLiteral("label_8"));
        label_8->setGeometry(QRect(280, 200, 58, 18));
        nombre = new QLineEdit(datos_p);
        nombre->setObjectName(QStringLiteral("nombre"));
        nombre->setGeometry(QRect(120, 70, 231, 32));
        apellido = new QLineEdit(datos_p);
        apellido->setObjectName(QStringLiteral("apellido"));
        apellido->setGeometry(QRect(120, 110, 231, 32));
        document_line = new QLineEdit(datos_p);
        document_line->setObjectName(QStringLiteral("document_line"));
        document_line->setGeometry(QRect(160, 150, 191, 32));
        day_line = new QLineEdit(datos_p);
        day_line->setObjectName(QStringLiteral("day_line"));
        day_line->setGeometry(QRect(150, 220, 41, 32));
        day_line->setInputMethodHints(Qt::ImhNone);
        month_line = new QLineEdit(datos_p);
        month_line->setObjectName(QStringLiteral("month_line"));
        month_line->setGeometry(QRect(210, 220, 41, 32));
        month_line->setInputMethodHints(Qt::ImhNone);
        year_line = new QLineEdit(datos_p);
        year_line->setObjectName(QStringLiteral("year_line"));
        year_line->setGeometry(QRect(270, 220, 61, 32));
        year_line->setInputMethodHints(Qt::ImhNone);
        boton_validar = new QPushButton(datos_p);
        boton_validar->setObjectName(QStringLiteral("boton_validar"));
        boton_validar->setGeometry(QRect(150, 280, 88, 34));

        retranslateUi(datos_p);

        QMetaObject::connectSlotsByName(datos_p);
    } // setupUi

    void retranslateUi(QWidget *datos_p)
    {
        datos_p->setWindowTitle(QApplication::translate("datos_p", "Form", Q_NULLPTR));
        label->setText(QApplication::translate("datos_p", "Por favor ingerese sus datos", Q_NULLPTR));
        label_2->setText(QApplication::translate("datos_p", "Primer nombre:", Q_NULLPTR));
        label_3->setText(QApplication::translate("datos_p", "Primer apellido:", Q_NULLPTR));
        label_4->setText(QApplication::translate("datos_p", "N\303\272mero de documento:", Q_NULLPTR));
        label_5->setText(QApplication::translate("datos_p", "Fecha de nacimiento:", Q_NULLPTR));
        label_6->setText(QApplication::translate("datos_p", "D\303\255a", Q_NULLPTR));
        label_7->setText(QApplication::translate("datos_p", "Mes", Q_NULLPTR));
        label_8->setText(QApplication::translate("datos_p", "A\303\261o", Q_NULLPTR));
        boton_validar->setText(QApplication::translate("datos_p", "VALIDAR", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class datos_p: public Ui_datos_p {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DATOS_P_H
