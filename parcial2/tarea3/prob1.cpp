#include <iostream>
#include<string>
#include <algorithm>
using namespace std;

//Daniel Alejandro Vazquez Valadez # 614331
// Juan Carlos Mendoza Castillo #598701
//damos nuestra palabra que hemos realizado la act con integridad academica

int main()
{
    // obtener número de casos que vamos a calcular
    int casos;
    cin >> casos;
    
    for (int c = 0; c < casos; c++) {
        // dígito a buscar para este caso
        int n;
        cin>>n;
        // contador de grupos
        int grupo = 1;
        
        // posición general
        int pos = 0;
        
        // no conocemos la ubicación, así que iniciamos un loop infinito
        while (true) 
        {
            // concatenamos la cadena de dígitos para el grupo
            string strGrupo = "";
            for (int i = 1; i <= grupo; i++) {
                strGrupo += to_string(i);
            }
            
            // calcular nueva posición final
            pos += strGrupo.length(); 

            // la posición buscada se encuentra en el grupo actual?            
            if (n <= pos) 
            {
                // invertimos la cadena del grupo para facilitar la extracción del dígito requerido
                reverse(strGrupo.begin(), strGrupo.end());
                cout << strGrupo.at(pos - n) << endl;
                break;
            }
            
            // evaluar siguiente grupo
            grupo++;
        }
    }
    return 0;
}