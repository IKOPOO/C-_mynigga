/*
  judul : membuat sebuah sistem parkir kendaraan 
  oleh  : rico andre pratama
  waktu : semarang, 4 maret 2023 - bertahap 

  program ini menyakup 
  - waktu masuk kendaran masuk parkir 
    -setiap kendaraan masuk mengambil waktu real time 
  - pengecekan daerah parkir mana yang kosong 
  - pemberian tarif parkir berdasarkan jam 
  - pengecekan data parkir 
    - masuk jam berapa 
    - keluar jam berapa
    - total waktu parkir
    - contoh 
      - parkir no 20 
        - masuk parkir jam berapa 
        - keluar parkir jam berapa 
        - total parkir berapa jam 
        - berapa tarif parkir 
  
*/

#include <iostream>
#include <chrono>
#include <ctime>
#include <string>
#include <vector>
#include <sstream>
#include<iomanip>
using namespace std; 


//kamus global


//membuat tipe data buatan 
  struct parkir{

    string noPlat;     //menyimpan no plat kendaraan 
    string jenisKendaraan;  //menyimpan jenis kendaraan yang masuk
    int noParkir;     //untuk menentukan no parkir kendaraan 
      
      //menyimpan waktu masuk dan keluar
    string waktuMasuk;  
    string waktuKeluar; 

  };

//vector untuk menyimpan data parkir 
vector<parkir> parkiran; 

void clearscreen(){
  system("cls");
}

//membuat fungsi untuk menampilkan waktu dan tanggal dan mengambil data waktu secara real time 
string waktu(){
  time_t sekarang = chrono::system_clock::to_time_t(chrono::system_clock::now());

  //mengubah tanggal ke dalam bentuk string 
  string w(30, '\0');
  strftime(&w[0], w.size(), "%H:%M:%S", localtime(&sekarang));
  return w; 
}

// //untuk mengurangi waktu --> belum menemukan solusi menghitung durasi waktu nya 
// chrono::duration<double> durasi(const string &waktuMasuk, const string &waktuKeluar){

//   tm tm_masuk = {};
//   tm tm_keluar = {};

//   //mengubah string waktu masuk dan keluar menjadi bentuk tm struct 
//   //strptime(waktuMasuk.c_str(), "%d-%m-%Y %H:%M:%S" , &tm_masuk); -> untuk compiler linux
//   istringstream ss_masuk(waktuMasuk);
//   ss_masuk >> get_time(&tm_masuk, "%H:%M:%S");
//     tm_masuk.tm_year = 1970 - 1900;
//     tm_masuk.tm_mon = 0;
//     tm_masuk.tm_mday = 1;

//   istringstream ss_keluar(waktuKeluar);
//   ss_keluar >> get_time(&tm_keluar, "%H:%M:%S");
//     tm_keluar.tm_year = 1970 - 1900;
//     tm_keluar.tm_mon = 0;
//     tm_keluar.tm_mday = 1;


//   time_t masuk = mktime(&tm_masuk);
//   time_t keluar = mktime(&tm_keluar);

//   auto p_masuk = chrono::system_clock::from_time_t(masuk);
//   auto p_keluar = chrono::system_clock::from_time_t(keluar);
  
//   auto data_waktu = p_keluar - p_masuk;
 
//   // int totaldetik = durasi_parkir.count();
//   //  if(totaldetik < 0){
//   //   totaldetik += 24 * 3600; 
//   // }
//   // int jam = totaldetik / 3600; 
//   // totaldetik %= 3600; 
//   // int menit = totaldetik /60;
//   // int detik = totaldetik % 60;

//   cout << "Durasi parkir : " << jam << " jam " << menit << " menit " << detik << " detik " << endl;
//   // auto total_detik = (jammasuk.count() * 3600) + (menit.count() * 60) + (detik.count());
//   // auto jam_durasi = chrono::duration_cast<chrono::hours>(chrono::seconds(total_detik / 3600));
//   // total_detik %= 3600; 
//   // auto menit_durasi = chrono::duration_cast<chrono::minutes>(chrono::seconds(total_detik));
//   // auto detik_durasi = chrono::duration_cast<chrono::seconds>(chrono::seconds(total_detik % 60));
//   // auto total_detik = (jammasuk.count() * 3600) + (menit.count() * 60) + ( detik.count() ); 
//   // auto jam_durasi = chrono::duration_cast<chrono::hours>(chrono::seconds (total_detik / 3600));
//   // total_detik %= 3600; 
//   // auto menit_durasi = chrono::duration_cast<chrono::minutes>(chrono::seconds (total_detik / 60 )); 
//   // auto detik_durasi = chrono::duration_cast<chrono::seconds>(chrono::seconds (total_detik % 60));


