#include <iostream>
using namespace std;


int main(){
    char gato[3][3], jugador;
    int pRen, pCol, jug=0;
    //llenarEspacios(gato,3,3);
    int re, co;
    for(re=0;re<3;re++){
        for (co=0;co<3;co++)
            gato[re][co]=' ';
      }
    // temino de llenar espacio
    for (jug=0;jug<9;jug++)  // va hacer las 9 jugadas
    {
        if (jug%2==0)
            jugador='O';
        else
            jugador='X';
        cout<<"dame renglon y columna de tu jugada: ";
        cin>>pRen>>pCol;
        gato[pRen][pCol]=jugador;
      }
        // imprimir jugada
        for(re=0;re<3;re++){  // variar renglones
            {for (co=0;co<3;co++)
                {
                cout<<gato[re][co]<<" ";
                if (co<2)
                    cout<<"| ";
                }
            cout<<endl;
            if (re<2)
                cout<<"---------"<<endl;
            }
          }
        // Revisar si gana horizontal
        for(re=0;re<3;re++){
            if(gato[re][0]!=' ' && gato[re][0]==gato[re][1] && gato[re][0]==gato[re][2])
                {cout<<" Ganador "<<jugador<<endl;
                jug=9;
                }
          }
      // revisar si gana vertical
      for(co = 0; co < 3; co++){
        if(gato[0][co]!=' ' && gato[0][co]==gato[1][co] && gato[0][co]==gato[2][co])
                {cout<<" Ganador "<<jugador<<endl;
                jug=9;
                }
        }
      // revisar si gana diagonal
if(gato[0][0]==gato[1][1] && gato[0][0]==gato[2][2] && gato[0][0]!= ' ')
                {cout<<" Ganador "<<jugador<<endl;
                jug=9;
                }
      if(gato[0][2] == gato[1][1] && gato[1][1] == gato[2][0] && gato[1][1]!= ' ')


  //cierre for nueve jugadas

    return 0;
}
