#include <iostream>
#include <chrono>
using namespace std;
/*
Daniel Alejandro Vazque Valadez # 614331
Juan Carlos Mendoza Castillo #598701
damos nuestra palabra que hemos realizado la act con integridad academica
*/

int M[15][15], Moriginal[15][15];
int n, diff, diffmenor;

bool sePuedeColocar(int f, int c){
    for(int i=0;i<c;i++)
        if(M[f][i]==1)
            return false;
    for(int i=1;f-i>=0&&c-i>=0;i++)
        if(M[f-i][c-i]==1)
            return false;
    for(int i=1;f+i<n&&c-i>=0;i++)
        if(M[f+i][c-i]==1)
            return false;
    return true;
}

void reinas(int col)
{
    if(col==n) 
    {
        diff=0;
        for(int i=0;i<n;i++) 
        {
            for(int j=0;j<n;j++) 
            {
                if(M[i][j]!=Moriginal[i][j]&&Moriginal[i][j]==1)
                    diff++;
            }
        }
        if(diff<diffmenor) 
        {
            diffmenor=diff;
        }
        return;
    }
    for(int fil=0;fil<n;fil++) 
    {
        if(sePuedeColocar(fil, col)) 
        {
            M[fil][col]=1;
            reinas(col+1);
            M[fil][col]=0;
        }
    }
    return;
}

int main()
{
    auto start = std::chrono::high_resolution_clock::now();
    n=1;
    do 
    {
        diff=0;
        diffmenor=0;
        cin>>n;
        if(n==0)
            break;

        for(int i=0;i<n;i++)
        {
            int columna;
            cin>>columna;
            Moriginal[columna-1][i]=1;
        }

        diffmenor=n*n;
        reinas(0);
        if(n!=0) 
        {
            cout<<diffmenor<<endl;
            
        }

        for(int i=0;i<n;i++) 
        {
            for(int j=0;j<n;j++) 
            {
                Moriginal[i][j]=0;
            }
        }
    }while(n!=0);
     auto end = std::chrono::high_resolution_clock::now();
        std::chrono::duration<double> duration = end - start;
        double seconds = duration.count();

        std::cout << "Tiempo de ejecución: " << seconds << " segundos" << std::endl;
    return 0;
}
