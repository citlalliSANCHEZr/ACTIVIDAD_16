#include "laboratorio.h"
#include<fstream>
#include <algorithm>

Laboratorio::Laboratorio()
{

}
void Laboratorio::agregarCo(const Computadora &c)
{
    computadoras.push_back(c);
}
void Laboratorio::mostrar()
{
    cout<<left;
    cout<<setw(10)<<"SISTEMA";
    cout<<setw(10)<<"NOMBRE";
    cout<<setw(10)<<"MEMORIA";
    cout<<setw(10)<<"ALMACENAMIENTO";
    cout<<endl;
    for(size_t i=0;i<computadoras.size();i++)
    {
  Computadora &c = computadoras[i];

    //cout<<"Sistema: "<<c.getSistema()<<endl;
    //cout<<"Nombre: "<<c.getNombre()<<endl;
    //cout<<"Memoria: "<<c.getMemoria()<<endl;
    //cout<<"Almacenamiento: "<<c.getAlmacenamiento()<<endl;
    //cout<<endl;
    cout<<c;
    }
}
void Laboratorio::respaldar_tabla()
{
    ofstream archivo("computadoras_tabla.txt");
    if(archivo.is_open())
    {
    archivo<<left;
    archivo<<setw(10)<<"SISTEMA";
    archivo<<setw(10)<<"NOMBRE";
    archivo<<setw(10)<<"MEMORIA";
    archivo<<setw(10)<<"ALMACENAMIENTO";
    archivo<<endl;
        for(size_t i=0;i<computadoras.size();i++)
        {
              Computadora &c = computadoras[i];

                archivo<<c;
        }

    }
    archivo.close();
}
void Laboratorio::respaldar()
{
    ofstream archivo("computadoras.txt");
    if(archivo.is_open())
    {

        for(size_t i=0;i<computadoras.size();i++)
        {
              Computadora &c = computadoras[i];

                archivo<<c.getSistema()<<endl;
                archivo<<c.getNombre()<<endl;
                archivo<<c.getMemoria()<<endl;
                archivo<<c.getAlmacenamiento()<<endl;
        }

    }
    archivo.close();
}
void Laboratorio::recuperar()
{
    ifstream archivo("computadoras.txt");
    if(archivo.is_open())
    {
        string temp;
        float almacenamiento;
        int memoria;
        Computadora c;
        while(true)
        {
            getline(archivo,temp);
            if(archivo.eof())
            {
                break;
            }
            c.setSistema(temp);
            getline(archivo,temp);
            c.setNombre(temp);
            getline(archivo,temp);
             almacenamiento=stof(temp);
            c.setAlmacenamiento(almacenamiento);
            getline(archivo,temp);
            memoria=stoi(temp);
            c.setMemoria(memoria);

            agregarCo(c);
        }
    }
    archivo.close();

}
void Laboratorio::insertar(const Computadora&c, size_t pos)
{
     computadoras.insert(computadoras.begin()+pos,c);
}
size_t Laboratorio::size()
{
    return computadoras.size();
}
void Laboratorio::inicializar(const Computadora&c,size_t n)
{
    computadoras=vector<Computadora>(n,c);
}
void Laboratorio::eliminar(size_t pos)
{
    computadoras.erase(computadoras.begin()+pos);
}
void Laboratorio::ordenar()
{
    sort(computadoras.begin(),computadoras.end());
}
Computadora* Laboratorio::buscar(const Computadora& c)
{
    auto it = find(computadoras.begin(),computadoras.end(),c);
    if(it==computadoras.end())
    {
        return nullptr;
    }else{
    return &(*it);
    }
}
