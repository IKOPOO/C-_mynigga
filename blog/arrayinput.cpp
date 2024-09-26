//judul : memasukkan dan mengeluarkan data dalam array menggunakan loop 
//oleh   : penulis
#include<iostream> 
using namespace std; 


//kamus 
  string mobil[5];
  int x,y;

 //deskripsi 

 main(){

    //memasukkan data ke dalam array mobil 
    x = 0;
    do{

      cout << "masukkan data array mobil ke " << x << " : ";
      cin >> mobil[x];

      x = x + 1;
    }while(x < 5);    

    //mengeluarkan data menggunakan loop 
    y = 0; 
    do{

      cout << "ini adalah data yang kita input sebelumnya " << y << " : " << mobil[y] << endl;

      y = y + 1;
    }while( y < 5);

 }

