#include "mainwindow.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w;
    listaVehiculos x;
    w.ventanaVehiculosCreados = &x;
    w.show();

    return a.exec();
}
