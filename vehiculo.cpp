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
    kitEmergencia = false;
    ruedaRepuesto = false;
    burbuja = false;
    bocina = false;
    posavasos = false;

}

string vehiculo::getTipo(){
    if(this->ruedas.compare("1") == 0){
        this->tipo = "Monociclo";
    }else if(this->ruedas.compare("2") == 0){
        if(combustible == "A pedales"){
            this->tipo = "Bicicleta";
        }else{
             this->tipo = "Moto";
        }
    }else if(this->ruedas.compare("3") == 0){
        if(this->combustible.compare("A pedales") == 0){
            this->tipo = "Triciclo";
        }else{
            this->tipo = "Triciclo con motor";
        }
    }else if(this->ruedas.compare("4") == 0){
        if(this->burbuja || this->bocina || this->posavasos){
            this->tipo = "COCHE DE HOMER";
        }else if(this->combustible.compare("Híbrido") == 0){
            this->tipo = "Coche híbrido";
        }else if(this->combustible.compare("Eléctrico") == 0){
            this->tipo = "Coche eléctrico";
        }else if(this->combustible.compare("Solar") == 0){
            this->tipo = "Coche solar";
        }else if(this->combustible.compare("A pedales") == 0){
            this->tipo = "Coche a pedales";
        }else{
            this->tipo = "Coche";
        }
    }
    else{
        this->tipo = "Camión";
    }

    return this->tipo;
}

string vehiculo::getNombre(){
    return this->nombre;
}

string vehiculo::getMatricula(){
    return this->matricula;
}

string vehiculo::getColor(){
    return this->color;
}

void vehiculo::setNombre(string xnombre){
    this->nombre = xnombre;
}

string vehiculo::generarMatricula(){

    char nmatricula[8];
    string numeros = "0123456789";
    string letras = "BCFGHJKLMNPRSTVWXYZ";

    for(int i = 0; i < 4; i++){ //generamos los 4 numeros
        nmatricula[i] = numeros[rand() % numeros.length()];

    }
    for(int i = 4; i < 7; i++){ //generamos las 3 letras
        nmatricula[i] = letras[rand() % letras.length()];

    }
    nmatricula[7] = '\0';
    matricula = string(nmatricula);
    return matricula;
}

void vehiculo::setRuedas(string xruedas){
    this->ruedas = xruedas;
}

void vehiculo::setPotencia(string xpotencia){
    this->potencia = xpotencia;
}

void vehiculo::setColor(string xcolor){
    this->color = xcolor;
}

void vehiculo::setAccesorio(string xaccesorio){
    if(xaccesorio.compare("Rueda de repuesto") == 0){
        this->ruedaRepuesto = true;
        this->kitEmergencia = false;
    }else{
        this->ruedaRepuesto = false;
        this->kitEmergencia = true;
    }
}

void vehiculo::setCombustible(string xcombustible){
    this->combustible = xcombustible;
}

void vehiculo::setBocina(bool xbocina){
    this->bocina = xbocina;
}

void vehiculo::setPosavasos(bool xposavasos){
    this->posavasos = xposavasos;
}

void vehiculo::setBurbuja(bool xburbuja){
    this->burbuja = xburbuja;
}

string vehiculo::toString(){
    string cadenaVehiculo;
    cadenaVehiculo = "Tipo de coche: " + this->getTipo() + " de color " + this->getColor() + ", su nombre: " + this->getNombre() + ", su matrícula: " + this->getMatricula() + "\n";
    return cadenaVehiculo;
}

