#include <iostream>
using namespace std;
#include <vector>
#include<algorithm>

int main()
{
    int n, a, b; 
    pair<int, int> pares;
    cin>>n;
    vector<pair<int, int>> vector;

    if(1 <= n <= 200000)
    {
        for(int i=0;i<n;i++)
        {
            cin>>a;
            cin>>b;
            if(1<=a && a<b&&b<=1000000000)
            {
                pares.first = a;
                pares.second = b;
                vector[i] = pares;
            }

        }
    }
    return 0;
}