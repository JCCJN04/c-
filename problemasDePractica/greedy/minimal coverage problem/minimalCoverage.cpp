#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int t, m, l, r;
    cin >> t;
    for (int caso = 1; caso <= t; caso++) {
        cin >> m;
        vector<pair<int, int>> intervalos;
        while (true) {
            cin >> l >> r;
            if (l == 0 && r == 0)
                break;
            intervalos.push_back({l, r});
        }
        sort(intervalos.begin(), intervalos.end());
        vector<int> res;
        int maxDerecha = 0; // Variable para el punto más a la derecha alcanzado
        for (int i = 0; i < intervalos.size() && maxDerecha < m; ) {
            if (intervalos[i].first > maxDerecha) {
                res.clear();
                break;
            }
            int derechaMasLejana = intervalos[i].second;
            int mejor = i;
            while (i + 1 < intervalos.size() && intervalos[i + 1].first <= maxDerecha) {
                if (derechaMasLejana < intervalos[i + 1].second) {
                    derechaMasLejana = intervalos[i + 1].second;
                    mejor = i + 1;
                }
                i++;
            }
            res.push_back(mejor);
            maxDerecha = derechaMasLejana;
            i++; // Incremento aquí para evitar que la variable 'i' se actualice dos veces
        }
        cout << "Case " << caso << ": ";
        if (maxDerecha < m) {
            cout << "0\n";
        } else {
            cout << res.size() << endl;
            for (int i = 0; i < res.size(); i++) {
                cout << intervalos[res[i]].first << " " << intervalos[res[i]].second << endl;
            }
        }
        if (caso != t) cout << endl;
    }
    return 0;
}
