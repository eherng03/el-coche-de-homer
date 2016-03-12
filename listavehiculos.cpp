#include "listavehiculos.h"
#include "ui_listavehiculos.h"

listaVehiculos::listaVehiculos(QWidget *parent) :
    QFrame(parent),
    ui(new Ui::listaVehiculos)
{
    ui->setupUi(this);
}

listaVehiculos::~listaVehiculos()
{
    delete ui;
}
