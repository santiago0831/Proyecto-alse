#ifndef GPS_H
#define GPS_H
#include "QtSql/QSqlDatabase"
#include <QWidget>
#include <QMainWindow>
#include <QTimer>
#include "sensor.h"
#include "QtSql/QSqlDatabase"
#include "QtSql/qsqlquery.h"
#include "QtSql/QSqlError"
#include "QtSql/QSqlQuery"
//#include "db_local.h"
#include <string>


namespace Ui {
class gps;
}

class gps : public QWidget
{
    Q_OBJECT

public:
    explicit gps(QWidget *parent = 0);
    ~gps();
    void actualizarGUI();
    void CrearTabla();
    void CrearTabla2();
    void agregar_datos1();



public slots:
    void leerSensores();


private slots:
    void on_Left_Button_clicked();
    void on_Right_Button_clicked();
    void estados(int&);

private:
    void ActualizarFechaFromSO();
    Ui::gps *ui;
    QTimer*     _tmr;
    GPS         _gps;
    Temp_Hum    _tem;
    Viento      _viento;
    Sensor      _preci;
    int         _hr, _min, _itera;
    double      _prom_gps[3], _prom_Tem[2], _prom_Viento[2], _prom_Preci;
    //Db_Local    *_db_local;
    std::string _fecha;
};

#endif // GPS_H
