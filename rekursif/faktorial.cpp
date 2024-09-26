/*
  judul : mencari hasil dari faktorial menggunakan rekursif 
  oleh  : rico 
  waktu : semarang, tembalang 17 februari 2024

  5! = 5 * 4 * 3 * 2 * 1 = 120  --> ini adalah faktorial = 5*4! 
  rumus faktorial --> (n) = n.(n - 1);
*/
#include<iostream>
using namespace std; 


//kamus

int hasil, angka; 
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
//fungsi untuk mencari faktorial 
int faktorial(int n){
  //kamus lokal 
  int hasil; 
  //deskripsi 
  //logika untuk mencari faktorial berdasarkan rumus 
  if(n == 1){
    return  n; 
  }
  else {
    return  n * faktorial(n - 1);
  }
}

//deskripsi 
main(){

  cout << "selamat datang program mencari faktor \n"; 
  garis(); 
  cout << "masukkan angka yang ingin di cari = " ; cin >> angka; 
  garis();
  hasil = faktorial(angka); // memanggil fungsi faktorial untuk melakukan tugasnya dan menyimpannya di variabel hasil
  cout << "hasil faktorial dari angka- " << angka << " adalah = " << hasil; 

}