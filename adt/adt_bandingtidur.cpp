/*
  judul : membuat program perbandingan waktu tidur menggunakan fungsi, adt, array, dan prosedur 
  oleh  : rico 
  waktu : semarang, tembalang 11, februari 2024
*/
#include<iostream>
#include<iomanip>
using namespace std; 


//kamus 
int totaltidur, totalbangun;
//membuat tipe data bentukan untuk jam menit dan detik 
struct waktu {
  int j; //untuk jam 
  int m; //untuk menit 
  int d; //untuk detik 
};

struct waktu totalw[2]; //untuk menampung data tidur yang sudah di konversi 
struct waktu tidur[2];
struct waktu bangun[2];
string nama[2]; 

//prosedur untuk menampilkan garis 
void garis(){
  int y = 0;
  while(y < 55){ 
    cout << "*";
    y = y + 1;
  }
    cout << endl;
}

//prosedur untuk memasukkan data mulai dari nama, jam, menit, detik tidur dan bangun 
void input_data(){
  
  //kamus lokal 
  int y; 

  //deskripsi 
  //menggunakan perulangan untuk input data 
  y = 0; 
  while(y < 2){

    //input data tidur 
    cout << "input data tidur \n";
    cout << "masukkan nama orang ke-" << y + 1 << " = "; cin >> nama[y];
    cout << "masukkan jam = " ; cin >> tidur[y].j; 
    cout << "masukkan menit = "; cin >> tidur[y].m; 
    cout << "masukkan detik = "; cin >> tidur[y].d;

    garis();

    cout << "input data bangun \n"; 
    cout << "masukkan nama orang ke-" << y + 1 << " = "; cin >> nama[y];
    cout << "masukkan jam = "; cin >> bangun[y].j;
    cout << "masukkan menit = "; cin >> bangun[y].m;
    cout << "masukkan detik = "; cin >> bangun[y].d;

    garis();

    y = y + 1; 
  }
}


//membuat fungsi untuk konversi 

waktu konversiTidur( int i){  // ini adalah fungsi untuk mengkonversi data tidur 
                  //parameter i digunakan untuk meng akses elelmen tidur ke i 

  //kamus lokal 
  waktu totalTidur; //variabel untuk menampung hasil konversi 
  int totalDetik;

  //deskripsi 
  totalDetik = (tidur[i].j * 3600) + (tidur[i].m * 60) + tidur[i].d; 

  totalTidur.j = totalDetik / 3600; 
  totalDetik %= 3600;
  totalTidur.m = totalDetik / 60; 
  totalTidur.d = totalDetik % 60; 

  return totalTidur;
}

waktu konversiBangun(int i){ //ini adalah fungsi untuk mengkonversi data tidur
                  //parameter i digunakan untuk meng akses elelmen bangun ke i 
  //kamus lokal 
  waktu totalBangun; 
  int totalDetik; 

  //desrkipsi 
  totalDetik = (bangun[i].j * 3600) + (bangun[i].m *60) + bangun[i].d;

  totalBangun.j = totalDetik / 3600; 
  totalDetik %= 3600; 
  totalBangun.m = totalDetik / 60; 
  totalBangun.d = totalDetik % 60; 

  return totalBangun; 

}

//membuat fungsi untuk menemukan durasi tidur 
waktu durasiTidur(int i,waktu totalw[]){
  //kamus lokal 
  waktu totaldata;
  waktu totaltidur, totalbangun;

  //deskripsi 
  totaltidur = konversiTidur(i);
  totalbangun = konversiBangun(i);

  totaldata.j = totalbangun.j - totaltidur.j;
  totaldata.m = totalbangun.m - totaltidur.m;
  totaldata.d = totalbangun.d - totaltidur.d; 

  totalw[i] = totaldata; 
  return totaldata; 

}

//prosedur untuk menampilkan data total tidur 
void tampildata(){

  //memasukkan data dari durasi tidur ke dalam array totalw[].
  int b = 0; 
  while(b < 2){
    durasiTidur(b,totalw);
    b = b + 1;
  }

  int a; 
  while(a < 2){
    cout << "total waktu tidur orang ke " << a + 1 << nama[a] << " = " << totalw[a].j << " jam " << totalw[a].m << " menit " << totalw[a].d << " detik \n";
    a = a + 1;
  }
}

