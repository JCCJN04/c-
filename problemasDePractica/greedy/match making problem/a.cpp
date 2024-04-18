#include <iostream>
using namespace std;

int main() {
    int b, s, v, tc = 1;
    while (true) {
        cin >> b >> s;
        if (b == 0 && s == 0)
            break;
        int youngestBachelor = 10000;
        for (int i = 0; i < b; i++) {
            cin >> v;
            youngestBachelor = min(youngestBachelor, v);
        }
        for (int i = 0; i < s; i++) {
            cin >> v;
        }
        cout << "Case " << tc++ << ": ";
        if (b <= s)
            cout << "0"<<endl;
        else
            cout << b - s << " " << youngestBachelor << endl;
    }
    return 0;
}
/*
b: Es el número de solteros (bachelors).
s: Es el número de solteras (spinsters).
v: Representa la edad de cada soltero o soltera.
tc: Es un contador que se usa para etiquetar los casos de prueba.
*/