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
    vehiculosCreados = vehiculosCreados + esteVehiculo.toString();
    this->ui->textVehiculosGuardados->setText(vehiculosCreados);
    this->contadorVehiculos = this->contadorVehiculos + 1;
    this->ui->labelContadorVehiculosCreados->setText(contadorVehiculos);
}
