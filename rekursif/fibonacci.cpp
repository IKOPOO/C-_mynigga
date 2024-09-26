/*
  judul : mencari angka fibonacci menggunakan fungsi rekursif 
  oleh  : rico 
  waktu : semarang, tembalang, 17 februari 2024

  rumus : fibonacci(n) = fib(n - 1) + fib(n - 2)
  fibonacci = mengkalikan 2 angka sebelumnya untuk mendapatkan angkanya 
*/
#include<iostream>
using namespace std; 


//kamus 
int angka;
int hasil;  
//prosedur tampil garis 
void garis(){
  //kamus lokal 
  int y = 0; 
  while(y < 53){
    cout << "="; 
    y++; 
  }
cout << endl; 
}

//fungsi fibonacci 
int fibonacci(int i){

  //kamus lokal 
  int hasil; 
  //deskripsi 
  //logika untuk mencari angka fibonacci 
  if((i == 0) || (i == 1)){   // ini wajib kita lakukan untuk memberi batasan 
    return hasil = i;         //pada rekursig agar tidak terjadi stack overflow/infinity loop 
  }
  else{
    return fibonacci(i - 1) + fibonacci(i - 2);
  }
}

//desrkripsi 
main(){

  cout << "program menentukan bilangan fibonacci \n";
  garis();
  cout << "masukkan angka fibonacci ke- = "; cin >>  angka; 
  garis();
  hasil= fibonacci(angka);
  cout << "angka fibonacci ke- " << angka << "adalah = " <<  hasil;

}