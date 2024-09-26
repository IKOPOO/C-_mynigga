// #include <iostream>
// #include <iomanip>
// #include <string>
// #include <vector>

// using namespace std;

// const int MAX_MEMBER = 3;

// // Membuat tipe data bentukan untuk formulir pengisian data
// struct formulir {
//     string nama, tanggal, alamat, email, no_tlp, no_ktp;
//     int berat_badan, tinggi_badan, umur;
// };

// // Vector untuk menaruh data member

// // Vector untuk menyimpan data pengunjung
// vector<formulir> data_pengunjung;

// // Untuk menampilkan garis pemisah agar tampilan tidak terlalu amburadul
// void garis() {
//     int x = 0;
//     while (x < 60) {
//         cout << "=";
//         x = x + 1;
//     }
//     cout << endl;
// }
// vector <formulir> member;
// int jumlah_data;
// // Fungsi untuk mencari nama member
// void carimember(const vector<formulir>& member, const string& mencarinama) {
//     bool terdaftar = false;
//     for (const auto& formulir : member) {
//         if (formulir.nama == mencarinama) {
//             cout << "Data ditemukan!! \n";
//             cout << "Nama: " << formulir.nama << endl;
//             cout << "Umur: " << formulir.umur << endl;
//             cout << "Berat Badan: " << formulir.berat_badan << endl;
//             cout << "Tinggi Badan: " << formulir.tinggi_badan << endl;
//             cout << "Alamat: " << formulir.alamat << endl;
//             cout << "No. Telpon: " << formulir.no_tlp << endl;
//             cout << "No. KTP: " << formulir.no_ktp << endl;
//             cout << "E-mail: " << formulir.email << endl;
//             terdaftar = true;
//             break;
//         }
//     }
//     if (!terdaftar) {
//         cout << "Data tidak ditemukan untuk nama: " << mencarinama << endl;
//         cout << "Data anda tidak terdaftar!! \n";
//     }
// }

// // Fungsi untuk pendaftaran member
// void pendaftaran_member(vector<formulir>& member) {
//     formulir data;
//     // Mengisi data formulir pendaftaran member
//     cout << "MOHON ISI DATA YANG DIMINTA !!\n";
//     garis();
//     cout << "formulir pendaftaran !! \n";
//     garis();
//     cout << "masukkan nama : ";
//     getline(cin, data.nama);
//     cout << "masukkan umur : ";
//     cin >> data.umur;
//     cout << "masukkan berat : ";
//     cin >> data.berat_badan;
//     cout << "masukkan tinggi : ";
//     cin >> data.tinggi_badan;
//     cin.ignore(); // Untuk mengabaikan karakter newline setelah membaca tipe data non-string
//     cout << "masukkan alamat : ";
//     getline(cin, data.alamat);
//     cout << "masukkan no-telpon anda : ";
//     getline(cin, data.no_tlp);
//     cout << "masukkan no-ktp anda : ";
//     getline(cin, data.no_ktp);
//     cout << "masukkan e-mail anda : ";
//     getline(cin, data.email);
//     garis();
//     cout << "Pastikan semua sudah terisi !! " << endl;
//     garis();
//     cout << "Selamat data anda sudah terinput !!" << endl;
//     member.push_back(data);
// }

// int jumlahpengunjung;
// // Prosedur untuk mengisi data jika ada pengunjung/single visit
// void pengunjung(vector<formulir>& data_pengunjung, int& jumlahpengunjung,vector<formulir>& member, int& jumlah_data) {
//     formulir data_kunjung;
//     string daftar;

//     // Penawaran masuk member atau tidak
//     cout << "HAI ANDA BELUM MEMBER \n";
//     cout << "Apakah anda ingin menjadi anggota member ? \n";
//     cout << "-DAFTAR :)\n";
//     cout << "-Tidak :( \n";
//     cout << " jawaban : ";
//     cin >> daftar;
//     cin.ignore();
//     if (daftar == "daftar") {
//         // Memanggil prosedur pendaftaran member
//         pendaftaran_member(member);
//     } else if (daftar == "tidak") {
//         // Mengisi data formulir pengunjung
//         cout << "MOHON ISI DATA YANG DIMINTA !!\n";
//         garis();
//         cout << "masukkan nama : ";
//         getline(cin, data_kunjung.nama);
//         cout << "masukkan alamat : ";
//         getline(cin, data_kunjung.alamat);
//         cout << "masukkan no-telpon anda : ";
//         getline(cin, data_kunjung.no_tlp);

//         data_pengunjung.push_back(data_kunjung);
//         jumlahpengunjung++;
//     } else {
//         cout << "Pilihan tidak tersedia!!\n";
//         cout << "MATANE PICEK TA, ISO NDELOK PO ORA!!!\n";
//     }
// }

