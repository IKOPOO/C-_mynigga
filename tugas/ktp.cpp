//program ktp menggunakan getline
//tanggal 28 september 2023
//oleh rico andre pratama 
//getline digunakan untuk mengambil seluruh baris teks sebagai input 
#include <iostream> 
#include <string>  //header untuk menjalankan getline 
using namespace std;

//kamus 
string nik;
string nama, jeniskelamin; 
string tempat_tinggal;
string tempat_tanggal_lahir; 
string alamat, rt, rw, desa, kecamatan;
string agama, pekerjaan, kewarganegaraan; 

//deskripsi 
main(){
  //input data 
  cout << "nomor NIK anda : ";
  getline(cin,nik);
  
  cout << "nama anda : ";
  getline(cin,nama);

  
  cout << "tempat tanggal lahir anda : ";
  getline(cin,tempat_tanggal_lahir);
  
  cout << "jenis kelamin anda : ";
  getline(cin,jeniskelamin);
  
  cout << "alamat anda : "; 
  getline(cin,alamat);
    cout << "rt : ";
    getline(cin,rt);
    cout << "rw : ";
    getline(cin,rw);
    cout << "desa : ";
    getline(cin,desa);
    cout << "kecamatan : ";
    getline(cin,kecamatan);

  cout << "agama anda : ";
  getline(cin,agama);

  cout << "pekerjaan anda : ";
  getline(cin,pekerjaan);

  cout << "kewarganegaraan anda : ";
  getline(cin,kewarganegaraan);

  
  cout << "------------------------------------------"<<endl;

  //output 
  //data yang keluar 

  cout << "NIK \t\t\t: " << nik << endl; 
  cout << "Nama \t\t\t: "<< nama <<endl;
  cout << "Tempat Tanggal Lahir \t: " << tempat_tanggal_lahir << endl;
  cout << "Jenis Kelamin \t\t: " << jeniskelamin << endl;
  cout << "Alamat \t\t\t: " << alamat << rt << rw << desa << kecamatan << endl;
  cout << "Agama \t\t\t: " << agama << endl;
  cout << "Pekerjaan \t\t: " << pekerjaan << endl;
  cout << "Kewarganegaraan \t: " << kewarganegaraan << endl;

  cout << "----------------------------------------------" << endl;

  
}