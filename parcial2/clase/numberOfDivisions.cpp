#include <iostream>
#include <ctime>
#include <vector>
#include <cmath>


using namespace std;
vector<int> P;
vector<int> S;

int NOD(int n)
{
    int i=0;
    int nd=1;
    int cont=0;
    while(n>1)
    {
        if(n % P[i] == 0) //factor primo
        {
        n=n/P[i];
        cont++;
        }
        else
        {
         //cout<<"factor"<<P[i]<<endl;
        nd=nd*(cont+1);
        cont=0;
        i++;
        }
    }
    nd=nd*(cont+1);
    return nd;
}

int main() 
{
    int casos;
    cin>>casos;
    int tope=1000000;
    for(int n=2;n<tope;n++)
    {  
        bool esPrimo=true;
        for(int i=2;esPrimo && i<=sqrt(n);i++)
        if(n%i==0)
            esPrimo=false;
        if(esPrimo)
            P.push_back(n);
    }
    S.push_back(1);
    for(int i=1;i<100000;i++)
        S.push_back(S[i-1]+NOD( S[i-1] ));
   
    for(int c=0;c<casos;c++)
    {
        int A,B;
        cin>>A>>B;
        int cont=0,i;
        for(i=0;S[i]<A;i++);
        for(;S[i]<=B;i++)
            cont++;
        cout<<cont<<endl;
    }
    return 0;
}