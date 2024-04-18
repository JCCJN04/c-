#include <iostream>
#include <vector>
#include <queue>
#include <algorithm>

using namespace std;

int main() {
    int m, n, v;
    while (cin >> m >> n, m) {
        priority_queue<pair<int,int>> mesas;
        vector<pair<int,int>> equipos;
        vector<vector<int>> resultado(m);

        for (int i = 0; i < m; i++) {
            cin >> v;
            equipos.push_back({v, i});
        }

        sort(equipos.begin(), equipos.end(), greater<pair<int,int>>());

        for (int i = 0; i < n; i++) {
            cin >> v;
            mesas.push({v, i});
        }

        bool valido = true;

        for (int i = 0; i < equipos.size() && valido; i++) {
            int tamEquipo = equipos[i].first;

            if (mesas.size() < tamEquipo)
                valido = false;
            else {
                vector<pair<int,int>> mesasUsadas;
                vector<int> equipo;
                for (int j = 0; j < tamEquipo; j++) {
                    pair<int,int> mesa = mesas.top();
                    mesas.pop();
                    equipo.push_back(mesa.second + 1);
                    if (--mesa.first)
                        mesasUsadas.push_back(mesa);
                }
                // Ordenar los asientos de menor a mayor
                sort(equipo.begin(), equipo.end());
                resultado[equipos[i].second] = equipo;
                for (int k = 0; k < mesasUsadas.size(); k++)
                    mesas.push(mesasUsadas[k]);
            }
        }

        if (valido) {
            cout << "1" << endl;
            for (int i = 0; i < resultado.size(); i++) {
                for (int j = 0; j < resultado[i].size(); j++) {
                    cout << resultado[i][j];
                    if (j == resultado[i].size() - 1)
                        cout << endl;
                    else
                        cout << " ";
                }
            }
        } else {
            cout << "0" << endl;
        }
    }

    return 0;
}