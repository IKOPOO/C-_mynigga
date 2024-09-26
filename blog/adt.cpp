//judul : membuat ADT
//oleh   : penulis
#include<iostream>
#include<string> //tambahkan syntax ini agar getline dapat berjalan 
using namespace std; 

//kamus 

struct transaksimakanan {
  string kasir; 
  string pembeli;
  string tanggal;

};

transaksimakanan pesan;
 
main(){

  //input data 
  cout << "masukkan nama kasir : " ; 
  getline(cin, pesan.kasir);
  cout << "masukkan nama pembeli : ";
  getline(cin, pesan.pembeli);
  cout << "masukkan tanggal : ";
  getline(cin, pesan.tanggal);

  //menampilkan data yang sudah kita masukkan 
  cout << "nama kasir nya : " << pesan.kasir << endl; 
  cout << "nama pembeli : " << pesan.pembeli << endl;
  cout << "tanggal transaksi : " << pesan.tanggal << endl; 
}
