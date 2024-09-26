/*
  judul : membuat array 2 dimensi nilaiA[1...8][1...4]
  oleh  : rico andre pratama 
  waktu : semarang, 27 november 2023
*/
#include<iostream> 
using namespace std;


//kamus 
int nilaiA[8][4];
int x,y;

//deskripsi
main(){
  //untuk meng input nilai dari array nilaiA
  x = 0; 
  while(x < 8) // melakukan perulangan kolom ke bawah 
  {
    y = 0; 
    while(y < 4)
    {
      cout << "masukkan nilai baris " << x + 1 << " kolom " << y + 1 << " : "; cin >> nilaiA[x][y];
      y = y + 1 ;
    }
    x = x + 1;
  }

  //untuk menampilkan data dari array 
  x = 0;
  while(x < 8)
  {
    y =  0;
    while(y < 4)
    {
      cout << nilaiA[x][y] << " ";
      y = y + 1;
    }
    cout << endl;
    x = x + 1; 
  } 

}