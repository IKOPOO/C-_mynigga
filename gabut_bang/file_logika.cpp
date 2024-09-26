/*
  daftar logika yang bisa di pake di projek lain 
*/
#include<iostream>
#include<vector>
#include<string>
#include<chrono>
#include<iomanip>
using namespace std; 

 string getTimeStr(){
    time_t now = chrono::system_clock::to_time_t(chrono::system_clock::now());

    string s(30, '\0');
    strftime(&s[0], s.size(), "%Y-%m-%d %H:%M:%S", localtime(&now));
    return s;
}

int main() {

  cout << "nama " << setw(22) << ":" << endl;
  cout << "umur " << setw(22) << ":" <<  endl; 
  cout << "berat badan " <<  setw(15) << ":" <<endl; 
  cout << "tinggi badan " << setw(14) << ":" << endl; 
  cout << "alamat " << setw(20) << ":" << endl; 
  cout << "no-telpon " << setw(17) << ":" << endl; 
  cout << "no-ktp " << setw(20) << ":" << endl; 
  cout << "e-mail " << setw(20) << ":" << endl;      
  cout << "no-kartu member " << setw(11) << ":" << endl;  
  cout << "tanggal mendaftar " << setw(9) << ":" << endl;
  cout << endl; 

    
    return 0;

    
}
/*




    // Mendapatkan waktu masuk pengguna
    std::string loginTime = getCurrentTime();
    std::cout << "Waktu masuk: " << loginTime << std::endl;

    // Simulasi aktivitas...
    // Tidak ada simulasi waktu tunggu di sini

    // Mendapatkan waktu keluar pengguna
    std::string logoutTime = getCurrentTime();
    std::cout << "Waktu keluar: " << logoutTime << std::endl;

    // Menghitung durasi berapa lama pengguna berada di dalam
    // Durasi langsung dihitung berdasarkan waktu masuk dan keluar
    std::chrono::system_clock::time_point start = std::chrono::system_clock::from_time_t(std::mktime(std::localtime(&now)));
    std::chrono::system_clock::time_point end = std::chrono::system_clock::from_time_t(std::mktime(std::localtime(&now)));
    std::chrono::duration<double> duration = end - start;
    std::cout << "Durasi: " << duration.count() << " detik" << std::endl;

 

void member_program(vector<formulir>& member,formulir &data,int &nomorkartu){
  
  //kamus lokal 
  string memilih,mencari;

  //deskripsi 
  cout << "Selamat Datang Di MAK GYM!! :)" << endl; 
  cout << "Menu : \n" "-Cek Anggota Member \n" "-Daftar Keanggotaan Member \n" "-Daftar Data Keanggotaan\n" "-Kembali Menu Awal \n"; 
  cout << "Masukkan pilihan : "; cin >> memilih;
  cin.ignore();
  garis();
  //kondisi untuk ketiga pilihan tersebut 

  if(memilih == "cek member"){

    cout << "Cek Data Member \n";
    garis(); 
    cout << "masukkan nama yang ingin di cek : ";
    getline(cin, mencari); 
    cout << "Tunggu sebentar :)\n"; 
    carimember(member,mencari);
    garis();
    
  }else if(memilih == "daftar member"){
    garis();
    pendaftaran_member(member,data,nomorkartu);
    garis();
  }else if(memilih == "daftar keanggotaan"){
    garis();
    cout << "Daftar Keanggotaan Member MAK GYM !! \n";
    for(const auto &data : member){
      tampildata(data);
      cout << endl;
    }
    garis();
  }else if(memilih == "kembali"){

  }
}
*/

