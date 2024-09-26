/*
  judul : membuat array dimensi satu A[1...7] B[1....7]
  oleh  : rico andre pratama 
  waktu : semarang, 27 november 2023
*/
#include <iostream> 
using namespace std; 

//kamus 
int nilaiA[7];
int x; 
int nilaiB[7]; 
int y; 
int nilaiC[7];
int z; 
float hasilA,hasilB,hasilC; 
float rata;
float hasilsemua ;

//deskripsi 
main()
{
  x = 0; //digunakan sebagai indek untuk nilaiA
  //melakukan perulangan untuk memasukkan nila ke dalam array 
  do
  {
    cout << x + 1 << ". " << "masukkan  data = " ; cin >> nilaiA[x];
    x = x + 1; 
  }while(x < 7);
  hasilA = nilaiA[4] - nilaiA[3] + nilaiA[1] - nilaiA[0] + nilaiA[5] + nilaiA[6] - nilaiA[2];
  cout << "hasilnya : " << hasilA << "\n"; 
  rata = hasilA / 6; 
  cout << rata ; 
  
  cout << "============================================================= \n";

  y = 0; //digunakan sebagai indek untuk nilaiB
  do
  {
    cout << y + 1 << ". " << "masukkan  data = " ; cin >> nilaiB[y];
    y = y + 1; 
  }while(y < 7);
  hasilB = nilaiB[4] + nilaiB[3] * nilaiB[1] % nilaiB[0] + nilaiB[5] - nilaiB[6] - nilaiB[2];
  cout << "hasilnya : " << hasilB << "\n"; 
  rata = hasilB / 6; 
  cout << rata ;

  cout << "============================================================= \n";

  z = 0; //digunakan sebagai indek untuk nilaiB
  do
  {
    cout << z + 1 << ". " << "masukkan  data = " ; cin >> nilaiC[z] ;
    z = z + 1; 
  }while(z < 7);
  hasilC = nilaiC[4] + nilaiC[3] % nilaiC[1] % nilaiC[0] * nilaiC[5] - nilaiC[6] - nilaiC[2];
  cout << "hasilnya : " << hasilC << "\n";
  rata = hasilC / 6;
  cout << rata; 

  cout << "============================================================= \n";

  hasilsemua = hasilA + hasilB - hasilC;
  cout << hasilsemua;

}