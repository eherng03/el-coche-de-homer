#include "vehiculo.h"
#include <iostream>
#include <string.h>
#include <string>
#include <sstream>

using namespace std;


vehiculo::vehiculo(){

}

vehiculo::vehiculo(string xtipo, string xnombre, string xmatricula,int xruedas,int xpotencia,string xcolor,string xaccesorio,string xcombustible,bool xbocina,bool xburbuja,bool xportavasos,bool xcocheDeHomer ){

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

//Metodo que devuelve un String con el tipo de vehiculo que es
string vehiculo::getTipo(string xtipo){
    return this->tipo;
}
 //Metodo que mete un String con el nombre del vehiculo
void vehiculo::setNombre(string xnombre){
    return this->nombre;
}
  //Metodo que genera un String con la matrícula del vehiculo
void vehiculo::generarMatricula(){

}
//Metodo que mete un Int con el numero de ruedas del vehiculo
void vehiculo::setRuedas(string xruedas){

}
 //Metodo que mete un Int con el numero de potencia del vehiculo
 void vehiculo::setPotencia(int xpotencia){

}
//Metodo que mete un String con el nombre del vehiculo
void vehiculo::setColor(string xcolor){

}
//Metodo que mete un String con el tipo de accesorio que quiere(Kit de reparacion antipinchazos o rueda de repuesto)
void vehiculo::setAccesorio(string xaccesorio){

}
//Metodo que mete un String con el tipo de combustible del vehiculo
void vehiculo::setCombustible(string xcombustible){

}
//Metodo al que le pasas si el vehiculo tiene bocina o no (True or false)
void vehiculo::setBocina(bool xbocina){

}
//Metodo que devuelve si quiere portavasos(TRUE) o no(FALSE)
void vehiculo::setPortavasos(bool xportavasos){

}
//Metodo que devuelve si quiere burbuja(TRUE) o no(FALSE)
void vehiculo::setBurbuja(bool xburbuja){

}
//Metodo que devuelve si es el coche de Homer(TRUE) o no(FALSE)
void vehiculo::setCocheDeHomer(bool xcocheDeHomer){

}





  //Metodo que devuelve un String con el tipo de vehiculo que es
  string vehiculo::getTipo(){

}


  //Metodo que devuelve un String con el nombre del vehiculo
  string vehiculo::getNombre(){

 }

  //Metodo que devuelve un Int con el numero de ruedas que tiene el vehiculo
  int vehiculo::getRuedas(){

  }
 //Metodo que devuelve un Int con la potencia del coche
  int vehiculo::getPotencia(){

  }
  //Metodo que devuelve un String con el color que tiene el coche
 string vehiculo::getColor(){

 }
 //Metodo que devuelve un String con el tipo de accesorio que quiere(Kit de reparacion antipinchazos o rueda de repuesto)
  string vehiculo::getAccesorio(){

 }
 //Metodo que devuelve un String con el tipo de combustible del vehiculo
 string vehiculo::getCombustible(){

  }

 //Metodo que devuelve si quiere bocina(TRUE) o no(FALSE)
  bool vehiculo::getBocina(){

   }

  //Metodo que devuelve si quiere burbuja(TRUE) o no(FALSE)
  bool vehiculo::getBurbuja(){

 }

 //Metodo que devuelve si quiere portavasos(TRUE) o no(FALSE)
 bool vehiculo::getPortavasos(){

 }

