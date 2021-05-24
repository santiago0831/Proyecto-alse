#include "gps.h"
#include "ui_gps.h"
#include "sensor.h"
#include "QDebug"
#include "datos.h"
#include "QMessageBox"
#include <chrono>
#include <ctime>
#include <sstream>
#include <iostream>

int cont = 0;
gps::gps(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::gps)
{
    ui->setupUi(this);
    CrearTabla();
    CrearTabla2();
    _tmr = new QTimer();
    _tmr->setInterval( 50 );
    connect( _tmr, SIGNAL(timeout()), this, SLOT(leerSensores()) );
    _tmr->start();

    // Preguntar fecha y hora al SO
    ActualizarFechaFromSO();

    std::cout << _fecha << std::endl;

    _itera = 0;
    _prom_gps[0] = _prom_gps[1] = _prom_gps[2] = 0.;
    _prom_Tem[0] = _prom_Tem[1] = 0.;
    _prom_Viento[0] = _prom_Viento[1] = 0.;
    _prom_Preci = 0.;

//    _db_local = new Db_Local("sensores.db");

    actualizarGUI();
}

gps::~gps()
{
    delete ui;
    delete _tmr;
}

void gps::CrearTabla()
{
    QString consulta;
    consulta.append("CREATE TABLE IF NOT EXISTS datos_p("
                    "Hum VARCHAR(10),"
                    "Preci VARCHAR(10),"
                    "Vel VARCHAR(10),"
                    "Dir VARCHAR(10)"
                    ");");
    QSqlQuery crear;
    crear.prepare(consulta);
    if(crear.exec())
    {
        qDebug()<<"Tabla 1 Creada";
    }else
    {
        qDebug()<<"Tabla 1 no creada"<<crear.lastError();
    }
}

void gps::CrearTabla2()
{
    QString consulta;
    consulta.append("CREATE TABLE IF NOT EXISTS datos_u("
                    "Lat VARCHAR(10),"
                    "Lon VARCHAR(10),"
                    "Alt VARCHAR(10),"
                    "Temp VARCHAR(10)"
                    ");");
    QSqlQuery crear;
    crear.prepare(consulta);
    if(crear.exec())
    {
        qDebug()<<"Tabla 2 Creada";
    }else
    {
        qDebug()<<"Tabla 2 no creada"<<crear.lastError();
    }
}
void gps::agregar_datos1(){
    QSqlQuery insertar_db;
    QString Lat=ui->txt_Lat->text();
    QString Lon=ui->txt_Lon->text();
    QString Alt=ui->txt_Alt->text();
    QString Vel=ui->txt_Vel->text();
    QString Dir=ui->txt_Dir->text();
    QString Temp=ui->txt_Temp->text();
    QString Hum=ui->txt_Hum->text();
    QString Preci=ui->txt_Preci->text();
    qDebug()<<Lat;
    qDebug()<<Lon;
    qDebug()<<Alt;
    qDebug()<<Vel;
    qDebug()<<Dir;
    qDebug()<<Temp;
    qDebug()<<Hum;
    qDebug()<<Preci;
    insertar_db.prepare("INSERT INTO datos_p(Hum,Preci,Vel,Dir)"
                    "VALUES (:Hum,:Preci,:Vel,:Dir)");
    insertar_db.bindValue(":Hum",Hum);
    insertar_db.bindValue(":Preci",Preci);
    insertar_db.bindValue(":Vel",Vel);
    insertar_db.bindValue(":Dir",Dir);
    if(insertar_db.exec())
    {
            qDebug()<<"Datos ingresados a la tabla";
    }
    else
    {
        qDebug()<<"Error al ingresar los datos"<<insertar_db.lastError();
    }

    insertar_db.prepare("INSERT INTO datos_u(Lat,Lon,Alt,Temp)"
                    "VALUES (:Lat,:Lon,:Alt,:Temp)");
    insertar_db.bindValue(":Lat",Lat);
    insertar_db.bindValue(":Lon",Lon);
    insertar_db.bindValue(":Alt",Alt);
    insertar_db.bindValue(":Temp",Temp);
    if(insertar_db.exec())
    {
            qDebug()<<"Datos ingresados a la tabla";
    }
    else
    {
        qDebug()<<"Error al ingresar los datos"<<insertar_db.lastError();
    }
}


