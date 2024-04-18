#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;
        vector<pair<int, int>> tortugas(n);
        int total_peso = 0;

        for (int i = 0; i < n; ++i) {
            cin >> tortugas[i].first >> tortugas[i].second;
            total_peso += tortugas[i].second; // Sumar los pesos de todas las tortugas
        }

        sort(tortugas.begin(), tortugas.end());
        vector<int> dp(total_peso + 1, 1e7); // Inicializar dp con el tamaño adecuado
        dp[0] = 0;
        int res = 0;

        for (int i = 0; i < n; ++i) {
            for (int j = res; j >= 0; --j) {
                if (tortugas[i].first - tortugas[i].second - dp[j] >= 0) {
                    dp[j + tortugas[i].second] = min(dp[j + tortugas[i].second], dp[j] + tortugas[i].second);
                    res = max(res, j + tortugas[i].second);
                }
            }
        }

        cout << res << endl;
    }

    return 0;
}
