#include<iostream>
#include<string>
using namespace std;

// struct tipe data bentukan -> menyimpan banyak tipe data dalam satu data
struct Mahasiswa{
  string nama; 
  string tanggal_lahir;
  string alamat;
  int umur; 
  string nim;
  bool status;
};

int main(){
  // kita membuat sebuah variabel yang bertipe mahasiswa
  Mahasiswa mhs1 ; //jadi variabel mhs1 itu bertipe struct Mahasiswa 

  // setelah deklarasi kita memasukkan data dari mhs1 
  mhs1.nama = "pasha";
  mhs1.alamat = "pati";
  mhs1.nim = "A11.2023.15234";
  mhs1.tanggal_lahir = "2005-15-12";
  mhs1.umur = 20;
  mhs1.status = true;

  cout << mhs1.nama << endl;
  cout << mhs1.nim<< endl;
  cout << mhs1.tanggal_lahir << endl;
  cout << mhs1.umur << endl;
  cout << mhs1.alamat << endl;
  cout << mhs1.status << endl;

}