/*
//membuat prosedur yang menjalankan tiga prosedur di bawah ini 
void utama(vector<formulir>& member, const formulir &data, int &nomorkartu ){
  //memanggil semua fungsi yang di butuhkan
  pendaftaran_member(member,data,nomorkartu);
  harga_member(data);

}

void harga_member(const formulir &data, int &jumlahpendaftar){

  //kamus lokal 
  int pilih;

  //deskripsi
  cout << "Daftar membership MAK GYM" << endl; 
  garis();
  cout << "pilihan 1 \n" "\t1(satu) bulan\n" "\t\t 445.000\n";
  single();
  cout << "pilihan 2 \n" "\t3(tiga) bulan\n" "\t\t 385.000\n";
  single();
  cout << "pilihan 3 \n" "\t6(enam) bulan\n" "\t\t 325.000\n";
  garis();

  cout << "Silahkan tentukan pilihan anda !!" << endl; 
  cout << "Pilih : " ; cin >> pilih;  
  //kondisi jika kita memilih dari tiga pilihan di atas 
  if(pilih == 1){
    single();
    cout << "anda memilih pilihan 1 " << endl; 
    tampildata(data);
    cout << endl;
    cout << "harga yang harus di bayar adalah : " << endl; 
    cout << "total harga : " << (pilihan_1 * jumlahpendaftar) << endl;
    single();
    //memanggil fungsi pembayaran 
    pembayaran((pilihan_1 * jumlahpendaftar));

  }else if(pilih == 2){

    cout << "anda memilih pilihan 2 " << endl; 
    tampildata(data);
    cout << endl;
    cout << "berikut harga yang harus anda bayar " << endl; 
    cout << "total harga : " << (pilihan_2 * jumlahpendaftar) << endl;
    single();
    //memanggil fungsi pembayaran 
    pembayaran((pilihan_2 * jumlahpendaftar));

  }else if(pilih == 3){

    cout << "anda memilih pilihan 3 " << endl; 
    tampildata(data);
    cout << endl;
    cout << "berikut harga yang harus anda bayar " << endl; 
    cout << "total harga : " << (pilihan_2 * jumlahpendaftar) << endl;
    single();
    //memanggil fungsi pembayaran 
    pembayaran((pilihan_3 * jumlahpendaftar));
    

  }else {
    cout << "pilihan yang anda masukan tidak tersedia !!" << endl; 
    cout << "MATANE PICEK TA RA ONO BLOQ " << endl; 
  }

  logika untuk menampilkan waktu 
  auto t = time(nullptr);
  auto tm = *localtime(&t);
  cout << put_time(&tm, "%d-%m-%Y %H-%M-%S") << endl;

 string nama_bulan[12] = {"Januari", "Februari", "Maret", "April","Mei", "Juni", "Juli", "Agustus","September", "Oktober", "November", "Desember"};


 //prsedur konversi tanggal 
//void waktu(int tgl, int bln, int thn){
  //kamus lokal 
  
  

  //deskripsi
  /*
  time_t waktusekarang = time(nullptr);

  tm *waktulokal = localtime(&waktusekarang);

  //mengkonversi waktu 
  tgl = waktulokal -> tm_mday; 
  bln = waktulokal -> tm_mon + 1;
  thn = waktulokal -> tm_year + 1900; 
  */
  

//}

//prosedur tampil waktu
/*
void tampilwaktu(){
  auto wkt = time(nullptr);
  auto wkt_skr = *localtime(&wkt);
  cout << put_time(&wkt_skr, "%d-%m-%Y") << endl;

}
//guyon 
 cout << "yakin ngga mau daftar member : " ; cin >> main; 
      while(true){
        
        if(main == "tidak"){
          cout << "beneran engga mauu, banyak lo benefitnya \n";
          cout << "mauu yaa daftar murah kok : "; cin >> main;
          if(main == "tidak"){
            cout << "ayoo dong mauu yaa =) : "; cin >> main; 
              if(main == "tidak"){
                cout << "ayoo dong mauu =) \n";
                cout << "koo ngga mau kenapa =( \n";
                cout << "mauu yaaaa =_( : "; cin >> main; 
                if(main == "iya"){
                  
                  utama(member,data,nomorkartu,jumlahpendaftar);
                }else if(main == "tidak"){
                    break;
                }else{
                  cout << "ra ono jirr \n";
                }
              } 
          }
      }
      
      }
*/
#include <iostream>
#include <vector>
#include <string>
using namespace std;

// Struktur data untuk menyimpan informasi kendaraan
struct Kendaraan {
    string nomor_plat;
    string jenis;
    string waktu_masuk;
    string waktu_keluar;
};

// Fungsi untuk mengeluarkan kendaraan berdasarkan nomor plat
void keluarkan_kendaraan(vector<Kendaraan> &lahan_parkir, const string &nomor_plat) {
    for (auto &kendaraan : lahan_parkir) {
        if (kendaraan.nomor_plat == nomor_plat) {
            kendaraan.nomor_plat = ""; // Kosongkan nomor plat
            return;
        }
    }
    cout << "Kendaraan dengan nomor plat " << nomor_plat << " tidak ditemukan di lahan parkir." << endl;
}

// Fungsi untuk mencari index lahan parkir yang kosong
int cari_lahan_parkir_kosong(const vector<Kendaraan> &lahan_parkir) {
    for (int i = 0; i < lahan_parkir.size(); ++i) {
        if (lahan_parkir[i].nomor_plat == "") {
            return i; // Kembalikan index lahan parkir yang kosong
        }
    }
    return -1; // Jika tidak ditemukan lahan parkir yang kosong
}

int main() {
    // Inisialisasi vector lahan parkir
    vector<Kendaraan> lahan_parkir = {
        {"AB 1234 CD", "Mobil", "08:00", "12:00"},
        {"", "", "", ""},
        {"XY 9876 ZW", "Mobil", "10:15", "11:30"}
    };

    // Contoh: Hapus kendaraan dengan nomor plat "AB 1234 CD"
    keluarkan_kendaraan(lahan_parkir, "AB 1234 CD");

    // Cari lahan parkir yang kosong
    int index_lahan_kosong = cari_lahan_parkir_kosong(lahan_parkir);
    if (index_lahan_kosong != -1) {
        cout << "Index " << index_lahan_kosong << " kosong dan siap untuk ditempati." << endl;
    } else {
        cout << "Tidak ada lahan parkir kosong." << endl;
    }

    return 0;
}
