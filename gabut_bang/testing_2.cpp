#include<iostream> 
#include<iomanip>
#include<string>
#include<chrono>
#include<ctime>
#include<sstream>
using namespace std;

// const int MAX_MEMBER = 3;
// int jumlah_data;

// struct formulir {
//     string nama, tanggal, alamat, email, no_tlp, no_ktp;
//     int berat_badan, tinggi_badan, umur;
// };

// void garis() {
//     int x = 0;
//     while (x < 60) {
//         cout << "=";
//         x++;
//     }
//     cout << endl;
// }

// formulir member[MAX_MEMBER];



// void carimember(formulir member[MAX_MEMBER], int jumlah_data, const string &mencarinama) {
//     bool terdaftar = false;

//     if (!mencarinama.empty()) {
//         for (int i = 0; i < jumlah_data; i++) {
//             if (member[i].nama.find(mencarinama) != string::npos) {
//                 cout << "Data ditemukan!! \n";
//                 cout << "nama: " << member[i].nama << endl;
//                 cout << "umur: " << member[i].umur << endl;
//                 cout << "berat badan: " << member[i].berat_badan << endl;
//                 cout << "tinggi badan: " << member[i].tinggi_badan << endl;
//                 cout << "alamat: " << member[i].alamat << endl;
//                 cout << "no-telpon: " << member[i].no_tlp << endl;
//                 cout << "no-ktp: " << member[i].no_ktp << endl;
//                 cout << "e-mail: " << member[i].email << endl;
//                 terdaftar = true;
//                 break;
//             }
//         }
//     }

//     if (!terdaftar) {
//         cout << "Data tidak ditemukan untuk nama: " << mencarinama << endl;
//         cout << "Data anda tidak terdaftar!! \n";
//     }
// }

// void pendaftaran_member(formulir member[MAX_MEMBER], int &jumlah_data) {
//     formulir data;
    
//     cout << "MOHON ISI DATA YANG DIMINTA !!\n";
//     garis();
//     cout << "Formulir pendaftaran !! \n";
//     garis();
//     cout << "Masukkan nama: ";
//     getline(cin, data.nama);
//     cout << "Masukkan umur: ";
//     cin >> data.umur;
//     cout << "Masukkan berat: ";
//     cin >> data.berat_badan;
//     cout << "Masukkan tinggi: ";
//     cin >> data.tinggi_badan;
//     cin.ignore();
//     cout << "Masukkan alamat: ";
//     getline(cin, data.alamat);
//     cout << "Masukkan no-telpon anda: ";
//     getline(cin, data.no_tlp);
//     cout << "Masukkan no-ktp anda: ";
//     getline(cin, data.no_ktp);
//     cout << "Masukkan e-mail anda: ";
//     getline(cin, data.email);

//     garis();
//     cout << "Pastikan semua sudah terisi !! " << endl;
//     garis();

//     if (jumlah_data < MAX_MEMBER) {
//         member[jumlah_data] = data;
//         jumlah_data++;
//         cout << "Selamat data anda sudah kami input \n";
//     } else {
//         cout << "Data sudah penuh, tidak dapat menambahkan data baru \n";
//     }
// }

// int jumlahpengunjung;
// formulir data_pengunjung[MAX_MEMBER];
// void pengunjung(formulir data_pengunjung[MAX_MEMBER], int &jumlahpengunjung, formulir member[MAX_MEMBER], int jumlah_data) {
//     formulir data;
//     string daftar;

//     cout << "HAI ANDA BELUM MEMBER \n";
//     cout << "Apakah anda ingin menjadi anggota member ? \n";
//     cout << "-DAFTAR :)\n";
//     cout << "-Tidak :( \n";
//     cout << "Jawaban: ";
//     cin >> daftar;
//     cin.ignore();
    
//     if (daftar == "daftar") {
//         pendaftaran_member(member, jumlah_data);
//     } else if (daftar == "tidak") {
//         cout << "MOHON ISI DATA YANG DIMINTA !!\n";
//         garis();
//         cout << "Masukkan nama: ";
//         getline(cin, data.nama);
//         cout << "Masukkan alamat: ";
//         getline(cin, data.alamat);
//         cout << "Masukkan no-telpon anda: ";
//         getline(cin, data.no_tlp);

