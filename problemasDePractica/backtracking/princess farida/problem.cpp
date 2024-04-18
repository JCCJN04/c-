#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

int sumaMaxima =0;

void backtracking(int posicion, vector<int>& vectorMonedas)
{
    if(posicion>=monedas.size())
        sumaMaxima=monedas.back();
    else
        for(int i=posicion;i<monedas.size();i++)
        {
            sumaMaxima+=monedas[i];
            backtracking(i+2, monedas);
        }
}

int main()
{
    int casos=0,numMonedas=0;
    cin>>casos;
    for(int i=0;i<casos;i++)
    {
        cin>>numMonedas;
        for(int a=0;a<numMonedas;a++)
        {
            vector<int> monedas;
            cin>>monedas[a];
            backtracking(a, monedas);
            cout << "caso 1"<< sumaMaxima << endl;
            sumaMaxima=0;
        }
    }
    return 0;
}