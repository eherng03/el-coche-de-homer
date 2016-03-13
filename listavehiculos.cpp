#include "listavehiculos.h"
#include "ui_listavehiculos.h"
#include <vehiculo.h>

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
    vehiculosCreados = vehiculosCreados + std::to_string(contadorVehiculos) + ". " + esteVehiculo.toString();
    this->ui->textVehiculosGuardados->setText(vehiculosCreados.c_str());
}
