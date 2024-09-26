#include<iostream>
#include<string>
using namespace std;


struct Alamat{
  string jalan;
  string kode_pos;
  string kota;
};

struct mahasiswa {
  string nama; 
  string nim; 
  int umur; 
  string tanggal_lahir;
  Alamat alamat;
};

int main(){
  
  mahasiswa mhs1;
  mhs1.nama = "rico andre pratama"; 
  mhs1.nim = "A11.2023.15393"; 
  mhs1.umur = 29; 
  mhs1.tanggal_lahir = "16 desember 2005";
  mhs1.alamat.jalan = "tembalang, sumurboto";
  mhs1.alamat.kode_pos = "20045";
  mhs1.alamat.kota = "semarang";

  cout << "Data diri mahasiswa" << endl; 
  cout << "Nama : " << mhs1.nama << endl; 
  cout << "Nim : " << mhs1.nim << endl; 
  cout << "Tanggal lahir : " << mhs1.tanggal_lahir << endl; 
  cout << "alamat :" ; 
  cout << "jalan : "  << mhs1.alamat.jalan << endl;
  cout << "kota : " << mhs1.alamat.kota << endl;
  cout << "Kode pos : " << mhs1.alamat.kode_pos << endl;

}