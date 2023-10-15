# include <iostream>
# include "NodoTemplate.h"

using namespace std;

template <typename T> class ListaEncadenadaTemplate {
public:
    ListaEncadenadaTemplate();            // constructor
    ~ListaEncadenadaTemplate();           // destructor
    bool estaVacia();
    bool insertarElementoInicio(T info);
    void desplegarLista();
    int obtenerTamano();
    void eliminarElementoFinal();
    void eliminarElementoInicio();
    int buscarElemento(T elemento);

private:
    NodoTemplate<T>* inicio;           // ptr a objeto inicial de la lista
};

template <typename T> ListaEncadenadaTemplate<T>::ListaEncadenadaTemplate() {
    inicio = nullptr;
}

template <typename T> ListaEncadenadaTemplate<T>::~ListaEncadenadaTemplate() {
    NodoTemplate<T>* auxiliar;

    while (inicio != nullptr) {
        auxiliar = inicio->siguiente;
        delete inicio;
        inicio = auxiliar;
    }
}

template <typename T> bool ListaEncadenadaTemplate<T>::estaVacia() {
    return inicio == nullptr;
}

template <typename T> bool ListaEncadenadaTemplate<T>::insertarElementoInicio(T info) {
    NodoTemplate<T>* nuevo;
    bool bandera;

    nuevo = new NodoTemplate<T>(info);
    bandera = (nuevo != nullptr);

    if (bandera) {
        if (inicio == nullptr)
            inicio = nuevo;
        else {
            nuevo->siguiente = inicio;
            inicio = nuevo;
        }
    }

    return bandera;
}

template <typename T> void ListaEncadenadaTemplate<T>::desplegarLista() {
    NodoTemplate<T>* auxiliar;

    auxiliar = inicio;

    while (auxiliar != nullptr) {
        cout << auxiliar->informacion << " " << endl;
        auxiliar = auxiliar->siguiente;
    }
}

template <typename T> int ListaEncadenadaTemplate<T>::obtenerTamano() {
    NodoTemplate<T>* auxiliar;
    int contador;

    auxiliar = inicio;
    contador = 0;

    while (auxiliar != nullptr) {
        contador++;
        auxiliar = auxiliar->siguiente;
    }

    cout << "El numero de elementos es: " << contador << endl;
}

template <typename T> void ListaEncadenadaTemplate<T>::eliminarElementoFinal() {
    NodoTemplate<T>* auxiliar;
    NodoTemplate<T>* anterior;

    if (inicio != nullptr) {
        if (inicio->siguiente == nullptr) {
            delete inicio;
            inicio = nullptr;
        }
        else {
            auxiliar = inicio;
            while (auxiliar->siguiente != nullptr) {
                anterior = auxiliar;
                auxiliar = auxiliar->siguiente;
            }
            anterior->siguiente = nullptr;
            delete auxiliar;
        }
    }
}

template <typename T> void ListaEncadenadaTemplate<T>::eliminarElementoInicio() {
    NodoTemplate<T>* auxiliar;

    if (inicio != nullptr) {
        auxiliar = inicio;
        inicio = inicio->siguiente;
        delete auxiliar;
    }
}

template <typename T> int ListaEncadenadaTemplate<T>::buscarElemento(T elemento) {
    NodoTemplate<T>* auxiliar;
    int indice;

    auxiliar = inicio;
    indice = 0;

    while (auxiliar != nullptr) {
        if (auxiliar->informacion == elemento)
            return indice;
        indice++;
        auxiliar = auxiliar->siguiente;
    }
    //cout << "buscar elemento" << endl;

    return -1;//no la encontro
}