//judul : melakukan nested loop 
//oleh  : penulis 
//waktu : 23 desember 2023 
#include<iostream> 
using namespace std; 


//kamus 
int a, b;

//deskripsi 
main(){

  a = 0;
  while( a < 5){

      b = 1;
      while( b <= 10){
        
          cout << b << " "; 
          b = b + 1; 

      }
    cout << endl;
    a = a + 1; 
  }


}