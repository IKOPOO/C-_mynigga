#include<iostream>
using namespace std; 


int main(){

  //looping array jika kita tidak mengetahui batas akhir dari array tersebut 
  /*
    for(deklarasi variabel : array){
      statement
    }
  */

  //contoh 

  int nilaiarray[10] = {0,1,2,3,4,5,6,7,8,9};
  for(int index : nilaiarray){
    cout << "addres " << &index << " nilainya : " << index << endl;
    index = 1; //ini tidak merubah array 
  }
  
  cout << endl; 
  //memanipulasi array dengan menggunakan referensi 
  for(int &nilairef : nilaiarray){
    nilairef *= 2; 
  }

  cout << endl; 
  for(int &nilairef : nilaiarray){
    cout << "addres " << &nilairef << " nilainya : " << nilairef << endl;
  }

}
