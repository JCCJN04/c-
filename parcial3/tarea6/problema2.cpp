#include <iostream> //juan carlos mendoza castillo #598701 // daniel alejandro vazquez valadez #614331
#include <vector>
#include<algorithm>
#include <string>

using namespace std;

int numMAXsubcadenasUnicas = 0;
string concatenacionSubcadenas ="", copia;

bool existenRepetidos(vector<string> subcadenas)
{
    sort(subcadenas.begin(), subcadenas.end());    
    for (int i = 1; i < subcadenas.size(); i++) 
    {
        if (subcadenas[i] == subcadenas[i - 1]) 
        {
            return true; 
        }
    }
    return false; 
}

void backtracking(string palabraOriginal, vector<string>& subcadenas) {
    if(palabraOriginal.empty())
    {
        for(int i=0;i<subcadenas.size();i++) 
        {
            concatenacionSubcadenas+=subcadenas[i];
            //cout << subcadenas[i] << endl;
        }
        bool repetidos = existenRepetidos(subcadenas);
        if(numMAXsubcadenasUnicas<subcadenas.size() && copia == concatenacionSubcadenas && !repetidos)
        {
            numMAXsubcadenasUnicas = subcadenas.size();
        }
        concatenacionSubcadenas ="";
        //cout << "Total Substrings: " << numMAXsubcadenasUnicas << endl;
    }
    else 
    {
        for(int i=0;i<palabraOriginal.size();i++)
        {
            subcadenas.push_back(palabraOriginal.substr(0, i + 1));
            backtracking(palabraOriginal.substr(i + 1), subcadenas);
            subcadenas.pop_back();
        }
    }
}

int main() 
{
    string palabraOriginal;
    while (cin >> palabraOriginal) 
    {
        vector<string> subcadenas;
        copia = palabraOriginal;
        backtracking(palabraOriginal, subcadenas);
        cout << numMAXsubcadenasUnicas << endl;
        numMAXsubcadenasUnicas = 0;
    }
    return 0;
}