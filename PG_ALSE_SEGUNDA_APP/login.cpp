#include "login.h"
#include "ui_login.h"
#include "QMessageBox"
#include "QDebug"
#include "register.h"
#include "ui_register.h"
#include "gps.h"
#include "ui_gps.h"

LOGIN::LOGIN(QWidget *parent ) :
    QWidget(parent),
    ui(new Ui::LOGIN)
{
    ui->setupUi(this);
}

LOGIN::~LOGIN()
{
    delete ui;
}

void LOGIN::on_BOTON_LOGIN2_clicked()
{
    QString user=ui->user_line->text();
    QString passw=ui->passw_line->text();
    QSqlQuery buscar;
    QString pass;
    QString consulta;
    QString nombre;
    consulta.append("SELECT * FROM usuarios where user='"+user+"'");
    buscar.prepare(consulta);
    if(buscar.exec())
    {
        qDebug()<<"consulta realizada";
        while(buscar.next())
        {
            pass=buscar.value(1).toByteArray().constData();
            nombre=buscar.value(0).toByteArray().constData();
            qDebug()<<pass;
            qDebug()<<nombre;
        }
    }else
    {
        qDebug()<<"Error de consulta";
        QMessageBox::critical(this,tr("ERROR"),tr("Usuario no existe, por favor verifique"));
    }
    if(pass==passw)
    {
        gps * GPS= new gps(0);
        GPS->show();
        QMessageBox::information(this,tr("Bienvenido"),tr("Bienvenido: %1").arg(nombre));
    }
    else
    {
        QMessageBox::critical(this,tr("ERROR"),tr("Contraseña Incorrecta"));
    }



}
