#include "vehiculo.h"
#include <iostream>
#include <string.h>
#include <string>
#include <sstream>

using namespace std;


vehiculo::vehiculo(){

}

vehiculo::vehiculo(string xtipo, string xnombre, string xmatricula,int xruedas,string xcolor,string xaccesorio,string xcombustible,bool xbocina,bool xburbuja,bool xportavasos,bool xcocheDeHomer ){

  this->tipo = xtipo;
  this->nombre = xnombre;
  this->matricula = xmatricula;
  this->ruedas = xruedas;
  this->color = xcolor;
  this->setAccesorio(xaccesorio);
  this->combustible = xcombustible;
  this->bocina = xbocina;
  this->burbuja = xburbuja;
  this->portavasos = xportavasos;

};

string vehiculo::getTipo(){
    return this->tipo;
}

string vehiculo::getNombre(){
    return this->nombre;
}

string vehiculo::getMatricula(){
    return this->matricula;
}


void vehiculo::setNombre(string xnombre){
    this->nombre = xnombre;
}

string vehiculo::generarMatricula(){

}

void vehiculo::setRuedas(string xruedas){

}

void vehiculo::setPotencia(string xpotencia){

}

void vehiculo::setColor(string xcolor){

}

void vehiculo::setAccesorio(string xaccesorio){

}

void vehiculo::setCombustible(string xcombustible){

}

void vehiculo::setBocina(bool xbocina){

}

void vehiculo::setPosavasos(bool xposavasos){

}

void vehiculo::setBurbuja(bool xburbuja){

}

void vehiculo::setCocheDeHomer(bool xcocheDeHomer){

}

string vehiculo::toString(){
    string cadenaVehiculo;
    cadenaVehiculo = "Tipo de coche: " + this->getTipo() + ", su nombre: " + this->getNombre() + ", su matrícula: " + this->generarMatricula() + "\n";
}

