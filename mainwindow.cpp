#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <vehiculo.h>
#include <string>
#include <listavehiculos.h>

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    this->esteVehiculo = new vehiculo();
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_buttonCrear_clicked()
{
    esteVehiculo->setNombre(ui->textEditNombre->toPlainText().toStdString());
    esteVehiculo->setRuedas(ui->comboBoxRuedas->currentText().toStdString());
    esteVehiculo->setColor(ui->comboBoxColor->currentText().toStdString());
    esteVehiculo->setPotencia(ui->comboBoxPotencia->currentText().toStdString());
    esteVehiculo->setCombustible(ui->comboBoxCombustible->currentText().toStdString());
    esteVehiculo->setAccesorio(ui->comboBoxAccesorio->currentText().toStdString());
    esteVehiculo->setBurbuja(ui->checkBurbuja->isChecked());
    esteVehiculo->setPosavasos(ui->checkPosavasos->isChecked());
    esteVehiculo->setBocina(ui->checkVocinas->isChecked());
    ui->labelTipo->setText(esteVehiculo->getTipo().c_str());
}

void MainWindow::on_buttonMatrcula_clicked()
{
    ui->labelMatriculaGenerada->setText(esteVehiculo->generarMatricula().c_str());
}

void MainWindow::on_buttonGuardar_clicked()
{
    if(this->ventanaVehiculosCreados == NULL){
        this->ventanaVehiculosCreados->show();
        this->ventanaVehiculosCreados->addVehiculo(*esteVehiculo);
    }else{
        this->ventanaVehiculosCreados->addVehiculo(*esteVehiculo);
    }
}
