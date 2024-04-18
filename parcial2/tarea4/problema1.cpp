#include <iostream>
using namespace std;

int main()
{
    int casos, N;//N = numero de metros cuadrados
    cin>>casos;
    
    for(int i=0;i<casos;i++)
    {
        int contadorIluminar=0, contLamparas=0;
        string calzada;
        cin>>N;
        if(1<=N &&N<=1000)
        {
            cin>>calzada; //+ indica metro a iluminar  // - indica metro no ilumniable
            for(int m=0;m<calzada.length();m++)
            {
                if(calzada[m] == '+') // caso base donde no hay metros cuadrados para iluminar
                {
                    contadorIluminar++;
                }
            }

            
            for(int j=0;j<calzada.length();j++)
            {
                if(calzada[j-1] == '+' && calzada[j] == '+' && calzada[j+1] == '+') // caso donde hay metros cuadrados para iluminar
                {
                    calzada[j-1] = 'x'; // x indica que ya se ilumino
                    calzada[j] = 'x'; 
                    calzada[j+1] = 'x';
                    cout << "Pos " << j << endl;
                    contLamparas++;
                }
                if(calzada[j-1] == '+' && calzada[j] == '-' && calzada[j+1] == '+') // caso donde hay metros cuadrados para iluminar
                {
                    calzada[j-1] = 'x'; // x indica que ya se ilumino
                    calzada[j+1] = 'x';
                    calzada[j] = 'x';
                    cout << "Pos " << j << endl;
                    contLamparas++;
                }
                if(calzada[j-1] == '-' && calzada[j] == '+' && calzada[j+1] == '+') // caso donde hay metros cuadrados para iluminar
                {
                    calzada[j-1] = 'x'; // x indica que ya se ilumino
                    calzada[j+1] = 'x';
                    calzada[j] = 'x';
                    cout << "Pos " << j << endl;

                    contLamparas++;
                }
                if(calzada[j-1] == '-' && calzada[j] == '-' && calzada[j+1] == '+') // caso donde hay metros cuadrados para iluminar
                {
                    calzada[j-1] = 'x'; // x indica que ya se ilumino
                    calzada[j+1] = 'x';
                    calzada[j] = 'x';
                    cout << "Pos " << j << endl;

                    contLamparas++;
                }
                if(calzada[j-1] == '+' && calzada[j] == '-' && calzada[j+1] == '-') // caso donde hay metros cuadrados para iluminar
                {
                    calzada[j-1] = 'x'; // x indica que ya se ilumino
                    calzada[j+1] = 'x';
                    calzada[j] = 'x';
                    cout << "Pos " << j << endl;

                    contLamparas++;
                }
                if(calzada[j-1] == '+' && calzada[j] == '+' && calzada[j+1] == '-') // caso donde hay metros cuadrados para iluminar
                {
                    calzada[j-1] = 'x'; // x indica que ya se ilumino
                    calzada[j+1] = 'x';
                    calzada[j] = 'x';
                    cout << "Pos " << j << endl;

                    contLamparas++;
                }    
                if(calzada[j-1] == '-' && calzada[j] == '+' && calzada[j+1] == '-') // caso donde hay metros cuadrados para iluminar
                {
                    calzada[j-1] = 'x'; // x indica que ya se ilumino
                    calzada[j+1] = 'x';
                    calzada[j] = 'x';
                    cout << "Pos " << j << endl;

                    contLamparas++;
                }
            }
            //cout<<"contador iluminar "<< contadorIluminar<<endl;
            cout<<"contador lamparas "<< contLamparas<<endl;

        }
    }
}