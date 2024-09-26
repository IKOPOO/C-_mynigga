/*
  judul : menjumlahkan 2 buah array 
      A               B
    2 3 5    +      2 3 5    = ?? 
    3 4 2           9 6 4    = ??
    9 8 2           3 8 5    = ??
*/
#include<iostream>
using namespace std; 


//kamus 
int arrayA[3][4], arrayB[3][4];
int x, y; 
int hasil; 

//deskripsi 
main()
{
  //program memasukkan data ke variabel array 
  //melalakukan perulangan baris ke bawah 
  x = 0; //index array selalu dimulai dari 0 
  while(x < 3)
  {
    //melakukan perulangan untuk kolom dan memasukkan bilangan ke dalam wadah array 
    y = 0; //index array selalu dimulai dari 0 
    while(y < 4)
    {
      cout << "masukkan bilangan array A " << " = "; cin >> arrayA[x][y];
      cout << "masukkan bilangan array B " << " = "; cin >> arrayB[x][y];
      hasil = arrayA[x][y] + arrayB[x][y];
      y = y + 1;
    }
    cout << endl;
    x = x + 1;
  }

  //program menampilkan data yang ada dalam variabel array 
  //melakukan perulangan baris 
  x = 0; 
  while(x < 3)
  {
    y = 0;
    while(y < 4)
    {
      cout << "data array A = " << arrayA[x][y] << hasil << endl;
      cout << "data array B = " << arrayB[x][y] << hasil << endl;
      y = y + 1;
    }
    
    cout << endl; 
    x = x + 1;
  }
  
}