#include <iostream>
#include<string>
using namespace std;
//  struct transaksimakanan {
        
//         string kasir;
//         string pembeli; 
//         string tanggal;
//         int totalpesanan; 
//         int totalharga;
//         int bayar;         

//     };

// void hitungBilanganGenap(){
//     int jumlah = 0;
//     for(int i=1; i<= 10; i++) {
//         if (i % 2 == 0) {
//             jumlah++;
//         }
//     }
//     cout << "Jumlah bilangan genap:" << jumlah << endl;
// }
 struct parkir{

    string noPlat;     //menyimpan no plat kendaraan 
    string jenisKendaraan;  //menyimpan jenis kendaraan yang masuk
    int noParkir;     //untuk menentukan no parkir kendaraan 
      
      //menyimpan waktu masuk dan keluar
    string waktuMasuk;  
    string waktuKeluar; 

    parkir *next; 

};
parkir *head, *tail, *current; 
//memasukkan data ke dalam sebuah linked list 
parkir* buatnode(const parkir& data){
  parkir* newnode = new parkir;
  newnode ->noPlat = data.noPlat; 
  newnode ->jenisKendaraan = data.jenisKendaraan; 
  newnode ->noParkir = data.noParkir; 
  newnode ->waktuMasuk = data.waktuMasuk; 
  newnode ->waktuKeluar = data.waktuKeluar; 
  newnode ->next = nullptr; 
  return newnode; 
  
}

//prosedur untuk memasukkan data ke dalam linked list di awal 
void inputawal(parkir &data){
  parkir* newnode = buatnode(data); 
  newnode-> next = head; 
  head = newnode; 
}

