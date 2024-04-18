#include <iostream>
#include <vector>
#include <cmath>
using namespace std;
//Daniel Alejandro Vazquez Valadez # 614331
// Juan Carlos Mendoza Castillo #598701
//damos nuestra palabra que hemos realizado la act con integridad academica

void calcula(int t, int tubos[], int n, vector<int>& combinacion, vector<int>& mejor_combinacion, int& mejor_diferencia) {
    if (t == 0 && combinacion.size() == 2) {
        int diferencia = 0;
        for (int i = 1; i < combinacion.size(); ++i) {
            diferencia += abs(combinacion[i] - combinacion[i - 1]);
        }
        if (diferencia < mejor_diferencia) {
            mejor_diferencia = diferencia;
            mejor_combinacion = combinacion;
        }
        return;
    }
    
    if (n == 0 || t < 0) {
        return;
    }

    combinacion.push_back(tubos[n - 1]);
    calcula(t - tubos[n - 1], tubos, n - 1, combinacion, mejor_combinacion, mejor_diferencia);
    combinacion.pop_back();

    calcula(t, tubos, n - 1, combinacion, mejor_combinacion, mejor_diferencia);
}

int main() {
    int casos, t, n;
    cin >> casos;

    for (int i = 0; i < casos; i++) {
        cin >> n;
        int tubos[n];
        for (int j = 0; j < n; j++) {
            cin >> tubos[j];
        }
        cin >> t;

        vector<int> combinacion;
        vector<int> mejor_combinacion;
        int mejor_diferencia = 10000;

        calcula(t, tubos, n, combinacion, mejor_combinacion, mejor_diferencia);

        for (int j = 0; j < mejor_combinacion.size(); j++) {
            cout << mejor_combinacion[j] << " ";
        }
        cout << endl;
    }

    return 0;
}