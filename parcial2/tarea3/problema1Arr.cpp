#include <iostream> // Daniel Alejandro Vazque Valadez # 614331
using namespace std; // Juan Carlos Mendoza Castillo #598701
//damos nuestra palabra que hemos realizado la act con integridad academica

int main() 
{
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
            else if(numGrupo>=10 && numGrupo<100)
            {
                limSuperior += 9 + ((numGrupo-9)*2);
            }
            else if(numGrupo>=100 && numGrupo<1000) // no funciona 
            {
                limSuperior += 189 + ((numGrupo-189)*3); 
            }
            else if(numGrupo>=1000 && numGrupo<30233) // no funciona
            {
                limSuperior += 29234 + ((numGrupo-29234)*4);
            }
            
        }
        // Calcular la posición dentro del grupo
        cout << "limSuperior: " << limSuperior << "Num grupo "<<numGrupo<<endl; 
        int resultadoDigito;
        delta = limSuperior - posicion; //delta es la diferencia entre la posicion y el limite superior del grupo
        if(numGrupo<10)
        {
            resultadoDigito = numGrupo - (delta);
        }
        else if(numGrupo>=10 && numGrupo<100)
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
        else if(numGrupo>=100 && numGrupo<1000) 
        {
            if(delta >= ((numGrupo-189)*3)) 
            {
                resultadoDigito = 189-(delta-((numGrupo-189)*3)); 
            }
            else
            {            
                resultadoNumero = numGrupo - ((delta)/3); // esta resta arroja como resultado el numero donde esta el digito a buscar
                if(delta%3 == 0)
                {
                    resultadoDigito = resultadoNumero%10; // se obtienen las unidades
                }
                else if(delta %3 == 1)
                {
                    resultadoDigito = (resultadoNumero / 10) % 10; // se obtiene la decena del digito
                }
                else if(delta % 3 == 2)
                {
                    resultadoDigito = resultadoNumero / 100; // se obtiene la centena del digito
                }
            }
        }

        else if(numGrupo>=1000 && numGrupo<30233)
        {
            if(delta >= ((numGrupo-29234)*4))
            {
                resultadoDigito = 29234-(delta-((numGrupo-29234)*4));

            }
            else
            {            
                resultadoNumero = numGrupo - ((delta)/4); // esta resta arroja como resultado el numero donde esta el digito a buscar
                if(delta%4 == 0)
                {
                    resultadoDigito = resultadoNumero%10; // se obtienen las unidades
                }
                else if(delta %4 == 1)
                {
                    resultadoDigito = (resultadoNumero / 10) % 10; // se obtiene la decena del digito
                }
                else if(delta % 4 == 2)
                {
                    resultadoDigito = (resultadoNumero / 100) % 10; // se obtiene la centena del digito
                }
                else if(delta % 4 == 3)
                {
                    resultadoDigito = resultadoNumero / 1000; // se obtiene el millar del digito
                }
            }
        }

        cout << resultadoDigito << endl;
    }
    return 0;
}