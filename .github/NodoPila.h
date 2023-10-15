//  Olivia Maricela BarrÃ³n Cano
//  CreaciÃ³n: 19/Septiembre/2023
//  Ãšltima modificaciÃ³n: 20/Septiembre/2023
//

// Para que reconozca que la clase amiga usa template
template <typename T> class ListaEncadenadaTemplatePila;

// DefiniciÃ³n de la clase nodo

template <typename T>
class NodoPila
{ 
    friend class ListaEncadenadaTemplatePila<T>; // clase amiga para poder acceder directo a los atributos

public:
    NodoPila(T e);            // constructor

private:
    T informacion;        // datos almacenados en este nodo
    NodoPila<T>* siguiente;        // ptr a otro objeto del mismo tipo
};

template <class T>
NodoPila<T>::NodoPila(T e) 
{ 
    informacion=e; 
    siguiente = nullptr;
}; 