// // Deskripsi
// int main() {
//     while (true) {
//         string pilihan;
//         string mencarinama;

//         // Memanggil prosedur pembukaan
//         cout << "SELAMAT DATANG DI MAK GYM :) \n";
//         garis();
//         cout << "Apakah anda seorang : \n";
//         cout << "-member \n";
//         cout << "-pengunjung \n";
//         cout << "Masukan Pilihan Anda : ";
//         cin >> pilihan;
//         cin.ignore();

//         if (pilihan == "member") {
//             cout << "Cek Data Member \n";
//             garis();
//             cout << "Masukkan nama yang ingin di cek : ";
//             getline(cin, mencarinama);
//             cout << "Tunggu sebentar :)" << endl;
//             carimember(member, mencarinama);
//         } else if (pilihan == "pengunjung") {
//             pengunjung(data_pengunjung, jumlahpengunjung, member, jumlah_data);
//         } else {
//             cout << "Opsi yang anda ketik tidak ada\n";
//             cout << "Silahkan ketik opsi yang ada !!!\n";
//         }

//         cout << "Kembali ke menu utama (ya/tidak): ";
//         string kembali;
//         cin >> kembali;

//         if (kembali == "tidak") {
//             break;
//         }
//     }

//     return 0;
// }

#include <iostream>
#include <chrono>
#include <ctime>
#include <string>
#include <sstream>
#include <iomanip>
#include <thread>

using namespace std;

// // Fungsi untuk mengembalikan waktu sebagai string
// string waktuString() {
//     time_t sekarang = chrono::system_clock::to_time_t(chrono::system_clock::now());

//     // Mengubah tanggal ke dalam bentuk string 
//     string w(30, '\0');
//     strftime(&w[0], w.size(), "%H:%M:%S", localtime(&sekarang));
//     w.erase(w.find('\0')); // Menghapus karakter null
//     return w; 
// }

// // Fungsi untuk mengubah waktu string ke detik total
// int waktuKeDetik(const string &waktuStr) {
//     int h, m, s;
//     char delimiter;
//     stringstream ss(waktuStr);
//     ss >> h >> delimiter >> m >> delimiter >> s;
//     return h * 3600 + m * 60 + s;
// }
// std::string getCurrentTime() {
//     auto now = std::chrono::system_clock::now();
//     auto now_time_t = std::chrono::system_clock::to_time_t(now);
//     std::string current_time = std::ctime(&now_time_t); // Convert time_t to string
//     current_time.pop_back(); // Remove newline character from ctime result
//     return current_time;
// }

// std::string getCurrentTimeFormatted(){
//     auto now = std::chrono::system_clock::now();
//     auto now_time_t = std::chrono::system_clock::to_time_t(now);
//     std::tm* time_info = std::localtime(&now_time_t);
//     std::stringstream ss;
//     ss << std::put_time(time_info, "%H:%M:%S %d/%m/%y");
//     return ss.str();
// }

// // Fungsi untuk mengonversi string waktu ke std::tm
// std::tm stringToTm(const std::string& timeStr) {
//     std::tm tm = {};
//     std::istringstream ss(timeStr);
//     ss >> std::get_time(&tm, "%H:%M:%S %d/%m/%y");
//     return tm;
// }

// // Fungsi untuk mengonversi std::tm ke std::chrono::system_clock::time_point
//  std::chrono::system_clock::time_point tmToTimePoint(const std::tm& tm) {
//     std::time_t timeT = std::mktime(const_cast<std::tm*>(&tm));
//     return std::chrono::system_clock::from_time_t(timeT);
// }

// //fungsi mengubah waktu real time yang diambil ke dalam bentuk detik
// int waktu_detik(const string  &waktustr){
//   int j, m, d;
//   char delimiter; 

//   // Menggunakan stringstream untuk memecah string waktu menjadi jam, menit, dan detik
//   stringstream ss(waktustr);
//   ss >> j >> delimiter >> m >> delimiter >> d;

//   return j * 3600 + m * 60 + d;

// }


//menghitung durasi waktu parkir
// int hitung_durasi(const string &waktuMasuk, const string &waktuKeluar){
  
//   return waktuKeluar - waktuMasuk;
// }
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

string waktu(){
  //fungsi ini mengambil waktu saat ini dari sistem 
  auto sekarang = chrono::system_clock::now(); 
  //baris kode ini untuk mengkonversi time_point yang diambil sebelumnnya ke dalam bentuk time_t
  auto now_time_t = chrono::system_clock::to_time_t(sekarang);
  //mengkonversi time_t ke dalam std::tm yang merupakan pointer ke struc std::tm yang menyimpan struktur waktu
  //dalam format yang lebih terperinci 
  tm* time_info = localtime(&now_time_t); 

  //mengubah ke dalam format yang diingin kan 
  stringstream ss; 
  ss << put_time(time_info, "%H:%M:%S %d %B %Y");
  return ss.str();
}

