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
  this->accesorio = xaccesorio;
  this->combustible = xcombustible;
  this->bocina = xbocina;
  this->burbuja = xburbuja;
  this->portavasos = xportavasos;
  this->cocheDeHomer = xcocheDeHomer;


  };

//Metodo que devuelve un String con el tipo de vehiculo que es
  string vehiculo::getTipo(string xtipo){

  }
 //Metodo que mete un String con el nombre del vehiculo
  void vehiculo::setNombre(string xnombre){

  }
  //Metodo que genera un String con la matrícula del vehiculo
  void vehiculo::generarMatricula(string xmatricula){

  }
  //Metodo que mete un Int con el numero de ruedas del vehiculo
  void vehiculo::setRuedas(int xruedas){

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
  //Metodo que devuelve si quiere bocina(TRUE) o no(FALSE)
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

