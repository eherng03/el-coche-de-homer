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
    vehiculo(string tipo,string nombre,string matricula,int ruedas,string potencia,string color,string combustible,string accesorio, bool burbuja , bool bocina , bool portavasos,bool cocheDeHomer);




    string getTipo();
    string getMatricula();
    string getNombre();
    void setNombre(string xnombre);
    string generarMatricula();
    void setRuedas(int xruedas);     //para no tener que cambiarlo en la combo box
    void setPotencia(string xpotencia);
    void setColor(string xcolor);
    void setAccesorio(string xaccesorio);
    void setCombustible(string xcombustible);
    void setBurbuja(bool burbuja);
    void setBocina(bool xbocina);
    void setPosavasos(bool xposavasos);
    void setCocheDeHomer(bool xcocheDeHomer);
    string toString();

private:

    string tipo;
    string nombre;
    string matricula;
    int ruedas;
    string potencia;
    string color;
    string combustible;
    bool kitEmergencia;
    bool ruedaRepuesto;
    bool burbuja;
    bool bocina;
    bool portavasos;
    bool cocheDeHomer;



};
#endif //VEHICULO_H
