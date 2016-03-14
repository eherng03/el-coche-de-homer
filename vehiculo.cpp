#include "vehiculo.h"
#include <iostream>
#include <string.h>
#include <string>
#include <sstream>
#include <math.h>
#include <time.h>
#include <stdlib.h>
using namespace std;


vehiculo::vehiculo(){

}

vehiculo::vehiculo(string xtipo, string xnombre, string xmatricula,int xruedas,string xpotencia,string xcolor,string xcombustible,bool xbocina,bool xburbuja,bool xportavasos,bool xkitEmergencia, bool xruedaRepuesto){

  this->tipo = xtipo;
  this->nombre = xnombre;
  this->matricula = xmatricula;
  this->ruedas = xruedas;
  this->potencia=xpotencia;
  this->color = xcolor;
  this->setAccesorio(xkitEmergencia,xruedaRepuesto);
  this->combustible = xcombustible;
  this->bocina = xbocina;
  this->burbuja = xburbuja;
  this->portavasos = xportavasos;
  this->ruedaRepuesto=xruedaRepuesto;
  this->kitEmergencia=xkitEmergencia;

};

string vehiculo::getTipo(){
    string tipoAux;

    if(this->ruedas==1){
        tipoAux="Monociclo";
    }else if(this->ruedas==2 && this-> combustible=="A pedales"){
        tipoAux="Bicicleta";
    }else if(this->ruedas==2 && this-> combustible!="A pedales"){
        tipoAux="Moto";
    }else if(this->ruedas==3){
        tipoAux="Triciclo";
    }else if(this->ruedas==4){
        tipoAux="Coche";
    }
    else{
        tipoAux="Camion";
    }


    return tipoAux;
}

string vehiculo::getNombre(){
    return this->nombre;
}

string vehiculo::getMatricula(){

    char nmatricula[8];
    string numeros="0123456789";
    string letras="BCFGHJKLMNPRSTVWXYZ";


    for(int i=0;i<4;i++) //generamos los 4 numeros
    {

    nmatricula[i]=numeros[rand()%numeros.length()];
    }
    for(int i=4;i<7;i++) //generamos las 3 letras
    {

    nmatricula[i]=letras[rand()%letras.length()];
    }
    nmatricula[7] = '\0';


    matricula=string(nmatricula);

    return matricula;
}


void vehiculo::setNombre(string xnombre){
    this->nombre = xnombre;
}

string vehiculo::generarMatricula(){
 return matricula;
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

void vehiculo::setAccesorio(bool xkitEmergencia,bool xruedaRepuesto){
if(this->kitEmergencia=true){
    this->ruedaRepuesto=false;
      this->ruedaRepuesto=xruedaRepuesto;
      this->kitEmergencia=xkitEmergencia;
}
if(this->kitEmergencia=false){
    this->ruedaRepuesto=true;
    this->ruedaRepuesto=xruedaRepuesto;
    this->kitEmergencia=xkitEmergencia;
}
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

string vehiculo::toString(){
    string cadenaVehiculo;
    cadenaVehiculo = "Tipo de coche: " + this->getTipo() + ", su nombre: " + this->getNombre() + ", su matrícula: " + this->generarMatricula() + "\n";
    return cadenaVehiculo;
}
