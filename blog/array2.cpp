#include <iostream>
using namespace std;

int ukuransepatu[3][4];
int a, b, c, d;


main()
{

  //memasukkan data ke dalam array 
  a = 0;
  while(a < 3) {
      b = 0; 
      while(b < 4) {

        cout << "input data baris [" << a + 1 << " ] kolom [ " << b + 1 << " ] : ";
        cin >> ukuransepatu[a][b];

        b = b + 1;

      }

    a = a + 1;

  }

  //mengeluarkan data dari array 
  c = 0; 
  while( c < 3){
      d = 0; 
      while(d < 4){

          cout << ukuransepatu[c][d] << " ";
           
          d = d + 1;

      }

      cout << endl;
      c = c + 1;
  }

}