#include <iostream>
#include <sstream>
#include <vector>
using namespace std;

int main()
{
    int cont= 1;
    while (true)
    {

        int hombres, mujeres;
        int hombreMasJoven = 10000;

        cin >> hombres >> mujeres;
        int edadH[hombres], edadM[mujeres];
        if (hombres == 0 && mujeres == 0) // si el numero de hombres y de mujeres es 0 termina
        {
            break;
        }

        for (int i = 0; i < hombres; i++)
        {
            cin >> edadH[i];// guardo las edades de los hombres
            hombreMasJoven = min(hombreMasJoven, edadH[i]); // se busca el hombre mas joven
        }
        for (int i = 0; i < mujeres; i++)
        {
            cin >> edadM[i]; // guardo las edades de las mujeres
        }

        cout << "Caso " << cont++ << ": ";
        if (hombres <= mujeres) // si existen mas mujeres que hombres
        {
            cout << "0" << endl;
        }
        else
        {
            cout << hombres - mujeres << " " << hombreMasJoven << endl;
        }
    }
    return 0;
}