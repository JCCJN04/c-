#include <iostream> // Daniel Alejandro Vazque Valadez # 614331
using namespace std; // Juan Carlos Mendoza Castillo #598701
//damos nuestra palabra que hemos realizado la act con integridad academica

bool calcula(int t, int tubos[], int n) {
    if (t == 0) {
        return true;
    }
    
    if (n == 0 || t < 0) {
        return false;
    }

    return calcula(t - tubos[n - 1], tubos, n - 1) || calcula(t, tubos, n - 1);
}

int main() {
    int casos, t, n;
    cin >> casos;

    for (int i = 0; i < casos; i++) {
        cin >> t >> n;
        int tubos[n];
        for (int j = 0; j < n; j++) {
            cin >> tubos[j];
        }
        if (calcula(t, tubos, n)) {
            cout << "SI" << endl;
        } else {
            cout << "NO" << endl;
        }
    }

    return 0;
}
