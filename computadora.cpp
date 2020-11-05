#include "computadora.h"

Computadora::Computadora()
{

}
Computadora::Computadora(const string &sistema,const string &nombre,int memoria,float almacenamiento)
{
   this->sistema = sistema;
  this->nombre = nombre;
  this->memoria = memoria;
  this->almacenamiento = almacenamiento;




}

void Computadora::setSistema(const string &v)
{
    sistema=v;
}
string Computadora::getSistema()
{
    return sistema;
}
void Computadora::setNombre(const string&v)
{
    nombre=v;
}
string Computadora::getNombre()
{
    return nombre;
}
void Computadora::setMemoria(int v)
{
    memoria=v;
}
int Computadora::getMemoria()
{
    return memoria;
}
void Computadora::setAlmacenamiento(float v)
{
    almacenamiento=v;
}
float Computadora::getAlmacenamiento()
{
    return almacenamiento;
}
