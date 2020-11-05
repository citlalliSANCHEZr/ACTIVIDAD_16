#ifndef LABORATORIO_H
#define LABORATORIO_H
#include "computadora.h"
#include <vector>

class Laboratorio
{
   vector<Computadora>computadoras;

public:
    Laboratorio();
    void agregarCo(const Computadora &c);
    void mostrar();
    void respaldar();
    void respaldar_tabla();
    void recuperar();


    void insertar(const Computadora&c,size_t pos);
    void inicializar(const Computadora&c,size_t n);
    void eliminar(size_t pos);
    void ordenar();
    Computadora* buscar(const Computadora& c);
    friend Laboratorio& operator<<(Laboratorio &la,const Computadora&c)
    {
        la.agregarCo(c);
        return la;
    }
    size_t size();
};
#endif
