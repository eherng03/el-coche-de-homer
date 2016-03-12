#ifndef LISTAVEHICULOS_H
#define LISTAVEHICULOS_H

#include <QFrame>

namespace Ui {
class listaVehiculos;
}

class listaVehiculos : public QFrame
{
    Q_OBJECT

public:
    explicit listaVehiculos(QWidget *parent = 0);
    ~listaVehiculos();

private:
    Ui::listaVehiculos *ui;
};

#endif // LISTAVEHICULOS_H
