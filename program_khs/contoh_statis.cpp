// Program Sederhana Kartu hasil studi dengan menentukan format tabel dari modul iomanip secara statis
// Fauzi Ardiansyah
// Semarang


#include<iostream>
//modul tambahan untuk menjalankan code format tabel
#include<iomanip>
using namespace std;


//kamus


//diskripsi
main(){

        cout << setfill('-') << setw(60) << '-' << setfill(' ') << endl;

        cout << setw(19) << right << "Mata Kuliah" << setw(20) << right << "SKS" << setw(16) << right << "Nilai" <<endl;

        cout << setfill('-') << setw(60) << '-' << setfill(' ') << endl;
            // isi tabel utama

            cout << setw(30) << left << "Dasar Pemrograman" << setw(1) << "|" << setw(7) << right << "4" <<setw(8)<<right<<"|"<< setw(7) << right<< "A" <<setw(7)<<right<<"|" << endl;

            cout << setw(30) << left << "Pemrograman Web Lanjut" << setw(1) << "|" << setw(7) << right << "2" <<setw(8)<<right<<"|"<< setw(7) << right<< "A" <<setw(7)<<right<<"|" << endl;

            cout << setw(30) << left << "Dasar Komputasi" << setw(1) << "|" << setw(7) << right << "3" <<setw(8)<<right<<"|"<< setw(7) << right<< "A" <<setw(7)<<right<<"|" << endl;

            cout << setw(30) << left << "Keterampilan Interpersonal" << setw(1) << "|" << setw(7) << right << "2" <<setw(8)<<right<<"|"<< setw(7) << right<< "A" <<setw(7)<<right<<"|" << endl;

            cout << setw(30) << left << "Fisika 1" << setw(1) << "|" << setw(7) << right << "4" <<setw(8)<<right<<"|"<< setw(7) << right<< "A" <<setw(7)<<right<<"|" << endl;

            cout << setw(30) << left << "Algoritma Dan Struktur Data" << setw(1) << "|" << setw(7) << right << "4" <<setw(8)<<right<<"|"<< setw(7) << right<< "A" <<setw(7)<<right<<"|" << endl;

            cout << setfill('-') << setw(60) << '-' << setfill(' ') << endl;

    }

