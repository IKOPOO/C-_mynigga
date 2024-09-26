#include<iostream>
#include<string>
using namespace std;

// kamus 
struct waktu {
    int j, m, d;
};

struct waktu totalw[2];
struct waktu tidur[2];
struct waktu bangun[2];
string nama[2];

// fungsi konversi waktu tidur 
waktu konversit(int i) {
    // kamus 
    waktu totaltidur;
    // deskripsi 
    int totaldtk = (tidur[i].j * 3600) + (tidur[i].m * 60) + tidur[i].d;

    totaltidur.j = totaldtk / 3600;
    totaldtk %= 3600;
    totaltidur.m = totaldtk / 60;
    totaltidur.d = totaldtk % 60;

    return totaltidur;
}

int main() {
    // melakukan pengisian nama 
    cout << "program perbandingan waktu tidur \n";

    int y = 0;
    while (y < 2) {
        // memasukkan data nama dan waktu tidur
        cout << "memasukkan waktu tidur \n";
        cout << "masukkan nama orang ke " << y + 1 << " = "; cin >> nama[y];
        cout << "masukkan jam tidur = "; cin >> tidur[y].j;
        cout << "masukkan menit tidur = "; cin >> tidur[y].m;
        cout << "masukkan detik tidur = "; cin >> tidur[y].d;

        // memanggil fungsi konversi untuk mengkonversi 
        waktu totalTidur = konversit(y);

        // mengeluarkan hasil 
        cout << "Total tidur orang ke " << y + 1 << ": " << totalTidur.j << " jam, "
             << totalTidur.m << " menit, " << totalTidur.d << " detik\n";

        y = y + 1;
    }

    return 0;
}
