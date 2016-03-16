#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <vehiculo.h>
#include <listavehiculos.h>
#include <string>

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();
    listaVehiculos *ventanaVehiculosCreados;
    void crearVehiculo();

private slots:

    void on_buttonMatrcula_clicked();

    void on_botonGuardar_clicked();

    void closeEvent(QCloseEvent *event);

private:
    Ui::MainWindow *ui;
    vehiculo *esteVehiculo;
    //listaVehiculos *ventanaVehiculosCreados;

};

#endif // MAINWINDOW_H
