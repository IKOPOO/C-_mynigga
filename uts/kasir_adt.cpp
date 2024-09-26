#include<iostream>
#include<string>
#include<iomanip> 
using namespace std;

//kamus global
//adt 
struct inti{  
  string kasir;
  string pembeli;
  string tanggal;
  int totalpesanan;
  int totalharga;
  int bayar;

};

int pilihan, harga = 0, totalpesanan = 0, banyak; //variabel global 
inti transaksi; //variabel untuk menyimpan total pesanan ketika sudah selesai memesan /semua data 

//array data nama dan harga barang yang dijual 
string nama_barang[] = {"nasi badak", "nasi biawak","nasi goreng","soto ayam","soto bebek","nasi uduk ayam gablek","nasi kuning bebek rebus","nasi campur sayur","nasi opor kambing","steak ayam kambing"};
int harga_barang[] = {15000,20000,13000,10000,15000,20000,17000,14000,23000,50000};



//untuk menampilkan daftar menu 
void menu()
{
  //kamus lokal
  int a;
  //deskripsi 
  //perulangan digunakan untuk menampilkan menu tanpa harus output kan item satu satu 
  while(a <= 9)
  {
    cout << a + 1 << "."<< nama_barang[a] << setw(30)<< " Rp." << setw(10) << harga_barang[a] << endl;
    a = a + 1;
  }
  cout << endl;
}

//untuk menampilkan garis pemisah agar tampilan tidak terlalu amburadul
void garis()
{
  //kamus lokal 
  int x;
  //deskripsi 
  while(x < 60 )
  {
    cout << "=";
    x = x + 1 ;
  }
    cout << endl;
}

//untuk menampilkan apa aja yang harus di isi di data kasir
//menggunakan reference variabel transaksi 
void datastruk(inti &transaksi) //syaratnya adalah harus ada variabel transaksi bertype inti 
{
  //kamus lokal 
  //deskripsi 
  cout << "Tanggal" << " : "; 
  getline(cin, transaksi.tanggal);
  cout << "nama kasir" << " : ";
  getline(cin, transaksi.kasir);
  cout << "nama pembeli" << " : ";
  getline(cin, transaksi.pembeli);
  garis();
}

//prosedur pemesanan makanan  dan penjumlahan makanan 
void pemesanan(int pilihan, int & harga, int & totalpesanan)
{
  //kamus lokal 
  int jumlah; 
  //deskripsi 
  cout << "banyak pesanan\t\t\t\t" << ": ";
  cin >> jumlah; 

  //menjumlahkan total pesanan, harga dan serta mengupdate total pesanan 
  harga += jumlah * harga_barang[pilihan - 1];

  totalpesanan += jumlah;
  cout << "sub total pesanan\t\t\t" << ": " << harga << "\n";

}



//prosedur untuk menampilkan data dari kasir, pesanan dan pembayaran 
void datakasir(inti &transaksi, int harga)
{
  garis();

  cout << "Tanggal pemesanan\t\t\t" << " : " << transaksi.tanggal << endl;
  cout << "kasir\t\t\t\t\t" << " : " << transaksi.kasir << endl;
  cout << "nama pembeli\t\t\t\t" << " : " << transaksi.pembeli << endl;
  cout << "total pesanan \t\t\t\t" << ": " << transaksi.totalpesanan << endl;
  cout << "total harga\t\t\t\t\t" << ": " << harga << endl; 
 
 int totalpembayaran = 0; // variabel untuk menyimpan nominal pembayaran 

    do {
        cout << "Pembayaran saat ini\t\t\t" << ": ";
        int pembayaranSaatIni; //variabel untuk nominal pertama 
        cin >> pembayaranSaatIni;

        if (pembayaranSaatIni > 0) {
            totalpembayaran += pembayaranSaatIni;

            if (totalpembayaran < harga) {
                cout << "yahh uang kamu kurang nihh !!\n";
                cout << "uang kamu sekarang :  " << totalpembayaran << endl;
            }
        } else {
            cout << "Pembayaran harus lebih dari 0.\n";
        }

    } while (totalpembayaran < harga);

    cout << "Kembali\t\t\t\t\t" << ": " << totalpembayaran - harga << endl;
  garis();
  cout << endl;
}


//melakukan pemesanan 
int pesanmakanan(){
  
  int pesan;
  do{
    cout << "Pilihlah makanan anda\t\t\t" << ": ";
    cin >> pilihan;

    //kondisi if else untuk menentukan makanan 
    if( (pilihan >= 1) && (pilihan <=10) )
    {
      pemesanan(pilihan, harga, totalpesanan);
    }else if( pilihan == 11)
      {
        transaksi.totalpesanan = totalpesanan; //memasukkan atau menggabungkan semua total pesanan ke dalam total pesanan
        transaksi.totalharga = harga;

        datakasir(transaksi, harga);
      }
    else 
    {
      cout << "YAHH BELUM ADA NIH MENU NYAA\n";
   
    }
  }while(pilihan != 11 );

  return pesan;


};


//menampilkan penutup 
void penutup()
{
  cout <<  "                        TERIMA KASIH                \n";
  cout << "----------------------------------------------------------\n"; 
  cout <<  "                 SELAMAT BERBELANJA KEMBALI           \n";
  cout << "----------------------------------------------------------\n";
}


//program inti 
main()
{
  cout <<  "                  KEDAI MAKAN MODERN SMG          \n";
  cout << "----------------------------------------------------------\n"; 
  cout <<  "                    Menu Kedai Makan           \n";
  cout << "----------------------------------------------------------\n";
  menu(); //memanggil void  menu 
  garis(); //memanggil void garis 
  datastruk(transaksi); //memanggil void garis berparameter transaksi
  garis();//memanggil void garis 

  //melakukan perulangan untuk memesan makanan
  pesanmakanan();

  penutup();
}

