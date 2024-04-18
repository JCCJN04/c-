//https://www.codechef.com/practice/course/greedy-algorithms/INTGRA01/problems/MOONSOON
#include <iostream>
#include <vector>
#include<algorithm>
using namespace std;


int main()
{
    int t=0;
    cin>>t;

    for(int i=0;i<t;i++)
    {

        vector<int> cargadores, carros; 
        int n=0,m=0,h=0;
        cin>>n>>m>>h;

        for(int j=0;j<m;j++)
        {
            int outlets;
            cin>>outlets;
            cargadores.push_back(outlets);
        }
        sort(carros.rbegin(), carros.rend());
        sort(cargadores.rbegin(), cargadores.rend());
        long long int acumulador =0;

        for(int j=0;j<carros.size()&&j<cargadores.size();j++)
        {
            if(carros[j] < cargadores[j]*h*1LL)
                acumulador += carros[j];

            else
                acumulador += (cargadores[j]*h);
        }
        cout <<acumulador <<endl;
    }
    return 0;
}