// prosedur untuk menampilkan data di dalam linked list 
void tampildata(){
    current = head;
    while(current != nullptr){
        cout << "no plat : " << current->noPlat << endl; 
        cout << "jenis kendaraan : " << current->jenisKendaraan << endl; 

        current = current ->next; 
    } 
    

}
int main() 
{
    parkir data; 
    cout << "silahkan masukkan data parkir :) " << endl; 
    cout << "plat nomor      : ";
    getline(cin, data.noPlat);
    cout << "jenis kendaraan : ";
    getline(cin, data.jenisKendaraan);
    inputawal(data); 

    cout << "===========" << endl; 
    
    tampildata(); 

//   hitungBilanganGenap();
    

    /*
    int b = 5;
    int sum = 0;

    do {
        cout << b;
        sum += b;

        if (b < 9) {
            cout << " + ";
        } else {
            cout << " = " << sum;
        }

        b = b + 1;
    } while (b <= 9);

    return 0;
    */

   /*
    int baris = 4; // Jumlah baris
    int i = 0;

    while (i < baris) {
        int bilangan = 10;

        while (bilangan >= 4) {
            cout << bilangan;

            if (bilangan > 4) {
                cout << " + ";
            } else {
                cout << " = ";
            }

            bilangan--;
        }

        cout << endl;
        i++;
  
    }
   */

   

    /*
    int baris = 4; // Jumlah baris
    int batas = 10; // Batas deret
    int sum;

    while (baris > 0) {
        int angka = 10;
        sum = 0;

        while (angka >= 4) {
            cout << angka;

            sum += angka;                          
                angka--;
        }
        cout << " = " << sum << endl;
        baris--;
    }
    */
   /*
   int c = 1;
   int n = 4;
   while(c <= n)
   {
      
      int b = 5;
      while(b >= c)
      {
        cout << b << " ";
        b = b - 1;

      }
      cout << c << "\n";
      c = c + 1;

   }

   */



  /*
    int n = 5; // Jumlah baris

    // Perulangan untuk setiap baris
    int i = 1;
    while (i <= n) {
        // Perulangan untuk setiap kolom dalam satu baris
        int j = 5;
        while (j >= i) {
            std::cout << j << " ";
            j++;
        }
        std::cout << std::endl; // Pindah ke baris berikutnya setelah satu baris selesai
        i--;
    }
  */
/*
int i=5;
float i=5.0;
cout << (i+i);
*/
    

/*
    int n = 8;  // Jumlah elemen pada deret
    int startValue = 15;  // Nilai awal

    while (n > 0) {
        for (int i = 0; i < n; i++) {
            if (i % 2 == 0) {
                std::cout << "+ " << startValue << " ";
            } else {
                std::cout << "- " << startValue << " ";
            }
            startValue -= 2;
        }
        std::cout << std::endl;
        n--;
    }
*/
/*
    void Garis();
    {
        int garis = 33;
        for(int i = 0; i < garis; i++ )
        {
            cout << "=";
        }


    }


    int p,l,t,vol,lu,kel;
  cout << "[!] masukan data data balok" << endl;
  cout << "[*] panjang: ";
  cin >> p;
  cout << "[*] lebar: ";
  cin >> l;
  cout << "[*] tinggi: ";
  cin >> t;
  vol = p*l*t;
  lu = 2 * (p*l + p*t + l*t);
  kel = 2 * (p + l + t);
  Garis();
  cout << "volume balok tersebut adalah: " << vol << endl;
  cout << "luas balok tersebut adalah: " << lu << endl;
  cout << "Keliling balok tersebut adalah: " << kel << endl;
  Garis();
*/
/*
     #include <iostream>


    int n = 8; // Jumlah baris deret bilangan
    int start = 15; // Bilangan pertama

    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n - i; ++j) {
            if (j % 2 == 0) {
                std::cout << "+ ";
            } else {
                std::cout << "- ";
            }
        }

        std::cout << start << std::endl;

        start -= 2;
    }
*/

/*
  judul : membuat deret bilangan dengan awalan, akhiran, jarak sebagai inputan
          deret bilangan tersebut dijumlahkan keseluruhannya 
  oleh  : rico andre pratama 
  waktu : semarang, 19 november 2023
*/

/*
//kamus 
int a, k, j, b;
/*
  awalan = a
  akhiran = k 
  jarak = j
*/
/*
int hasil;
int hasilsemua;

//deskripsi 

    //melakukan input bilangan 
    cout << "Masukkan bilangan awalan : "; cin >> a;
    cout << "Masukkan bilangan akhiran : "; cin >> k; 
    cout << "Masukkan jarak antar bilangan : "; cin >> j;

    b = 0;
    while(b < 4){ 
        int tempat = a; // simpan nilai a sementara

        if(a < k) {
            while(tempat <= k) {
                cout << tempat << " ";
                hasil = hasil + tempat; 
                tempat = tempat + j;
            }
        } else if(a > k) {
            while(tempat>= k) {
                cout << tempat << " ";
                hasil = hasil + tempat; // ubah menjadi penambahan
                tempat = tempat - j;
            }
        } else {
            cout << tempat;
        }
        cout << " = " << hasil;
        cout << endl;
        b = b + 1;
    }
    hasilsemua = 0;
    cout << " = " << (hasilsemua + hasil); 

    return 0;

*/
/*
  judul : membuat deret bilangan dengan awalan, akhiran, jarak sebagai inputan
          deret bilangan tersebut dijumlahkan keseluruhannya 
  oleh  : rico andre pratama 
  waktu : semarang, 19 november 2023
*/
/*
#include<iostream>
using namespace std;

// kamus 
int a, k, j, b;

  awalan = a
  akhiran = k 
  jarak = j
int hasil;
*/

// deskripsi 

    // melakukan input bilangan 
   /*
    cout << "masukkan bilangan awalan : "; cin >> a;
    cout << "masukkan bilangan akhiran : "; cin >> k; 
    cout << "masukkan jarak antar bilangan : "; cin >> j;
    b = 0;

    while (b < 4) {
        int hasil_deret = 0; // variabel lokal untuk menyimpan hasil penjumlahan setiap deret

        if (a < k) {
            while (a <= k) {
                cout << a << " ";
                hasil_deret = hasil_deret + a; 
                a = a + j;
            }
        } else if (a > k) {
            while (a >= k) {
                cout << a << " ";
                hasil_deret = hasil_deret - a; 
                a = a - j;
            }
        } else {
            cout << a ;
        }

        cout << " = " << hasil_deret << endl;
        hasil = hasil + hasil_deret; // menambahkan hasil_deret ke hasil keseluruhan
        b = b + 1;
    }

    cout << "Total = " << hasil; 
    return 0;

   */
 /*
    int awal, akhir, jarak;

    // Input bilangan awal, akhir, dan jarak
    cout << "Masukkan bilangan awal: ";
    cin >> awal;

    cout << "Masukkan bilangan akhir: ";
    cin >> akhir;

    cout << "Masukkan jarak antar bilangan: ";
    cin >> jarak;

    // Loop untuk menampilkan deret bilangan
    for (int i = awal; i <= akhir; i += jarak) {
        // Loop untuk menampilkan setiap baris deret bilangan
        for (int j = awal; j <= i; j += jarak) {
            cout << j << " ";
        }

        // Menghitung dan menampilkan jumlah setiap baris deret bilangan
        int jumlah = (i - awal) / jarak + 1;
        cout << " = " << jumlah * awal + jumlah * (jumlah - 1) / 2 * jarak << endl;
    }
 */



    /*
    int bilangan_awal, bilangan_akhir, jarak;
    
    // Input bilangan awal, bilangan akhir, dan jarak antar bilangan
    cout << "Masukkan bilangan awal: ";
    cin >> bilangan_awal;

    cout << "Masukkan bilangan akhir: ";
    cin >> bilangan_akhir;

    cout << "Masukkan jarak antar bilangan: ";
    cin >> jarak;

    // Inisialisasi variabel
    int bilangan_sekarang = bilangan_awal;
    int jumlah = 0;

    // Tampilkan deret bilangan
    while (bilangan_sekarang <= bilangan_akhir) {
        cout << bilangan_sekarang << "  ";
        jumlah += bilangan_sekarang;
        bilangan_sekarang += jarak;
    }

    cout << " = " << jumlah << endl;
    */
   /*
    int a[5] = {21, 34, 20 , 45 , 11};
    int sum =0;

    for (int i = 0; i < 5; i++){
        if(a[i] % 2 == 0){
            sum -=a[i];
        }

    }
        cout << sum; 
   */
  /*
  int i = 0; 
  int j; 
  while(i < 10){

    j = 10; 
    while(j > 0){
        cout << i << " - " << j << endl; 
        j--;
    }
    i++;
  }
  */
/*
 int a[5] = {21,34,20,45,11};
 int maxi = a[0];

 for (int i = 1; i < 5 ; i++){
    if (a[i] > maxi){
        maxi = a[i];
    }
    cout << maxi << " ";
*/
/*
int matrix[][2]={{1,2},{3,4},{5,6}};
   for (int i=0;i<3;i++){

        cout<<"[ ";

        for (int j=0;j<2;j++){

            cout<<matrix[i][j]<<" ";

        }

        cout<<"]"<<endl;

      }
*/

   

    // transaksimakanan pesan; 
    // pesan.kasir = "pasha";
    // pesan.pembeli = "faiz"; 
    // pesan.tanggal = "12";

}
