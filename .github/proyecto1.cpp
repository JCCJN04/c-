#include <iostream> //juan carlos mendoza castillo 598701 "doy mi palabra que he realizado esta actividad con integridad academica"
#include <fstream> //para usar archivos
#include <sstream> //para usar stringstream
#include "ListaEncadenadaTemplate.h" //para usar la lista encadenada
#include "Pila.h" //para usar la pila

using namespace std; 

void leerArchivosPalabras(string nombreArchivo, ListaEncadenadaTemplate<string> &lista) //funcion para leer los archivos de palabras
{
    ifstream archivo; //variable para abrir el archivo
    string palabra; //variable para guardar la palabra
    archivo.open(nombreArchivo); //abre el archivo
    if(archivo.fail()) //si no se puede abrir el archivo
    {
        cout << "No se pudo abrir el archivo" << endl; //imprime que no se pudo abrir el archivo
    }
    while(!archivo.eof()) //mientras no sea el final del archivo
    {
        getline(archivo, palabra); //guarda la palabra en la variable
        lista.insertarElementoInicio(palabra); //inserta la palabra en la lista
    }
    archivo.close(); //cierra el archivo
}

void leerArchivoOraciones(string nombreArchivo, Pila<string> &pila) //funcion para leer el archivo de oraciones
{
    ifstream archivo; //variable para abrir el archivo
    string oracion; //variable para guardar la oracion
    archivo.open(nombreArchivo); //abre el archivo
    if(archivo.fail()) //si no se puede abrir el archivo
    {
        cout << "No se pudo abrir el archivo" << endl; //imprime que no se pudo abrir el archivo
    }
    while(!archivo.eof()) //mientras no sea el final del archivo
    {
        getline(archivo, oracion); //guarda la oracion en la variable
        pila.mete(oracion); //mete la oracion en la pila
    }
    archivo.close(); //cierra el archivo
}

bool OracionValida(const string &oracion, ListaEncadenadaTemplate<string> &Articulos, ListaEncadenadaTemplate<string> &Sustantivos, ListaEncadenadaTemplate<string> &Adjetivos, ListaEncadenadaTemplate<string> &Verbos, ListaEncadenadaTemplate<string> &ObjetoDirectos) 
{
    stringstream ss(oracion); //variable para guardar la oracion
    string palabra; //variable para guardar la palabra
    int contador = 0; //variable para contar las palabras de la oracion

    while(ss >> palabra){ //mientras haya palabras en la oracion
        contador++; //aumenta el contador
    }
    ss.clear(); //limpia la variable
    ss.str(oracion); //guarda la oracion en la variable

    string articulo, sustantivo, adjetivo, verbo, objetoDirecto; //variables para guardar las palabras de la oracion

    if(contador == 5) //si la oracion tiene 5 palabras
    {
        ss >> articulo >> sustantivo >> adjetivo >> verbo >> objetoDirecto; //guarda las palabras en las variables
        if (Articulos.buscarElemento(articulo) != -1 && Sustantivos.buscarElemento(sustantivo) != -1 && Adjetivos.buscarElemento(adjetivo) != -1 && Verbos.buscarElemento(verbo) != -1 && ObjetoDirectos.buscarElemento(objetoDirecto) != -1) //si las palabras estan en las listas
        {
            return true; //regresa true
        }
    }
    return false; //regresa false
}

int main()
{
    ListaEncadenadaTemplate<string> Articulos; //variables para guardar los articulos
    ListaEncadenadaTemplate<string> Sustantivos; //variables para guardar los sustantivos
    ListaEncadenadaTemplate<string> Adjetivos; //variables para guardar los adjetivos
    ListaEncadenadaTemplate<string> Verbos; //variables para guardar los verbos
    ListaEncadenadaTemplate<string> ObjetoDirectos; //variables para guardar los objetos directos
    Pila<string> Oraciones; //variables para guardar las oraciones

    string nombreArchivo; //variable para guardar el nombre del archivo
    cout << "escribe el nombre del archivo de articulos: "; //pide el nombre del archivo de articulos
    cin >> nombreArchivo; //guarda el nombre del archivo
    leerArchivosPalabras(nombreArchivo, Articulos); //llama a la funcion para leer el archivo de articulos

    cout << "escribe el nombre del archivo de sustantivos: "; //pide el nombre del archivo de sustantivos
    cin >> nombreArchivo; //guarda el nombre del archivo
    leerArchivosPalabras(nombreArchivo, Sustantivos); //llama a la funcion para leer el archivo de sustantivos

    cout << "escribe el nombre del archivo de adjetivos: "; //pide el nombre del archivo de adjetivos
    cin >> nombreArchivo; //guarda el nombre del archivo
    leerArchivosPalabras(nombreArchivo, Adjetivos); //llama a la funcion para leer el archivo de adjetivos
    
    cout << "escribe el nombre del archivo de verbos: "; //pide el nombre del archivo de verbos
    cin >> nombreArchivo; //guarda el nombre del archivo
    leerArchivosPalabras(nombreArchivo, Verbos); //llama a la funcion para leer el archivo de verbos

    cout << "escribe el nombre del archivo de objetos directos: "; //pide el nombre del archivo de objetos directos
    cin >> nombreArchivo; //guarda el nombre del archivo
    leerArchivosPalabras(nombreArchivo, ObjetoDirectos); //llama a la funcion para leer el archivo de objetos directos

    cout << "escribe el nombre del archivo de oraciones: "; //pide el nombre del archivo de oraciones
    cin >> nombreArchivo; //guarda el nombre del archivo
    leerArchivoOraciones(nombreArchivo, Oraciones); //llama a la funcion para leer el archivo de oraciones
    
    /*
    leerArchivosPalabras("articulos.txt", Articulos); 
    leerArchivosPalabras("sustantivos.txt", Sustantivos); 
    leerArchivosPalabras("adjetivos.txt", Adjetivos); 
    leerArchivosPalabras("verbos.txt", Verbos); 
    leerArchivosPalabras("objetosDirectos.txt", ObjetoDirectos);
    leerArchivoOraciones("Oraciones.txt", Oraciones);
    */

    string oracion, palabra; //variables para guardar la oracion y la palabra
    while (!Oraciones.estaVacia()) //mientras la pila no este vacia
    {
        oracion = Oraciones.tope(); //muestra la oracion de la pila
        Oraciones.saca(); //saca la oracion de la pila
        if(OracionValida(oracion, Articulos, Sustantivos, Adjetivos, Verbos, ObjetoDirectos))//si la oracion es valida
        {
            cout << "La oracion: " << oracion << " es valida" << endl; //imprime la oracion
        }
    }
    return 0;
}