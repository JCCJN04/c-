#include <iostream>
#include <vector>#include <climits> // Para INT_MIN
#include <climits> // Para INT_MIN
using namespace std;

int maxGanancia;

bool encontrarMaxGanancia(vector<int>& historial, int s, int d, int idx, int cur) {
    if (idx == 12) {
        maxGanancia = 0;
        for (int i = 0; i < historial.size(); ++i)
            maxGanancia += historial[i];
        return true;
    }
    if (idx > 4)
        cur -= historial[idx - 5];
    if (idx < 4 || cur + s < 0) {
        historial.push_back(s);
        if (encontrarMaxGanancia(historial, s, d, idx + 1, cur + s))
            return true;
        historial.pop_back();
    }
    if (idx < 4 || cur - d < 0) {
        historial.push_back(-d);
        if (encontrarMaxGanancia(historial, s, d, idx + 1, cur - d))
            return true;
        historial.pop_back();
    }
    return false;
}

int main() {
    int ahorroMensual, gastoMensual;
    while (cin >> ahorroMensual >> gastoMensual) {
        maxGanancia = INT_MIN;
        vector<int> historial;
        encontrarMaxGanancia(historial, ahorroMensual, gastoMensual, 0, 0);
        if (maxGanancia < 0)
            cout << "Deficit" << endl;
        else
            cout << maxGanancia << endl;
    }
    return 0;
}
