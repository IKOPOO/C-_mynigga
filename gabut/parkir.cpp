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

//membuat fungsi untuk menampilkan waktu dan tanggal dan mengambil data waktu secara real time 
string waktu(){
  time_t sekarang = chrono::system_clock::to_time_t(chrono::system_clock::now());

  //mengubah tanggal ke dalam bentuk string 
  string w(30, '\0');
  strftime(&w[0], w.size(), "%H:%M:%S", localtime(&sekarang));
  return w; 
}

void masuk(parkir &data){

  cout << "silahkan masukkan data parkir :) " << endl; 
  cout << "plat nomor : ";
  getline(cin, data.noPlat);
  cout << "jenis kendaraan : ";
  getline(cin, data.jenisKendaraan);
  data.waktuMasuk = waktu();
  parkiran.push_back(data);
}

void tampildata(parkir &data){

  cout << "No plat kendaraan : " << data.noPlat << endl; 
  cout << "jenis kendaraan : " << data.jenisKendaraan << endl; 
  cout << "waktu check in : " << data.waktuMasuk << endl; 
  cout << "Waktu check out : " << data.waktuKeluar << endl;
}


void carikendaraan(vector<parkir>& parkiran, string &cari, parkir &data){
  for(auto& data : parkiran){
    if(data.noPlat.find(cari) !=string::npos){
      cout << "Data di temukan :) \n";
      data.waktuKeluar = waktu();
      tampildata(data);
      break; 
    }
  }
}

//untuk mengurangi waktu 
chrono::duration<double> durasi(const string &waktuMasuk, const string &waktuKeluar){

  tm tm_masuk = {};
  tm tm_keluar = {};

  //mengubah string waktu masuk dan keluar menjadi bentuk tm struct 
  //strptime(waktuMasuk.c_str(), "%d-%m-%Y %H:%M:%S" , &tm_masuk); -> untuk compiler linux
  istringstream ss_masuk(waktuMasuk);
  ss_masuk >> get_time(&tm_masuk, "%H:%M:%S");
    tm_masuk.tm_year = 1970 - 1900;
    tm_masuk.tm_mon = 0;
    tm_masuk.tm_mday = 1;

  istringstream ss_keluar(waktuKeluar);
  ss_keluar >> get_time(&tm_keluar, "%H:%M:%S");
    tm_keluar.tm_year = 1970 - 1900;
    tm_keluar.tm_mon = 0;
    tm_keluar.tm_mday = 1;


  time_t masuk = mktime(&tm_masuk);
  time_t keluar = mktime(&tm_keluar);

  auto p_masuk = chrono::system_clock::from_time_t(masuk);
  auto p_keluar = chrono::system_clock::from_time_t(keluar);
  
  auto data_waktu = p_keluar - p_masuk;
  auto jam = chrono::duration_cast<std::chrono::hours>(data_waktu);
  data_waktu -= chrono::duration_cast<std::chrono::hours>(jam);
  auto menit = chrono::duration_cast<std::chrono::minutes>(data_waktu);
  data_waktu -= chrono::duration_cast<std::chrono::minutes>(menit);
  auto detik = chrono::duration_cast<std::chrono::seconds>(data_waktu);

  cout << "Durasi : ";
  if (p_keluar < p_masuk) {
      jam = -jam; // Mengubah durasi menjadi positif
      menit = -menit;
      detik = -detik;
  }
  cout << jam.count() << " Jam " << abs(menit.count()) << " Menit " << abs(detik.count()) << " Detik " << endl;
  // auto jammasuk = chrono::duration_cast<chrono::hours>(data_waktu) / 3600;
  // data_waktu %= chrono::hours(1); 
  // auto menit = chrono::duration_cast<chrono::minutes>(data_waktu); 
  // data_waktu %= chrono::minutes(1);
  // auto detik = chrono::duration_cast<chrono::seconds>(data_waktu);

  // if(p_keluar < p_masuk){
  //   jammasuk += chrono::hours(24);
  // }

  // auto total_detik = (jammasuk.count() * 3600) + (menit.count() * 60) + (detik.count());
  // auto jam_durasi = chrono::duration_cast<chrono::hours>(chrono::seconds(total_detik / 3600));
  // total_detik %= 3600; 
  // auto menit_durasi = chrono::duration_cast<chrono::minutes>(chrono::seconds(total_detik));
  // auto detik_durasi = chrono::duration_cast<chrono::seconds>(chrono::seconds(total_detik % 60));
  // // auto total_detik = (jammasuk.count() * 3600) + (menit.count() * 60) + ( detik.count() ); 
  // // auto jam_durasi = chrono::duration_cast<chrono::hours>(chrono::seconds (total_detik / 3600));
  // // total_detik %= 3600; 
  // // auto menit_durasi = chrono::duration_cast<chrono::minutes>(chrono::seconds (total_detik / 60 )); 
  // // auto detik_durasi = chrono::duration_cast<chrono::seconds>(chrono::seconds (total_detik % 60));

  // cout << "Durasi : " << jam_durasi.count()  << " Jam " << menit_durasi.count()  << " Menit " << detik_durasi.count()  << " Detik " << endl; 

  return data_waktu;
  
  // chrono::seconds durasi = chrono::seconds(static_cast<long>(difftime(keluar,masuk))); 
  // int total_second = durasi_durasi ;

  // auto p_masuk = chrono::seconds(tm_masuk.tm_hour * 3600 + tm_masuk.tm_min * 60 + tm_masuk.tm_sec);
  // auto p_keluar = chrono::seconds(tm_keluar.tm_hour * 3600 + tm_keluar.tm_min * 60 + tm_keluar.tm_sec);

  // chrono::duration<int> delta = p_keluar - p_masuk; 
  // int hour = total_second / 3600;
  // total_second %= 3600; 
  // int minute = total_second / 60; 
  // total_second %= 60; 
  // int second = total_second;
   
  
  
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
        masuk(data);
      }else if(jawaban == "keluar"){
        string cari;
        cout << "Plat kendaraan : " ; 
        getline(cin, cari);
        carikendaraan(parkiran, cari,data);
        chrono::duration<double> durasi_parkir = durasi(data.waktuMasuk,data.waktuKeluar);
        string jawab;
        cout << "kembali : "; cin >> jawab; 
        if(jawab == "iya"){
          break; 
        }

      }else{
        cout << "perintah tidak valid :(" << endl ; 
      }
  } 

  


}