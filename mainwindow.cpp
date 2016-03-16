#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <vehiculo.h>
#include <string>
#include <listavehiculos.h>
#include <string.h>
#include <qmessagebox.h>

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

void MainWindow::crearVehiculo()
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
    ui->labelTipoGenerado->setText(esteVehiculo->getTipo().c_str());
}

void MainWindow::on_buttonMatrcula_clicked()
{
    ui->labelMatriculaGenerada->setText(esteVehiculo->generarMatricula().c_str());
}

//void MainWindow::on_textEditNombre_textChanged(){

//}



void MainWindow::on_botonGuardar_clicked()
{
    QMessageBox msgBox;

    if(ui->textEditNombre->toPlainText().toStdString().compare("") == 0){
        msgBox.setWindowTitle("Error");
        msgBox.setText("No esta permitido crear el coche sin rellenar el campo nombre.");
        msgBox.exec();
    }else{
        crearVehiculo();
        if(!this->ventanaVehiculosCreados->isVisible()){
            this->ventanaVehiculosCreados->show();
            this->ventanaVehiculosCreados->addVehiculo(*esteVehiculo);
        }else{
            this->ventanaVehiculosCreados->addVehiculo(*esteVehiculo);
        }
    }

}
