//  Olivia Maricela BarrÃ³n Cano
//  CreaciÃ³n: 19/Septiembre/2023
//  Ãšltima modificaciÃ³n: 20/Septiembre/2023

# include <iostream>
# include "NodoPila.h"

using namespace std;

// DefiniciÃ³n de la clase Lista Encadenada
template <typename T>
class ListaEncadenadaTemplatePila 
{
public:
    ListaEncadenadaTemplatePila();            // constructor
    ~ListaEncadenadaTemplatePila();           // destructor
    bool estaVacia();
    bool insertarElementoInicio(T info);
    void desplegarLista();
    int tamanio();
    void borrarElementoFinal();
    int encontrarPosicionElemento(T info);
    void borrarElementoInicio();
    T traerDatosInicio();

private:       
    NodoPila<T>* inicio;        // ptr a objeto inicial de la lista
};

template <typename T>
ListaEncadenadaTemplatePila<T>::ListaEncadenadaTemplatePila()
{
    inicio = nullptr;
}

template <typename T>
ListaEncadenadaTemplatePila<T>::~ListaEncadenadaTemplatePila()
{
    NodoPila<T>* auxiliar;

    while (inicio != nullptr)
    {
        auxiliar = inicio->siguiente;
        delete inicio;
        inicio = auxiliar;
    }

}

template <typename T>
bool ListaEncadenadaTemplatePila<T>::estaVacia()
{
    return inicio == nullptr;
}

template <typename T>
bool ListaEncadenadaTemplatePila<T>::insertarElementoInicio(T info)
{
    NodoPila<T>* nuevo;
    bool bandera;

    nuevo = new NodoPila<T>(info);
    bandera = (nuevo != nullptr);

    if (bandera)
    {
        if (inicio == nullptr)
          inicio = nuevo;
        else
        {
            nuevo->siguiente = inicio;
            inicio = nuevo;
        }
    }

    return bandera;
}

template <typename T>
void ListaEncadenadaTemplatePila<T>::desplegarLista()
{
    NodoPila<T>* auxiliar = inicio;
    int indice = 0;

    if (inicio != nullptr)
        do
        {
            indice = indice + 1;
            cout << "La informacion del nodo "<<indice<<" es "<<auxiliar->informacion<<endl;
            auxiliar = auxiliar ->siguiente;
        }while(auxiliar != nullptr);
    else
        cout << "La lista esta vacia"<<endl;
    
}

template <typename T>
int ListaEncadenadaTemplatePila<T>::tamanio()
{
    NodoPila<T>* auxiliar = inicio;
    int indice = 0;

    if (inicio != nullptr)
        do
        {   
            indice = indice + 1;
            auxiliar = auxiliar ->siguiente;
        }while(auxiliar != nullptr);
    
    return indice;
    
}

template <typename T>
void ListaEncadenadaTemplatePila<T>::borrarElementoFinal()
{
    NodoPila<T>* auxiliar = inicio;

    if (inicio != nullptr)
    {
        if (inicio->siguiente == nullptr)
            inicio = nullptr;
        else
        {   while((auxiliar->siguiente)->siguiente != nullptr)
                auxiliar = auxiliar->siguiente;
            delete auxiliar->siguiente;
            auxiliar->siguiente = nullptr;
        }
    }

}

template <typename T>    
int ListaEncadenadaTemplatePila<T>::encontrarPosicionElemento(T info)
{
    NodoPila<T>* auxiliar = inicio;
    int indice = 1;

 
    while ( (auxiliar != nullptr) and (auxiliar->informacion != info))
    {   
        indice = indice + 1;
        auxiliar = auxiliar ->siguiente;
    };

    if (auxiliar == nullptr)
        indice = 0;

    return indice;
 
}

template <typename T>  
void ListaEncadenadaTemplatePila<T>::borrarElementoInicio()
{
  NodoPila<T>* auxiliar;

  if (inicio != nullptr)
  {
    auxiliar = inicio -> siguiente;
    delete inicio;
    inicio = auxiliar;
  }
}

template <typename T>     
T ListaEncadenadaTemplatePila<T>::traerDatosInicio()
{
  NodoPila<T>* auxiliar;

  if (inicio != nullptr)
    return inicio -> informacion;
}