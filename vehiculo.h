#include "vehiculo.h"
#include <iostream>
#include <string.h>
#include <string>
#include <sstream>

using namespace std;


vehiculo::vehiculo(){

}

vehiculo::vehiculo(string xtipo, string xnombre, string xmatricula,int xruedas,string xpotencia,string xcolor,string xaccesorio,string xcombustible,bool xbocina,bool xburbuja,bool xportavasos,bool xcocheDeHomer ){

  this->tipo = xtipo;
  this->nombre = xnombre;
  this->matricula = xmatricula;
  this->ruedas = xruedas;
  this->potencia=xpotencia;
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

void vehiculo::setRuedas(int xruedas){
    this->ruedas = xruedas;
}

void vehiculo::setPotencia(string xpotencia){
    this->potencia = xpotencia;
}

void vehiculo::setColor(string xcolor){
    this->color = xcolor;
}

void vehiculo::setAccesorio(string xaccesorio){


}

void vehiculo::setCombustible(string xcombustible){
    this->combustible = xcombustible;
}

void vehiculo::setBocina(bool xbocina){
    this->bocina = xbocina;

}

void vehiculo::setPosavasos(bool xportavasos){
    this->portavasos = xportavasos;

}

void vehiculo::setBurbuja(bool xburbuja){
    this->burbuja = xburbuja;
}

void vehiculo::setCocheDeHomer(bool xcocheDeHomer){

}

string vehiculo::toString(){
    string cadenaVehiculo;
    cadenaVehiculo = "Tipo de coche: " + this->getTipo() + ", su nombre: " + this->getNombre() + ", su matrícula: " + this->generarMatricula() + "\n";
    return cadenaVehiculo;
}
