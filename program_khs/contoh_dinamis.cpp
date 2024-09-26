// Program Sederhana Kartu hasil studi dengan menentukan format tabel dari modul iomanip secara Dinamis
// Fauzi Ardiansyah
// Semarang


#include<iostream>
//modul tambahan untuk menjalankan fungsi getline dan system("cls")
#include<stdlib.h>
//modul tambahan untuk menjalankan code format tabel
#include<iomanip>
#include<string> 
using namespace std;


//kamus
string matkul[100];
char sks[100],skor[100];
int jumlah;
int x = 0;
//diskripsi
main(){

    cout << "Berapa Jumlah Matkul yang ingin anda input?"; cin >>jumlah;

    //clear screen
    system("cls");

    //mengabaikan perintah input sebelumnya untuk mengatasi bug input menggunakan getline
    cin.ignore();

    //looping berdasarkan dari nilai jumlah yang diinputan
    while(x<jumlah){
        cout << "Masukkan Mata Kuliah: "; getline(cin,matkul[x]);
        cout << "Masukkan SKS: "; cin>>sks[x];
        cout << "Masukkan Skor Huruf: "; cin>>skor[x];
        //mengabaikan perintah input sebelumnya untuk mengatasi bug input menggunakan getline
        cin.ignore();
        x = x + 1;
    }

    //clear screen
    system("cls");

    //menampilkan output dari hasil inputan yang sudah disesuaikan format tabel nya
    cout << setfill('-') << setw(60) << '-' << setfill(' ') << endl;

    cout << setw(19) << right << "Mata Kuliah" << setw(20) << right << "SKS" << setw(16) << right << "Nilai" <<endl;

    cout << setfill('-') << setw(60) << '-' << setfill(' ') << endl;

    //set nilai x menjadi 0
    x=0;

    while(x<jumlah){
    // isi tabel utama
        cout << setw(30) << left << matkul[x]<< setw(1) << "|" << setw(7) << right << sks[x] <<setw(8)<<right<<"|"<< setw(7) << right<< skor[x] <<setw(7)<<right<<"|" << endl;
        cout << setfill('-') << setw(60) << '-' << setfill(' ') << endl;
        x = x + 1;
    }

}
