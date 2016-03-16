#ifndef VEHICULO_H
#define VEHICULO_H

#include <iostream>
#include <string>
#include <string.h>
#include <sstream>
#include <math.h>
#include <time.h>
#include <stdlib.h>

using namespace std;

class vehiculo
{
public:
    vehiculo();

    //constructor y destructor de la clase
    vehiculo(string tipo,string nombre,string matricula,int ruedas,string color,string combustible,string accesorio, bool burbuja , bool bocina , bool portavasos,bool cocheDeHomer);
    string getTipo();
    string getMatricula();
    string getNombre();
    string getColor();
    void setNombre(string xnombre);
    string generarMatricula();
    void setRuedas(string xruedas);     //para no tener que cambiarlo en la combo box
    void setPotencia(string xpotencia);
    void setColor(string xcolor);
    void setAccesorio(string xaccesorio);
    void setCombustible(string xcombustible);
    void setBurbuja(bool burbuja);
    void setBocina(bool xbocina);
    void setPosavasos(bool xposavasos);
    string toString();


private:

    string tipo;
    string nombre;
    string matricula;
    string ruedas;
    string potencia;
    string color;
    string combustible;
    bool kitEmergencia;
    bool ruedaRepuesto;
    bool burbuja;
    bool bocina;
    bool posavasos;

};
#endif //VEHICULO_H
