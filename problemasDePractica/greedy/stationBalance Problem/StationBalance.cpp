#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
using namespace std;

int main() {
    int num_set = 1, num_camaras, num_especies;
    while (cin >> num_camaras >> num_especies) {
        // especímenes ficticios, asigna 2 a cada cámara
        vector<int> especimenes(2*num_camaras);
        int total = 0;
        for (int i = 0; i < num_especies; i++) {
            int v;
            cin >> v;
            especimenes[i] = v;
            total += v;
        }
        double promedio = (double)total / num_camaras, desequilibrio = 0;
        sort(especimenes.begin(), especimenes.end());
        cout << "Conjunto #" << num_set++ << endl;
        for (int i = 0; i < num_camaras; i++) {
            cout << " " << i << ":";
            if (especimenes[i]) cout << " " << especimenes[i];
            if (especimenes[especimenes.size()-1-i])
                cout << " " << especimenes[especimenes.size()-1-i];
            cout << endl;
            desequilibrio += abs(promedio - (especimenes[i] + especimenes[especimenes.size()-1-i]));
        }
        cout.precision(5);
        cout << "DESEQUILIBRIO = " << desequilibrio << endl;
        cout << endl;
    }
    return 0;
}
