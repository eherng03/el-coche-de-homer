#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <vehiculo.h>
#include <string>

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
    //no sé qué metodo te coge el texto
    //vehiculo->setNombre(ui->textEditNombre->));
    esteVehiculo.setRuedas(ui->comboBoxRuedas->currentText());
    esteVehiculo.setColor(ui->comboBoxColor->currentText());
    esteVehiculo.setPotencia(ui->comboBoxPotencia->currentText());
    esteVehiculo.setCombustible(ui->comboBoxCombustible->currentText());
    esteVehiculo.setAccesorio(ui->comboBoxAccesorio->currentText());
    esteVehiculo.setBurbuja(ui->checkBurbuja->isChecked());
    esteVehiculo.setPosavasos(ui->checkPosavasos->isChecked());
    esteVehiculo.setVocinas(ui->checkVocinas->isChecked());
    ui->labelTipo->setText(esteVehiculo.getTipo());
}

void MainWindow::on_buttonMatrcula_clicked()
{
    ui->labelMatriculaGenerada->setText(esteVehiculo.generarMatricula());
}
