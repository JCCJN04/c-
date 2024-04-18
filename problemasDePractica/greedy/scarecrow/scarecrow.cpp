#include <iostream> 
using namespace std; 
int main() 
{
    int casos, N; // N = número de metros cuadrados
    cin >> casos; // Número de casos a evaluar

    for(int i=0;i<casos;i++) 
    {
        int contEspantaPajaros = 0;
        string field;
        cin >> N; 
        cin>>field;

        for(int j=0;j<field.length();j++) 
        {
            if(field[j] == '.') 
            { 
                contEspantaPajaros++; 
                j += 2; 
            }
        }
        cout << contEspantaPajaros << endl;
    }
    return 0;
}