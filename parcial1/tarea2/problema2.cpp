#include <iostream> // Daniel Alejandro Vazque Valadez # 614331
using namespace std; // Juan Carlos Mendoza Castillo #598701
//damos nuestra palabra que hemos realizado la act con integridad academica
int main()
{
    int marca = 0, n1 = 0, n2 = 0, n3 = 0, grados = 0;
    while(cin >> marca >> n1 >> n2 >> n3)
    {
        if (marca == 0 && n1 == 0 && n2 == 0 && n3 == 0)
        {
            break;
        }

        int grados = 1080;

        if(marca == 0)
        {
            marca = 40;
        }

        if(n1 == 0)
        {
            n1 = 40;
        }

        if(marca > n1)
        {
            grados += abs(marca - n1) * 9;
        }else{
            grados = (marca + abs(40 - n1)) * 9;    
        }

        if(n2 == 0)
        {
            n2 = 40;
        }

        if(n1 < n2)
        {
            grados += abs(n2 - n1) * 9;
        }else{
            grados += (n2 + abs(40 - n1)) * 9;
        }

        if(n3 == 0)
        {
            n3 = 40;
        }

        if(n2 > n3)
        {
            grados += abs(n2 - n3) * 9;
        }else{
            grados += (n2 + abs(40 - n3)) * 9;
        }

        cout << grados << endl;
    }
    return 0;
}