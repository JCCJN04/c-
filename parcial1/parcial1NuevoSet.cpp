#include <iostream> 
#include <algorithm>
#include <set>
using namespace std;

int main ()
{
    int m, n;
    while(cin >> m >> n)
    {
        if(m == 0 && n == 0)
        {
            break;
        }
        if(1 <= m && n <= 1000000)
        {
            set<int> h1, h2, repetidos;
            int id;
            for(int i = 0; i < m; i++)
            {
                cin >> id;
                h1.insert(id);
            }
            for(int i = 0; i < n; i++)
            {
                cin >> id;
                if(h1.count(id) > 0)
                {
                    repetidos.insert(id);
                }
                h2.insert(id);
            }
        
            for(auto id : repetidos)
            {
                cout << id << " ";
            }
        /*
            if(repetidos.empty())
            {
                cout << ":)";
            }
            cout << endl;
            cout << h1.size() + h2.size() - 2*repetidos.size() << endl;
        */
        }
    }
    return 0; 
}
