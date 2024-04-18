#include <iostream> //juan carlos mendoza castillo //daniel alejandro vazquez valadez
using namespace std; //damos nuestra palabra que hemos realizado esta actividad con integridad academica

int main() 
{
    int casos, N; // N = número de metros cuadrados
    cin >> casos; // Número de casos a evaluar

    for(int i=0;i<casos;i++) 
    {
        int contLamparas = 0;
        string calzada;
        cin >> N; 
        cin>>calzada;

        for(int j=0;j<N;j++) 
        {
            if(calzada[j] == '+') 
            { // Si el metro cuadrado necesita iluminación
                contLamparas++; // Añadir una lámpara
                j += 2; // Saltar dos metros cuadrados, ya que uno de ellos ya está iluminado 
            }
        }
        cout << contLamparas << endl;
    }
    return 0;
}