//   return data_waktu;
  
//   // chrono::seconds durasi = chrono::seconds(static_cast<long>(difftime(keluar,masuk))); 
//   // int total_second = durasi_durasi ;

//   // auto p_masuk = chrono::seconds(tm_masuk.tm_hour * 3600 + tm_masuk.tm_min * 60 + tm_masuk.tm_sec);
//   // auto p_keluar = chrono::seconds(tm_keluar.tm_hour * 3600 + tm_keluar.tm_min * 60 + tm_keluar.tm_sec);

//   // chrono::duration<int> delta = p_keluar - p_masuk; 
//   // int hour = total_second / 3600;
//   // total_second %= 3600; 
//   // int minute = total_second / 60; 
//   // total_second %= 60; 
//   // int second = total_second;
// }
int cari_parkir(vector <parkir>& parkiran, string& noPlat, parkir& data){

  for(int i = 0; i < parkiran.size(); i++){
    if(parkiran[i].noPlat == ""){
      return i; //jika ditemukan data parkir maka pencarian di hentikan dan mengembalikan nilai i sebagai pencarian 
    }
  }  

  return -1; //jika tidak ditemukan data

}

void masuk(parkir &data){

  cout << "silahkan masukkan data parkir :) " << endl; 
  cout << "plat nomor      : ";
  getline(cin, data.noPlat);
  cout << "jenis kendaraan : ";
  getline(cin, data.jenisKendaraan);
  data.waktuMasuk = waktu();
  // data.noParkir = parkiran.size();
  int no_parkir = parkiran.size(); 
    
  int lahan_parkir = cari_parkir(parkiran,data.noPlat,data);
  if( parkiran.empty() || lahan_parkir == -1){
    data.noParkir = no_parkir; 
    parkiran.push_back(data);
    cout << "Kendaraan terparkir di No parkir : " << no_parkir << endl;
  }else if(data.noPlat == "o"){
    parkiran[lahan_parkir].noPlat = data.noPlat;
    parkiran[lahan_parkir].waktuMasuk = data.waktuMasuk;
    parkiran[lahan_parkir].jenisKendaraan = data.jenisKendaraan;
    cout << "Kendaraan terparkir di No parkir : " << parkiran[lahan_parkir].noParkir << endl;
  }else{
    cout << "Tidak ada lahan parkir yang tersedia :( \n";
  }

}

void tampildata(parkir &data){

  cout << "No plat kendaraan : " << data.noPlat << endl; 
  cout << "jenis kendaraan   : " << data.jenisKendaraan << endl; 
  cout << "No Parkir         : " << data.noParkir << endl; 
  cout << "waktu check in    : " << data.waktuMasuk << endl; 
  cout << "Waktu check out   : " << data.waktuKeluar << endl;
}

//fungsi untuk keluarkan parkir
// int keluar_parkir(vector<parkir>& parkiran, string& noPlat, parkir& data ){
  
//   for(auto& data : parkiran){
//     if(data.noPlat == noPlat){

//       data.noPlat = ""; 
//       data.jenisKendaraan = ""; 
//       data.waktuMasuk = ""; 
//       data.waktuKeluar = "";
//       return;
//     }
//   }

// }

void keluar_kendaraan(vector<parkir>& parkiran, string &cari, parkir &data){
  for(auto data = parkiran.begin(); data != parkiran.end(); ++data){
    if(data ->noPlat.find(cari) !=string::npos){
      cout << "Data di temukan :) \n";
      data -> waktuKeluar = waktu();
      tampildata(*data);
      data ->noPlat = "o";
      data ->waktuKeluar = "o";
      data ->jenisKendaraan = "o"; 
      data ->waktuMasuk = "o";
      return; 
    }
  }
}



main(){
  parkir data; //untuk menyimpan data parkir 
  string jawaban; 
  while(true){

    cout << "Selamat Datang Di parkir Tembalang " << endl; 
    cout << "Masuk \n" "keluar \n";
    cout << "jawaban : ";  
    getline(cin, jawaban);
      if(jawaban == "masuk"){
        
        //clearscreen(); 
        cout << endl; 
        masuk(data);
        cout << endl;
      } else if(jawaban == "keluar"){
        
          string cari;
          // clearscreen(); 
          cout << "Plat kendaraan : " ; 
          getline(cin, cari);
          keluar_kendaraan(parkiran, cari,data);
          string jawab; 
          // cout << "kembali ke menu awal : ";
          // getline(cin, jawab);
          // cin.ignore(); 
          // if(jawab == "iya"){
          //   clearscreen(); 
          // }

        }else{
        cout << "perintah tidak valid :(" << endl ; 
      }
  } 

  


}