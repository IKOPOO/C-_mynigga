#include<iostream> 
#include<iomanip>
#include<string>
using namespace std;

const int MAX_MEMBER = 3;

struct formulir {
    string nama, tanggal, alamat, email, no_tlp, no_ktp;
    int berat_badan, tinggi_badan, umur;
};

void garis() {
    int x = 0;
    while (x < 60) {
        cout << "=";
        x++;
    }
    cout << endl;
}

formulir member[MAX_MEMBER];

int jumlah_data;

void quicksort(formulir member[], int low, int high) {
    int i = low, j = high;
    string pivot = member[(low + high) / 2].nama;

    while (i <= j) {
        while (member[i].nama < pivot)
            i++;
        while (member[j].nama > pivot)
            j--;
        if (i <= j) {
            swap(member[i], member[j]);
            i++;
            j--;
        }
    }

    if (low < j)
        quicksort(member, low, j);
    if (i < high)
        quicksort(member, i, high);
}

void carimember(formulir member[], int jumlah_data, const string &mencarinama) {
    int low = 0, high = jumlah_data - 1;
    bool terdaftar = false;

    while (low <= high) {
        int mid = (low + high) / 2;
        if (member[mid].nama == mencarinama) {
            cout << "Data di temukan!! \n";
            cout << "nama : " << member[mid].nama << endl;
            cout << "umur : " << member[mid].umur << endl;
            cout << "berat badan : " << member[mid].berat_badan << endl;
            cout << "tinggi badan : " << member[mid].tinggi_badan << endl;
            cout << "alamat : " << member[mid].alamat << endl;
            cout << "no-telpon : " << member[mid].no_tlp << endl;
            cout << "no-ktp : " << member[mid].no_ktp << endl;
            cout << "e-mail : " << member[mid].email << endl;
            terdaftar = true;
            break;
        } else if (member[mid].nama < mencarinama) {
            low = mid + 1;
        } else {
            high = mid - 1;
        }
    }

    // kondisi jika tidak di temukan
    if (!terdaftar) {
        cout << "data tidak di temukan untuk nama : " << mencarinama << endl;
        cout << "data anda tidak terdaftar!! \n";
    }
}


void pendaftaran_member(formulir member[MAX_MEMBER], int &jumlah_data) {
    formulir data;
    
    cout << "MOHON ISI DATA YANG DIMINTA !!\n";
    garis();
    cout << "Formulir pendaftaran !! \n";
    garis();
    cout << "Masukkan nama: ";
    getline(cin, data.nama);
    cout << "Masukkan umur: ";
    cin >> data.umur;
    cout << "Masukkan berat: ";
    cin >> data.berat_badan;
    cout << "Masukkan tinggi: ";
    cin >> data.tinggi_badan;
    cin.ignore();
    cout << "Masukkan alamat: ";
    getline(cin, data.alamat);
    cout << "Masukkan no-telpon anda: ";
    getline(cin, data.no_tlp);
    cout << "Masukkan no-ktp anda: ";
    getline(cin, data.no_ktp);
    cout << "Masukkan e-mail anda: ";
    getline(cin, data.email);

    garis();
    cout << "Pastikan semua sudah terisi !! " << endl;
    garis();

    if (jumlah_data < MAX_MEMBER) {
        member[jumlah_data] = data;
        jumlah_data++;
        cout << "Selamat data anda sudah kami input \n";
    } else {
        cout << "Data sudah penuh, tidak dapat menambahkan data baru \n";
    }
}

int jumlahpengunjung;
formulir data_pengunjung[MAX_MEMBER];
void pengunjung(formulir data_pengunjung[MAX_MEMBER], int &jumlahpengunjung, formulir member[MAX_MEMBER], int jumlah_data) {
    formulir data;
    string daftar;

    cout << "HAI ANDA BELUM MEMBER \n";
    cout << "Apakah anda ingin menjadi anggota member ? \n";
    cout << "-DAFTAR :)\n";
    cout << "-Tidak :( \n";
    cout << "Jawaban: ";
    cin >> daftar;
    cin.ignore();
    
    if (daftar == "daftar") {
        pendaftaran_member(member, jumlah_data);
    } else if (daftar == "tidak") {
        cout << "MOHON ISI DATA YANG DIMINTA !!\n";
        garis();
        cout << "Masukkan nama: ";
        getline(cin, data.nama);
        cout << "Masukkan alamat: ";
        getline(cin, data.alamat);
        cout << "Masukkan no-telpon anda: ";
        getline(cin, data.no_tlp);

        if (jumlahpengunjung < MAX_MEMBER) {
            data_pengunjung[jumlahpengunjung] = data;
            jumlahpengunjung++;
            cout << "\nSelamat data anda sudah kami input \n";
        } else {
            cout << "Data sudah penuh, tidak dapat menambahkan data baru \n";
        }
    } else {
        cout << "Pilihan tidak valid\n";
        cout << "Matane picek ta, iso ndelok po ora!!!\n";
    }
}

void pembukaan(formulir member[MAX_MEMBER], int jumlah_data) {
    string pilihan;
    string mencarinama;

    cout << "SELAMAT DATANG DI MAK GYM :) \n";
    garis();
    cout << "Apakah anda seorang: \n";
    cout << "-member \n";
    cout << "-pengunjung \n";
    cout << "Masukkan Pilihan Anda: ";
    cin >> pilihan;
    cin.ignore();

    if (pilihan == "member") {
        cout << "Cek Data Member \n";
        garis();
        cout << "Masukkan nama yang ingin di cek: ";
        getline(cin, mencarinama);
        cout << "Tunggu sebentar :)" << endl;
        carimember(member, jumlah_data, mencarinama);
    } else if (pilihan == "pengunjung") {
        pengunjung(member, jumlah_data, data_pengunjung, jumlahpengunjung);
    } else {
        cout << "Opsi yang anda ketik tidak ada\n";
        cout << "Silahkan ketik opsi yang ada !!!\n";
    }
}

int main() {
    
    // percobaan memasukkan data secara manual
    member[0].nama = "rico andre pratama";
    member[0].umur = 16;
    member[0].berat_badan = 50;
    member[0].tinggi_badan = 168;
    member[0].alamat = "semarang, tembalang sumurboto";
    member[0].no_tlp = "0237402347439";
    member[0].no_ktp = "19672-4369023";
    member[0].email = "daniel.ambatukan@gmail.com";

    quicksort(member, 0 , jumlah_data - 1);

    pembukaan(member, jumlah_data);

    return 0;
}
