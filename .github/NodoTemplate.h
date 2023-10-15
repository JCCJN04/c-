#include <iostream>
using namespace std;

template <typename T> class ListaEncadenadaTemplate; // Declaración previa de la clase ListaEncadenadaTemplate

template <typename T> class NodoTemplate {
    friend class ListaEncadenadaTemplate<T>; // Corrección: especifica el tipo T

public:
    NodoTemplate(T e)
    {
        // Constructor
        this->informacion = e;
        this->siguiente = nullptr;
    }

private:
    T informacion;           // Datos almacenados en este nodo
    NodoTemplate* siguiente; // Ptr a otro objeto del mismo tipo
};
