#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <vehiculo.h>
#include <string>

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

private slots:
    void on_buttonCrear_clicked();

    void on_buttonMatrcula_clicked();

    void on_textEditNombre_textChanged();

private:
    Ui::MainWindow *ui;
    vehiculo vehiculo;

};

#endif // MAINWINDOW_H
