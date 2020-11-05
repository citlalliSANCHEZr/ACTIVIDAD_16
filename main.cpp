#include <iostream>
#include "laboratorio.h"
using namespace std;

int main()
{
    Laboratorio L;
    string op;

    while(true)
    {
        cout<<"1)agregar computadora"<<endl;
        cout<<"2)mostrar"<<endl;
        cout<<"3)respaldar"<<endl;
        cout<<"4)recuperar"<<endl;
        cout<<"5)insertar"<<endl;
        cout<<"6)inicializar"<<endl;
        cout<<"7)eliminar"<<endl;
        cout<<"8)ordenar"<<endl;
        cout<<"9)buscar"<<endl;
        cout<<"0)salir"<<endl;
        getline(cin,op);

        if(op=="1")
        {
             Computadora c;
             cin>>c;
             L.agregarCo(c);
             cin.ignore();
        }
        else if(op=="2")
        {
            L.mostrar();
        }
        else if(op=="3")
        {
            L.respaldar();
        }
        else if(op=="4")
        {
            L.recuperar();
        }
        else if(op=="5")
        {
            Computadora c;
            cin>>c;
            size_t pos;
            cout<<"posicion: ";
            cin>>pos;cin.ignore();
            if(pos>=L.size())
            {
                cout<<"no valido"<<endl;

            }else{
            L.insertar(c,pos);
            }
        }
        else if(op=="6")
        {
            Computadora c;
            cin>>c;
            size_t n;
            cout<<"n: ";
            cin>>n;cin.ignore();
            L.inicializar(c,n);
        }
        else if(op=="7")
        {
            Computadora c;
            cin>>c;
            size_t pos;
            cout<<"posicion: ";
            cin>>pos;cin.ignore();
            if(pos>=L.size())
            {
                cout<<"no valida"<<endl;

            }else{
            L.eliminar(pos);
            }
        }
        else if(op=="8")
        {
            L.ordenar();
        }
        else if(op=="9")
        {
            Computadora c;
            cin>>c;cin.ignore();
            Computadora *ptr=L.buscar(c);
            if(ptr==nullptr)
            {
                cout<<"no encontrado"<<endl;
            }else{
            cout<<*ptr<<endl;
            }

        }
        else if(op=="0")
        {
            break;
        }
    }

    return 0;
}
