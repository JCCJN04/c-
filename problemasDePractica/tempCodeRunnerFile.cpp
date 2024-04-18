bool sePuedeColocar(int f, int c)
{
   for(int i=0;i<c;i++) //evalua la fila
      if(M[f][i]==1)
         return false;
   for(int i=1;f-i>=0 && c-i>=0;i++) //Diagonal arriba
      if(M[f-i][c-i]==1)
         return false;
   for(int i=1;f+i<8 && c-i>=0;i++)  //Diagonal abajo
      if(M[f+i][c-i]==1)
         return false;
   return true;
}