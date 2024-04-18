#include <iostream>
using namespace std;

int main() {
    int casos;
    cin >> casos;

    for(int i = 0; i < casos; i++) 
    {
        int posicion;
        cin >> posicion;

        // Encontrar en qué grupo está la posición n
        int numGrupo=0, limSuperior=0, numDigitos=1, delta=0, resultadoNumero; 
        while(limSuperior<posicion) 
        {
            numGrupo++;
            if(numGrupo<10)
            {
                limSuperior += numGrupo;
            }
            else if(numGrupo>=10 )
            {
                limSuperior += 9 + ((numGrupo-9)*2);
            }
        }

        // Calcular la posición dentro del grupo
        cout << "limSuperior: " << limSuperior << "Num grupo "<<numGrupo<<endl; 
        int resultadoDigito;
        delta = limSuperior - posicion;
        if(numGrupo<10)
        {
            resultadoDigito = numGrupo - (delta);
        }
        else if(numGrupo>=10)
        {
            if(delta >= ((numGrupo-9)*2))
            {
                resultadoDigito = 9-(delta-((numGrupo-9)*2));

            }
            else
            {            
                resultadoNumero = numGrupo - ((delta)/2); // esta resta arroja como resultado el numero donde esta el digito a buscar
                if(delta%2 == 0)
                {
                    resultadoDigito = resultadoNumero%10; // se obtienen las unidades
                }
                else if(delta %2 == 1)
                {
                    resultadoDigito = resultadoNumero/10; // se obitene la decena del digito
                }
            }
        }
        cout << resultadoDigito << endl;
    }
    return 0;
}