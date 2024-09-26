#include <iostream>
#include <string>
using namespace std;

//kamus 
string makanan[] = {"nasi ayam", "nasi tempe orak-arik", "nasi telur", "nasi campur sayur", "soto ayam", "soto kambing", "sop ayam", "nasi magelangan"};
int harga[] = {14000,10000,12000,13000,10000,18000,15000,13000};
int a;
//menu minuman 
string minuman[] = {"es teh", "es jeruk", "air es", "kopi hitam", "es rasa-rasa", "teh manis", "jus buah", "soda gembira","bir"};
int harga_m[] = {3000,4000,1000,7000,5000,3000,13000,15000,2000000};
int b;

int banyak;
char pilihan;
int total, subtotal, jumlah;

string kasir, pembeli, tanggal;

//deskripsi 
main()
{
  a = 0;
  while(a < 8)
  {
    cout << makanan[a] << " Rp- " << harga[a] << endl;
    a = a + 1;
  }

  cout << "========================================================= \n";

  b = 0; 
  while(b < 9)
  {
    cout << minuman[b] << " Rp- " << harga_m[b] << "\n";
    b = b + 1; 
  }

  cout << "pilihlah makanan anda : " ; cin >> pilihan;
  switch(pilihan)
  {
    case 'm' : 
    {
      //jika di tekan angka a 
      cout << "makanan apa";
      break;
    } 
  }

}
