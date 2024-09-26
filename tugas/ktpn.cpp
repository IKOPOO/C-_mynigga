//program ktp menggunakan getline
//28 september 2023
//semarang rico andre pratama

#include <iostream> 
#include <string> //header tambahan untuk menjalankan kode getline 
using namespace std; 

//getline berfungsi untuk menjalankan input lebih dari satu kata atau menggunakan spasi
//-cin digunakan untuk mengambil input satu kata (sampai bertemu dengan spasi atau karakter newline)
//-getline digunakan untuk mengambil seluruh barisan teks sebagai input, termasuk spasi dan karakter new line
//contoh kode getline = getline(cin,<-----nama variabel---->);


//kamus 
string nama;
string tempat_tinggal;
string tanggal_lahir; 
string alamat,agama,pekerjaan,kewarganegaraan;

//deskripsi
main(){
  //input
  cout << "Masukkan Nama Anda : ";
  getline(cin,nama);

  cout << "Masukkan Tempat Tinggal Anda : ";
  getline(cin,tempat_tinggal);

  cout << "Masukkan Alamat Anda : ";
  getline(cin,alamat);

  cout << "Masukkan Agama Anda : ";
  getline(cin,agama);

  cout << "Masukkan Pekerjaan Anda : ";
  getline(cin,pekerjaan);

  cout << "Masukkan Kewarganegaraan Anda : ";
  getline(cin,kewarganegaraan);

  cout << "------------------------------------------------------------"<< endl;

  //output
  cout << "Nama  : " << nama << endl;
  cout << "Tempat Tinggal  : " << tempat_tinggal << endl;
  cout << "Alamat  : " << alamat << endl;
  cout << "Agama : " << agama << endl;
  cout << "Pekerjaan : " << pekerjaan << endl;
  cout << "Kewarganegaraan : " << kewarganegaraan << endl;

  cout << "-----------------------------------------------------------------" << endl;

  
}