//fungsi perbandingan untuk mencari siapa yang tidur duluan
int tidurcepat(waktu tidur[]){

  //kamus lokal 
  int z = 0;
  int tidurnormal = 0; 

  //deksripsi
  while ( z < 2 )
  {
    if (tidur[z].j < tidur[tidurnormal].j || (tidur[z].j == tidur[tidurnormal].j && tidur[z].m < tidur[tidurnormal].m) || (tidur[z].j == tidur[tidurnormal].j && tidur[z].m == tidur[tidurnormal].m && tidur[z].d < tidur[tidurnormal].d)) 
    {
        tidurnormal = z;
    }
    z++; 
  }

  return tidurnormal; 
  
}

//fungsi perbandingan untuk mencari durasi tidur siapa yang paling lama 
int keboturu(waktu totalw[]){

  //kamus lokal 
  int a = 0; 
  int oraturu = 0; 

  //deksripsi 
  while(a < 2){
    if((totalw[a].j > totalw[oraturu].j) || (totalw[a].j == totalw[oraturu].j && totalw[a].m > totalw[oraturu].m) || (totalw[a].j == totalw[oraturu].j && totalw[a].m == totalw[oraturu].m && totalw[a].d > totalw[oraturu].d))
    {
      oraturu = a; 
    }    
    a++;
  }

    return oraturu; 
}

//fungsi perbandingan untuk mencari siapa yang tidur belakangan 
int tidurlama(waktu bangun[]){

  //kamus lokal 
  int b = 0; 
  int kebo = 0; 

  //deskripsi 
  while(b < 2){
    if(bangun[b].j > bangun[kebo].j || (bangun[b].j == bangun[kebo].j && bangun[b].m > bangun[kebo].m) || (bangun[b].j == bangun[kebo].j && bangun[b].m == bangun[kebo].m && bangun[b].d > bangun[kebo].d))
    {
      kebo = b;
    }
    b++;
  }

  return kebo; 
}

//prosedur untuk menampilkan hasil perbandingan tiga fungsi di atas 
void totaldata(waktu tidur[], waktu totalw[],waktu bangun[], string nama[]){

  //kamus lokal 
    //memanggil 3 fungsi di atas dan meletak kan ke dalam variabel baru  
    int tidurduluan = tidurcepat(tidur);
    int susahtangi = tidurlama(bangun); 
    int dasarkebo = keboturu(totalw);

  //deskripsi 
  //menampilkan data nya yang sudah di bandingkan 
  cout << "orang yang tidur duluan = " << setw(15) << nama[tidurduluan] << " pada jam : " << tidur[tidurduluan].j << " menit : " << tidur[tidurduluan].m << " detik : " << tidur[tidurduluan].d << endl; 

  garis();

  cout << "orang yang tidur belakangan = " << setw(13) << nama[susahtangi] << " pada jam : " << tidur[susahtangi].j << " menit : " << tidur[susahtangi].m << " detik : " << tidur[susahtangi].d << endl; 

  garis(); 

  cout << "orang yang tidur nya lama = " << setw(15) << nama[dasarkebo] << " " << totalw[dasarkebo].j << " jam " << totalw[dasarkebo].m << " menit " << totalw[dasarkebo].d << " detik " << endl; 

}
main(){
  
  garis();
  
  cout << "Selamat Datang DI Aplikasi Banding Durasi \n";
  cout << "silahkan mengisi data untuk kami proses \n";
  cout << "hasil di jamin 100 persen akurat \n";

  garis();
  //memanggil setiap fungsi di atas untuk di jalankan di sini 

  //memanggil fungsi input data 
  input_data();

  garis();

  //memanggil fungsi tampil data untuk menampilkan data yang telah di konversi 
  //dan di cari total durasi tidur kita
  tampildata();
  
  garis();

  totaldata(tidur,bangun,totalw,nama);

}