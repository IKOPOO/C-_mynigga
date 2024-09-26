// Muhammad Daniyal Haq
// aplikasi wong turu, buat belajar ADT
// in heaven
#include <iostream>
using namespace std;

// kamus
void ris(){ // fungsi garis males satu satu
    int w = 0;
    while(w <= 30){
        cout << "=";
        w = w + 1;
    }
    cout << endl;
}

struct WAKTU{ // structur waktu
    int j, m, d;
};

struct WAKTU tidur[2], bangun[2];
struct WAKTU DataW[2];
string nama[2];

// deskripsi
int main(){
    ris();
    cout << "Aplikasi berbandingan wong turu" << endl;
    ris();
    int x = 0;
    // START INPUT
    while(x < 2){ // loop input
        cout << "[*] input nama[" << x << "] yg tidur: ";
        cin >> nama[x];
        cout << "[*] input jam[" << x << "] tidur: ";
        cin >> tidur[x].j;
        cout << "[*] input menit[" << x << "] tidur: ";
        cin >> tidur[x].m;
        cout << "[*] input detik[" << x << "] tidur: ";
        cin >> tidur[x].d;
        ris();
        cout << "[*] input nama[" << x << "] yg bangun: ";
        cin >> nama[x];
        cout << "[*] input jam[" << x << "] bangun: ";
        cin >> bangun[x].j;
        cout << "[*] input menit[" << x << "] bangun: ";
        cin >> bangun[x].m;
        cout << "[*] input detik[" << x << "] bangun: ";
        cin >> bangun[x].d;
        ris();
        // KONVERSI KE DETIK
        int totalDD = (tidur[x].j * 3600) + (tidur[x].m * 60) + (tidur[x].d);
        int totalDP = (bangun[x].j * 3600) + (bangun[x].m * 60) + (bangun[x].d);
        //DataW[x].d = totalDD - totalDP;
        DataW[x].d = totalDP - totalDD; // KURANGI
        //cout << "[*] jaraknya adalah " << DataW[x].d << " detik." << endl;
        x = x + 1;
    }

    int y = 0;
    int datatidur[2];  
    int indeksTidurLama = 0;    // variabel buat nyimpan indeks orang yg kebo 
    int indeksTidurDuluan = 0; // variabel buat nyimpan indeks orang yg g insomnia
    int indeksBangunTerakhir = 0; // variabel buat nyimpan indeks orang yg bangun paling akhir 

    while(y < 2){ // loop output
        ris();
        cout << "\tData Wong turu ke " << y + 1 << endl;
        ris();
        cout << "[*] Array data nama[" << y << "]: " << nama[y] << endl;
        cout << "[*] Array data waktu[" << y << "]: " << DataW[y].d << " detik." << endl;
        ris();

        // bandingin waktu tidur dan nyimpan indeks kalo ada yg g insomnia
        if(tidur[y].j < tidur[indeksTidurDuluan].j || (tidur[y].j == tidur[indeksTidurDuluan].j && tidur[y].m < tidur[indeksTidurDuluan].m) || (tidur[y].j == tidur[indeksTidurDuluan].j && tidur[y].m == tidur[indeksTidurDuluan].m && tidur[y].d < tidur[indeksTidurDuluan].d)){
            indeksTidurDuluan = y;
        }

        // bandingin waktu tidur dan nyimpan indeks kalo ada yg insomnia
        if(DataW[y].d > DataW[indeksTidurLama].d)
        {
            indeksTidurLama = y;
            datatidur[y] = indeksTidurLama;
        }

        // bandingin waktu bangun dan nyimpan indeks kalo ada yg kebo
        if(bangun[y].j > bangun[indeksBangunTerakhir].j || (bangun[y].j == bangun[indeksBangunTerakhir].j && bangun[y].m > bangun[indeksBangunTerakhir].m) || (bangun[y].j == bangun[indeksBangunTerakhir].j && bangun[y].m == bangun[indeksBangunTerakhir].m && bangun[y].d > bangun[indeksBangunTerakhir].d)){
            indeksBangunTerakhir = y;
        }


        y = y + 1;
    }

    int z = 0;
    while(z < 2){
        int jam_tidur = DataW[z].d / 3600;
        int sisa_detik = DataW[z].d % 3600;
        int menit_tidur = sisa_detik / 60;
        DataW[z].j = jam_tidur;
        DataW[z].m = menit_tidur;
        z = z + 1;
    }

    ris();
    cout << "[*] Paling lama tidur adalah: " << nama[indeksTidurLama] << " dengan waktu " << DataW[indeksTidurLama].j << " jam " << DataW[indeksTidurLama].m << " menit" << endl;
    cout << "[*] Yang tidur duluan adalah: " << nama[indeksTidurDuluan] << " dengan jam tidur pada " << tidur[indeksTidurDuluan].j << ":" << tidur[indeksTidurDuluan].m << ":" << tidur[indeksTidurDuluan].d << endl;
    cout << "[*] Yang bangun paling akhir adalah: " << nama[indeksBangunTerakhir] << " dengan jam bangun pada " << bangun[indeksBangunTerakhir].j << ":" << bangun[indeksBangunTerakhir].m << ":" << bangun[indeksBangunTerakhir].d << endl;
    ris();
    return 0;
}
