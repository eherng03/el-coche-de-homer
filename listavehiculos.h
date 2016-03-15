#ifndef LISTAVEHICULOS_H
#define LISTAVEHICULOS_H

#include <vehiculo.h>
#include <string>
#include <string.h>
#include <QFrame>

using namespace std;

namespace Ui {
class listaVehiculos;
}

class listaVehiculos : public QFrame
{
    Q_OBJECT

public:
    explicit listaVehiculos(QWidget *parent = 0);
    ~listaVehiculos();
    void addVehiculo(vehiculo esteVehiculo);

private:
    Ui::listaVehiculos *ui;
    string vehiculosCreados;
    int contadorVehiculos;
};

#endif // LISTAVEHICULOS_H
