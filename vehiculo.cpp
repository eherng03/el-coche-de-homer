#include "vehiculo.h"
#include <iostream>
#include <string.h>
#include <string>
#include <sstream>

using namespace std;


vehiculo::vehiculo(){
    kitEmergencia = false;
    ruedaRepuesto = false;
    burbuja = false;
    bocina = false;
    posavasos = false;

}

string vehiculo::getTipo(){
    if(this->ruedas == 1){
        this->tipo = "Monociclo";
    }else if(this->ruedas == 2){
        if(combustible == "A pedales"){
            this->tipo = "Bicicleta";
        }else{
             this->tipo = "Moto";
        }
    }else if(this->ruedas == 3){
        if(combustible == "A pedales"){
            this->tipo = "Triciclo";
        }else{
            this->tipo = "Triciclo con motor";
        }
    }else if(this->ruedas == 4){
        if(this->burbuja || this->bocina || this->posavasos){
            this->tipo = "COCHE DE HOMER";
        }else if(compare(this->combustible, "Híbrido") == 0){
            this->tipo = "Coche híbrido";
        }else if(compare(this->combustible, "Eléctrico") == 0){
            this->tipo = "Coche eléctrico";
        }else if(compare(this->combustible, "Solar") == 0){
            this->tipo = "Coche solar";
        }
    }
    else{
        this->tipo = "Camion";
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

    char nmatricula[7];
    string numeros = "0123456789";
    string letras = "BCFGHJKLMNPRSTVWXYZ";

    for(int i = 0; i < 4; i++){ //generamos los 4 numeros
        nmatricula[i] = numeros[rand() % numeros.length()];

    }
    for(int i = 4; i < 7; i++){ //generamos las 3 letras
        nmatricula[i] = letras[rand() % letras.length()];

    }
    matricula = string(nmatricula);
    return matricula;
}

void vehiculo::setRuedas(string xruedas){
    this->ruedas = xruedas;
}

void vehiculo::setPotencia(string xpotencia){
    this->portencia = xpotencia;
}

void vehiculo::setColor(string xcolor){
    this->color = xcolor;
}

void vehiculo::setAccesorio(string xaccesorio){
    if(compare(xaccesorio, "Rueda de repuesto") == 0){
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
}

