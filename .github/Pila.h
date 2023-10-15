#include <iostream>
#include "ListaEncadenadaTemplatePila.h"

using namespace std;

template <typename T> 
class Pila 
{
    public:
        bool mete(T e);
        void saca();
        T tope();
        bool estaVacia();
        int tamanio();
        void desplegarPila();

    private:
        ListaEncadenadaTemplatePila<T> lista;
};

template <typename T>
bool Pila<T>::mete(T e)
{
    //cout << e << " estoy en mete" << endl;
    return lista.insertarElementoInicio(e);
}

template <typename T>
void Pila<T>::saca()
{
    //cout << "estoy en saca " <<endl;
    lista.borrarElementoInicio();
}

template <typename T>
T Pila<T>::tope()
{
    T temporal;
    temporal = lista.traerDatosInicio();
    //cout << temporal << endl;
    return temporal;
    //return lista.traerDatosInicio();
}

template <typename T>
bool Pila<T>::estaVacia()
{
    return lista.estaVacia();
}

template <typename T>
int Pila<T>::tamanio()
{
    return lista.tamanio();
}

template <typename T>
void Pila<T>::desplegarPila()
{
    lista.desplegarLista();
}
