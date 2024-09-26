/*
  - 5 + 6 - 7 + 8 - 9 = -7
  - 5 + 6 - 7 + 8 = 2
  - 5 + 6 - 7 = -6
  - 5 + 6 = 1
  - 5 = -5
  = 0
  = -15
  - 5 + 6 - 7 + 8 - 9 = -7
  - 5 + 6 - 7 + 8 = 2
  - 5 + 6 - 7 = -6
  - 5 + 6 = 1
  - 5 = -5
  = 0
  = -30
  - 5 + 6 - 7 + 8 - 9 = -7
  - 5 + 6 - 7 + 8 = 2
  - 5 + 6 - 7 = -6
  - 5 + 6 = 1
  - 5 = -5
  = 0
  = -45
  - 5 + 6 - 7 + 8 - 9 = -7
  - 5 + 6 - 7 + 8 = 2
  - 5 + 6 - 7 = -6
  - 5 + 6 = 1
  - 5 = -5
  = 0
  = -60
  = 0
*/
#include <iostream>
using namespace std;



//Kamus
int i, j, y, n;
int jml;
int total,semuatotal;

//Diskripsi
main()
{
  
  for(int k=0; k <= 3; k++){
    i = 9;
    n = 4;
    while(i >= n)
    {
        j = 5;
        jml = 0;
        while(j <= i)
        {
          if(j % 2 == 0)
          {
            cout << " + ";
            jml = jml + j; 
          }
          else 
          {
            cout << " - ";
            jml = jml - j;
          }
            cout << j ;
            j++;
        }
        cout << " = " << jml ;
        total = total + jml;
        cout << endl;
        i--;
    }
        cout << " = " << total ;
        cout << "\n";
  }
  cout << " = " << semuatotal;
}
