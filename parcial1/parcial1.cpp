#include <iostream> // juan carlos mendoza castillo 598701
#include <algorithm>
using namespace std;

int main ()
{
    int m, n, contador = 0;
    while(cin >> m >> n)
    {
        if(m == 0 && n == 0)
        {
            break;
        }
        if(1 <= m && n <= 1000000)
        {
            int h1[m], h2[n];
            for(int i = 0; i < m; i++)
            {
                cin >> h1[i];
                //cout << "h1 "<<h1[i]<< endl;
            }
            for(int i = 0; i < n; i++)
            {
                cin >> h2[i];
                //cout << "h2 "<<h2[i];
            }
            
            for(int i = 0; i < m; i ++)
            {
                for(int j = 0; j < n; j++)
                {
                    if(h1[i] == h2[j])
                    {
                        contador++;
                    }
                }
            }

            int listaRepetidos[contador], x =0;
            for(int i = 0; i < contador; i ++)
            {
                listaRepetidos[i] =0;
            }

            for(int i = 0; i < m; i ++)
            {
                for(int j = 0; j < n; j++)
                {
                    if(h1[i] == h2[j])
                    {
                        listaRepetidos[x] = h1[i];
                        cout << listaRepetidos[x] << " " ;
                        x++;                        
                    }
                }
            }            
        }
    }
    return 0; 
}