//         if (jumlahpengunjung < MAX_MEMBER) {
//             data_pengunjung[jumlahpengunjung] = data;
//             jumlahpengunjung++;
//             cout << "\nSelamat data anda sudah kami input \n";
//         } else {
//             cout << "Data sudah penuh, tidak dapat menambahkan data baru \n";
//         }
//     } else {
//         cout << "Pilihan tidak valid\n";
//         cout << "Matane picek ta, iso ndelok po ora!!!\n";
//     }
// }

// void pembukaan(formulir member[MAX_MEMBER], int jumlah_data) {
//     string pilihan;
//     string mencarinama;

//     do {
//         cout << "SELAMAT DATANG DI MAK GYM :) \n";
//         garis();
//         cout << "Apakah anda seorang: \n";
//         cout << "-member \n";
//         cout << "-pengunjung \n";
//         cout << "Masukkan Pilihan Anda: ";
//         cin >> pilihan;
//         cin.ignore();

//         if (pilihan == "member") {
//             cout << "Cek Data Member \n";
//             garis();
//             cout << "Masukkan nama yang ingin di cek: ";
//             getline(cin, mencarinama);
//             cout << "Tunggu sebentar :)" << endl;
//             carimember(member, jumlah_data, mencarinama);
//         } else if (pilihan == "pengunjung") {
//             // Memanggil fungsi pengunjung dan melewatkan array data_pengunjung
//             pengunjung(data_pengunjung, jumlahpengunjung, member, jumlah_data);
//         } else {
//             cout << "Opsi yang anda ketik tidak ada\n";
//             cout << "Silahkan ketik opsi yang ada !!!\n";
//         }

//         // Tambahkan pilihan untuk kembali ke halaman utama atau keluar dari loop
//         cout << "Apakah Anda ingin kembali ke halaman utama? (y/n): ";
//         char kembali;
//         cin >> kembali;

//         if (kembali == 'y') {
//             // Keluar dari loop jika tidak ingin kembali
//             pembukaan(member, jumlah_data);
//         }else if(kembali == 'n'){
//             break;
//         }
//         else{
//             break;
//         }
//     } while (true);
// }


// string waktu() {
//     auto sekarang = chrono::system_clock::now();
//     auto now_time_t = chrono::system_clock::to_time_t(sekarang);
//     tm* time_info = localtime(&now_time_t);

//     stringstream ss;
//     ss << put_time(time_info, "%d %m %Y");  // Menggunakan format "DD MM YYYY"
//     return ss.str();
// }

// tm stringToTm(const string& tanggal) {
//     tm tm = {};
//     stringstream ss(tanggal);
//     ss >> get_time(&tm, "%d %m %Y");  // Menggunakan format yang sama "DD MM YYYY"
   
//     tm.tm_isdst = -1;  // Daylight saving time flag
//     return tm;
// }

// string tmToString(const tm& time_info) {
//     stringstream ss;
//     ss << put_time(&time_info, "%d %m %Y");  // Menggunakan format "DD MM YYYY"
//     return ss.str();
// }

// string hitungTigaBulanKedepan(const string& tanggal) {
//     tm tm1 = stringToTm(tanggal);
    
//     tm1.tm_mon += 3;  // Menambah 3 bulan
    
//     // Memastikan bahwa bulan dan tahun yang dihasilkan valid
//     mktime(&tm1);

//     return tmToString(tm1);
// }




int main() {
   
    // Mengambil tanggal saat ini
        // string tanggalSekarang = waktu();
        // cout << "Tanggal sekarang: " << tanggalSekarang << endl;

        // // Menghitung tanggal tiga bulan ke depan
        // string tigaBulanKedepan = hitungTigaBulanKedepan(tanggalSekarang);
        // cout << "Tiga bulan ke depan: " << tigaBulanKedepan << endl;
    // percobaan memasukkan data secara manual
    /*
        member[0].nama = "rico andre pratama";
        member[0].umur = 16;
        member[0].berat_badan = 50;
        member[0].tinggi_badan = 168;
        member[0].alamat = "semarang, tembalang sumurboto";
        member[0].no_tlp = "0237402347439";
        member[0].no_ktp = "19672-4369023";
        member[0].email = "daniel.ambatukan@gmail.com";
   
    */

    // pembukaan(member, jumlah_data);

}
