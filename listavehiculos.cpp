#include "listavehiculos.h"
#include "ui_listavehiculos.h"
#include <vehiculo.h>
#include <string>
#include <string.h>

using namespace std;

listaVehiculos::listaVehiculos(QWidget *parent) :
    QFrame(parent),
    ui(new Ui::listaVehiculos)
{
    this->contadorVehiculos = 0;
    ui->setupUi(this);
}

listaVehiculos::~listaVehiculos()
{
    delete ui;
}

void listaVehiculos::addVehiculo(vehiculo esteVehiculo){
    this->contadorVehiculos = this->contadorVehiculos + 1;
    string contadorAux;
    ostringstream convert;
    convert << contadorVehiculos;
    contadorAux = convert.str();
    vehiculosCreados = vehiculosCreados + contadorAux + ". " + esteVehiculo.toString();
    this->ui->textVehiculosGuardados->setText(vehiculosCreados.c_str());
}
