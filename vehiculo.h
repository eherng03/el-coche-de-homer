#ifndef VEHICULO_H
#define VEHICULO_H

#include <iostream>
#include <string>
#include <string.h>
#include <sstream>

using namespace std;

class vehiculo
{
public:
    vehiculo();

    //constructor y destructor de la clase
    vehiculo(string tipo,string nombre,string matricula,int ruedas,string color,string combustible,string accesorio, bool burbuja , bool bocina , bool portavasos,bool cocheDeHomer);

    string tipo;
    string nombre;
    string matricula;
    int ruedas;
    string color;
    string combustible;
    string accesorio;
    bool burbuja;
    bool bocina;
    bool portavasos;
    bool cocheDeHomer;


    string getTipo(string xtipo);
    void setNombre(string xnombre);
    void generarMatricula(string xmatricula);
    void setRuedas(int xruedas);
    void setColor(string xcolor);
    void setAccesorio(string xaccesorio);
    void setCombustible(string xcombustible);
    void setBurbuja(bool burbuja);
    void setBocina(bool xbocina);
    void setPortavasos(bool xportavasos);
    void setCocheDeHomer(bool xcocheDeHomer);






};
