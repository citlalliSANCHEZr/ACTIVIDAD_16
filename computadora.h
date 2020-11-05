#ifndef COMPUTADORA_H
#define COMPUTADORA_H
#include <iostream>
#include <iomanip>
using namespace std;

class Computadora
{
    string sistema;
    string nombre;
    int memoria;
    float almacenamiento;

   public:
        Computadora();
        Computadora(const string &sistema,const string &nombre,int memoria,float almacenamiento);
        void setSistema(const string &v);
        string getSistema();
        void setNombre(const string &v);
        string getNombre();
        void setMemoria(int v);
        int getMemoria();
        void setAlmacenamiento(float v);
        float getAlmacenamiento();
    friend ostream& operator<<(ostream &out,const Computadora &c)
    {
        out<<left;
        out<<setw(10)<<c.sistema;
        out<<setw(10)<<c.nombre;
        out<<setw(10)<<c.memoria;
        out<<setw(10)<<c.almacenamiento;
        out<<endl;

        return out;

    }
    friend istream& operator>>(istream &in,Computadora &c)
    {
        cout<<"SISTEMA: ";
        getline(cin,c.sistema);
        cout<<"NOMBRE: ";
        getline(cin,c.nombre);
        cout<<"MEMORIA: ";
        cin>>c.memoria;
        cout<<"ALMACENAMIENTO: ";
        cin>>c.almacenamiento;

        return in;
    }
    bool operator==(const Computadora& c)
    {
        return nombre==c.nombre;
    }
    bool operator==(const Computadora& c)const
    {
        return nombre==c.nombre;
    }
    bool operator<(const Computadora& c)
    {
        return nombre<c.nombre;
    }
    bool operator<(const Computadora& c)const
    {
        return nombre<c.nombre;
    }
};
#endif