//fungsi untuk mengkonversi string waktu ke dalam std::tm
tm stringToTm(const string& timeStr){
  tm tm = {}; 
  istringstream ss(timeStr); 
  ss >> get_time(&tm, "%H:%M:%S %d %B %Y"); 
  if(ss.fail()){
    cout << "gagal konversi " << endl; 
  }
  return tm; 
}

//fungsi untuk konversi std::tm ke std::chrono::system_clock::time_point
chrono::system_clock::time_point tmToTimePoint(const tm& tm){
  time_t timeT = mktime(const_cast<std::tm*>(&tm));
  return chrono::system_clock::from_time_t(timeT);
}

//fungsi mengurangi waktu 
void durasi(string masuk,string keluar){

  tm tm1 = stringToTm(masuk); 
  tm tm2 = stringToTm(keluar); 

    cout << "Parsed waktu masuk: " << put_time(&tm1, "%H:%M:%S %d/%m/%Y") << endl;
    cout << "Parsed waktu keluar: " << put_time(&tm2, "%H:%M:%S %d/%m/%Y") << endl;


  auto timepoint1 = tmToTimePoint(tm1); 
  auto timepoint2 = tmToTimePoint(tm2);

    // time_t tp1 = chrono::system_clock::to_time_t(timepoint1);
    // time_t tp2 = chrono::system_clock::to_time_t(timepoint2);
    // cout << "Timepoint waktu masuk: " << ctime(&tp1);
    // cout << "Timepoint waktu keluar: " << ctime(&tp2);

  auto duration = chrono::duration_cast<chrono::seconds>(timepoint2 - timepoint1); 
  cout << "durasi parkir adalah : " << duration.count() << " detik" << endl; 

}

int main() {
    // // Mengambil waktu awal dalam format string
    // string waktuA_str = waktuString();
    // cout << "Waktu awal: " << waktuA_str << endl;

    // // Tunda eksekusi untuk beberapa detik
    // this_thread::sleep_for(chrono::seconds(5));

    // // Mengambil waktu akhir dalam format string
    // string waktuB_str = waktuString();
    // cout << "Waktu akhir: " << waktuB_str << endl;

    // // Mengubah string waktu ke detik total
    // int waktuA_detik = waktuKeDetik(waktuA_str);
    // int waktuB_detik = waktuKeDetik(waktuB_str);

    // // Menghitung selisih waktu dalam detik
    // int selisih_detik = waktuB_detik - waktuA_detik;

    // // Mencetak selisih waktu dalam detik
    // cout << "Selisih waktu: " << selisih_detik << " detik" << endl;
   
    // std::string waktuMasuk = getCurrentTime();
    // std::cout << "Waktu Masuk: " << waktuMasuk << std::endl;
    // auto const now = std::chrono::system_clock::now();
    // std::time_t newt = std::chrono::system_clock::to_time_t(now);
    // cout << newt << endl; 

    // const auto now = std::chrono::system_clock::now();
    // const std::time_t t_c = std::chrono::system_clock::to_time_t(now);
    // std::cout << "The system clock is currently at " << std::ctime(&t_c);

        

// Fungsi untuk mendapatkan waktu saat ini dalam format "HH:MM:SS DD/MM/YY"


    // Mendapatkan dua waktu sebagai contoh
    // std::string timeStr1 = getCurrentTimeFormatted();
    // std::this_thread::sleep_for(std::chrono::seconds(10)); // Simulasi jeda waktu 10 detik
    // std::string timeStr2 = getCurrentTimeFormatted();

    // // Mengonversi string waktu ke std::tm
    // std::tm tm1 = stringToTm(timeStr1);
    // std::tm tm2 = stringToTm(timeStr2);

    // // Mengonversi std::tm ke std::chrono::system_clock::time_point
    // auto timePoint1 = tmToTimePoint(tm1);
    // auto timePoint2 = tmToTimePoint(tm2);

    // // Menghitung durasi antara dua waktu
    // auto duration = std::chrono::duration_cast<std::chrono::seconds>(timePoint2 - timePoint1);

    // // Menampilkan hasil
    // std::cout << "Waktu masuk: " << timeStr1 << std::endl;
    // std::cout << "Waktu keluar: " << timeStr2 << std::endl;
    // std::cout << "Durasi: " << duration.count() << " detik" << std::endl;

    // return 0;
    string iya; 
    string masuk,keluar; 
    while(true){
        
        cout << "ingin masuk : " ; 
        cin >> iya; 
        if(iya == "masuk"){
            masuk = waktu(); 

        }else if(iya == "keluar"){
            keluar = waktu();
            
        }else if(iya == "hitung") {
            durasi(masuk,keluar);
            break; 
        }else{
            cout << "input tidak valid " << endl; 
        }

    }

}


