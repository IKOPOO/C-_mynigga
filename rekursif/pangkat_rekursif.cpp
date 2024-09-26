/*
  judul : belajar rekursif melalui perpangkatan 
  oleh  : rico 
  waktu : semarang
*/
#include<iostream>
using namespace std; 


//kamus 
int a,b; 

//fungsi biasa
int pangkatbiasa(int a, int b){

  //kamus lokal
  int hasil,i = 1;
  hasil = a; 
  //deksripsi 
  while(i < b ){
    hasil = hasil * a; 
    i++; 
  }

  return hasil; 
}

//fungsi rekursif 
int pangkatrekursif(int a, int b){

  //kamus lokal 
  int bil,pangkat,total;
  /*
    rumus 
    total = a * pangkatrekursif(a,(b-1));
    bil = a, pangkat = b;
  */
  
 //deskripsi 
  if(b <= 1){
     total = a;
  }else {
     total = a * pangkatrekursif(a,(b - 1));
  }
  
  return total;
}

main(){
  
  cout << "masukkan angka : "; cin >> a; 
  cout << "masukkan pangkat : "; cin >> b; 
  cout << "hasil dari fungsi biasa : " << pangkatbiasa(a,b) << endl;
  cout << "hasil dari fungsi rekursif : " << pangkatrekursif(a,b) << endl;

}