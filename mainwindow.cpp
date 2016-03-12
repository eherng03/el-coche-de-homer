#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <vehiculo.h>
#include <string>

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    this->vehiculo = new vehiculo();
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_buttonCrear_clicked()
{
    //no sé qué metodo te coge el texto
    //vehiculo->setNombre(ui->textEditNombre->));
    vehiculo->setRuedas(ui->comboBoxRuedas->currentText());
    vehiculo->setColor(ui->comboBoxColor->currentText());
    vehiculo->setPotencia(ui->comboBoxPotencia->currentText());
    vehiculo->setCombustible(ui->comboBoxCombustible->currentText());
    vehiculo->setAccesorio(ui->comboBoxAccesorio->currentText());
    vehiculo->setBurbuja(ui->checkBurbuja->isChecked());
    vehiculo->setPosavasos(ui->checkPosavasos->isChecked());
    vehiculo->setVocinas(ui->checkVocinas->isChecked());
    ui->labelTipo->setText(vehiculo->getTipo());
}

void MainWindow::on_buttonMatrcula_clicked()
{
    ui->labelMatriculaGenerada->setText(vehiculo->generarMatrigula());
}