void gps::actualizarGUI(){

    ui->txt_Hr->setText( QString::number( _hr ) );
    ui->txt_Min->setText( QString::number( _min ));
    ui->txt_Lat->setText( QString::number( _prom_gps[0] ) + " °");
    ui->txt_Lon->setText( QString::number( _prom_gps[1] ) +" °");
    ui->txt_Alt->setText( QString::number( _prom_gps[2] ) +" m");
    ui->txt_Vel->setText( QString::number( _prom_Viento[0] ) + " km/hr");
    ui->txt_Dir->setText( QString::number( _prom_Viento[0] ) +" °");
    ui->txt_Temp->setText(QString::number( _prom_Tem[0] ) +" °C");
    ui->txt_Hum->setText(QString::number( _prom_Preci ) + " %");
    ui->txt_Preci->setText(QString::number( _prom_Preci ) + " mm/día");


}

int estado;
void gps::on_Left_Button_clicked()
{
    if (cont>0){
    cont = cont-1;
    }
    else{}
    estado=cont;
    estados(cont);
}

void gps::on_Right_Button_clicked()
{
    if (cont<=2)
    {
    cont = cont+1;
    }
    else
    {
    cont = cont-2;
    }
    estado=cont;
    estados(cont);
}


void gps::estados(int& cont)
{

switch(cont){
    case 0: ui->line_status->setText(QString("Apagado"));break;
    case 1: ui->line_status->setText(QString("Promedio"));break;
    case 2: ui->line_status->setText(QString("Mínimo"));break;
    case 3: ui->line_status->setText(QString("Máximo"));break;
    default: ui->line_status->setText(QString("Apagado"));break;
}
}

void gps::leerSensores(){


    agregar_datos1();
    // Leer los sensores
    _gps.actualizar();
    _prom_gps[0] += _gps.latitud();
    _prom_gps[1] += _gps.longitud();
    _prom_gps[2] += _gps.altura();

    _tem.actualizar();
    _prom_Tem[0] += _tem.temperatura();
    _prom_Tem[1] += _tem.humedad();

    _viento.actualizar();
    _prom_Viento[0] += _viento.velocidad();
    _prom_Viento[1] += _viento.direccion();

    _preci.actualizar();
    _prom_Preci += _preci.leerDato();

    // Contador de cada 5 seg. Un minuto son 12.
    _itera++;
    if( _itera == 12 ){
        _itera = 0;
        _min++;
        if( _min == 60 ){
            _min = 0;
            _hr++;
           if( _hr == 24) {
               _hr = 0;
               ActualizarFechaFromSO();
           }
        }
        // Calcular promedios de minuto

        _prom_gps[0] /= 12.;
        _prom_gps[1] /= 12.;
        _prom_gps[2] /= 12.;

        _prom_Tem[0] /= 12.;
        _prom_Tem[1] /= 12.;

        _prom_Viento[0] /= 12.;
        _prom_Viento[1] /= 12.;

        // Actualizar GUI
        actualizarGUI();
/*        if( _db_local->abrir_DB() ){
            std::stringstream hora;
            hora << _hr << ":" << _min;
            _db_local->guardarDatos(_fecha, hora.str(), _prom_gps, _prom_Tem, _prom_Viento, _prom_Preci );
            _db_local->cerrar_DB();
        }
*/
        // Acumuladores a 0
        _prom_gps[0] = _prom_gps[1] = _prom_gps[2] = 0.;
        _prom_Tem[0] = _prom_Tem[1] = 0.;
        _prom_Viento[0] = _prom_Viento[1] = 0.;
        _prom_Preci = 0.;
    }

}

void gps::ActualizarFechaFromSO()
{
    time_t now = time(0);
    tm *ltm = localtime(&now);
    _hr = ltm->tm_hour;
    _min = ltm->tm_min;

    std::stringstream fecha;
    fecha << ltm->tm_mday << "/" << ltm->tm_mon + 1  << "/" << ltm->tm_year + 1900;
    _fecha = fecha.str();
}




