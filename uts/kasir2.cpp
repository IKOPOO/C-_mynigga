#include<iostream>
#include<string>
using namespace std;


//kamus 
	int pilihan, jumlah, harga, banyak;
  int subtotal,ulang,totalpesanan;

  string barang,kasir,pemesan,tanggal;
  
//deskripsi 
main()
{
cout <<  "                  KEDAI MAKAN MODERN SMG          \n";
cout << "----------------------------------------------------------\n"; 
cout <<  "                    Menu Kedai Makan           \n";
cout << "----------------------------------------------------------\n";
cout <<  " 1. nasi badak" << "\t\t\t\t\t Rp.15000 \n";
cout <<  " 2. nasi biawak" << "\t\t\t\t\t Rp.20000 \n";
cout <<  " 3. nasi goreng" << "\t\t\t\t\t Rp.13000 \n";
cout <<  " 4. soto ayam" << "\t\t\t\t\t Rp.10000 \n";
cout <<  " 5. soto bebek" << "\t\t\t\t\t Rp.15000 \n";
cout <<  " 6. nasi uduk ayam gablek" << "\t\t\t Rp.20000 \n";
cout <<  " 7. nasi kuning bebek rebus" << "\t\t\t Rp.17000 \n";
cout <<  " 8. nasi campur sayur" << "\t\t\t\t Rp.14000 \n";
cout <<  " 9. nasi opor kambing" << "\t\t\t\t Rp.23000 \n";
cout <<  " 10.steak ayam sapi" << "\t\t\t\t Rp.50000 \n";
cout <<  " 11.selesai \n";


cout << "----------------------------------------------------------\n"; 

//untuk memasukkan data transaksi seperti tanggal, nama kasir, nama pelanggan 
cout << "tanggal transaksi\t\t\t : ";
getline(cin,tanggal); 
cout << "kasir yang bertugas\t\t\t : ";
getline(cin,kasir);
cout << "Nama pemesan\t\t\t\t : ";
getline(cin,pemesan);

cout << "----------------------------------------------------------\n"; 

//melakukan perulangan untuk transaksi pemensanan 
do
{
  cout << "pilihlah makanan anda\t\t\t" << ": ";  cin >> pilihan; 
	
  /*
  untuk melaksanakan perintah sesuai yang di mau oleh pengguna jika kita ketik satu 
  kondisi yang di jalankan adalah kondisi satu.
  */
  switch(pilihan){
    
    case 1 : 
      {
        cout << "Anda Memilih Nasi Badak \n" ;
        cout << "Banyak Pesanan\t\t\t\t" << ": "; cin >> jumlah;
        harga = harga + jumlah * (15000);
        cout << "sub total\t\t\t\t" << ": "<< harga << "\n";
        cout << "\n";
        break;
      }
    case 2 : 
      {
        
        cout << "Anda Memilih Nasi Biawak \n";
        cout << "Banyak Pesanan\t\t\t\t" << ": "; cin >> jumlah; 
        harga = harga + jumlah *(20000);
        cout << "Sub Total\t\t\t\t" << ": "<< harga  << "\n";
        cout << "\n";
        break;
      }
      
    case 3 :
      {
        
        cout << "Anda Memilih Nasi goreng\n";
        cout << "Banyak Pesanan\t\t\t\t" << ": "; cin >> jumlah; 
        harga = harga + jumlah * (13000);
        cout << "Sub Total\t\t\t\t" << ": " << harga << "\n";
        cout << "\n";
        break;
      }
    case 4 :
      {
        
        cout << "Anda Memilih Soto Ayam\n";
        cout << "Banyak Pesanan\t\t\t\t" <<  ": "; cin >> jumlah;
        harga = harga + jumlah * (10000);
        cout << "Sub Total\t\t\t\t" <<  ": " << harga  << "\n";
        cout << "\n";
        break;
      } 
    case 5 : 
      {
        
        cout << "Anda Memilih Soto Bebek\n";
        cout << "Banyak Pesanan\t\t\t\t" <<  ": "; cin >> jumlah;
        harga = harga + jumlah * (15000); 
        cout << "Sub Total\t\t\t\t" << ": " <<  harga << "\n";
        cout << "\n";
        break;
      }
    case 6 : 
      {
        
        cout << "Anda Memilih Nasi Uduk Ayam Gablek \n";
        cout << "Banyak Pesanan\t\t\t\t" << ": "; cin >> jumlah;
        harga = harga + jumlah * (20000);         
        cout << "Sub Total\t\t\t\t" << ": " << harga << "\n";
        cout << "\n";
        break;
      }
    case 7 :
      {
        
        cout << "Anda Memilih Nasi Kuning Bebek Rebus\n";
        cout << "Banyak Pesanan\t\t\t\t" <<  ": "; cin >> jumlah;
        harga = harga + jumlah * (17000);         
        cout << "Sub Total\t\t\t\t" << ": " << harga << "\n";
        cout << "\n";
        break;
      }
    case 8 :
      {
        
        cout << "Anda Memilih Nasi Campur Sayur\n";
        cout << "Banyak Pesanan\t\t\t\t" << ": "; cin >> jumlah;
        harga = harga + jumlah * (14000);         
        cout << "Sub Total\t\t\t\t" << ": "  << harga << "\n";
        cout << "\n";
        break;
      }
    case 9 : 
      {
        
        cout << "Anda Memilih Nasi Opor Kambing \n";
        cout << "Banyak Pesanan\t\t\t\t" <<  ": "; cin >> jumlah;
        harga = harga + jumlah * (23000);
        cout << "Sub Total\t\t\t\t" << ": " << harga << "\n";
        cout << "\n";
        break;
      }
    case 10 : 
      {
        
        cout << "Anda Memilih Steak Ayam Sapi \n";
        cout << "Banyak Pesanan\t\t\t\t" <<  ": "; cin >> jumlah;
        harga = harga + jumlah * (50000);         
        cout << "Sub Total\t\t\t\t" << ": " << harga << "\n";
        cout << "\n";
        break;
      }
    case 11 : 
      {
        cout << "----------------------------------------------------------\n"; 

        cout << endl;
        cout << "Tanggal Pemesanan\t\t\t" << ": " << tanggal << "\n";
        cout << "Kasir\t\t\t\t\t" << ": " <<kasir << "\n";
        cout << "Nama Pemesan\t\t\t\t" << ": " <<  pemesan << "\n";
        cout << "total pesanan\t\t\t\t" <<  ": " <<  totalpesanan << "\n";
        cout << "Total harga\t\t\t\t" <<  ": " << harga << "\n";
        cout << "Bayar\t\t\t\t\t" <<  ": " ; cin >> banyak ;
        cout << "kembali\t\t\t\t\t" <<  ": " << banyak - harga << "\n";
        cout << "\n";
        cout << "----------------------------------------------------------\n";  
        break;
      }
    default : 
      {
        cout << "MENU TIDAK ADA !! \n";
        break;
      }
  }
  //untuk menjumlahkan total pesanan atau pilihan 
   if ((pilihan >= 1) && (pilihan <= 10)){
        totalpesanan += jumlah;
      }
    else {
        cout << "\n";
      }

}while(pilihan != 11);
cout <<  "                        TERIMA KASIH                \n";
cout << "----------------------------------------------------------\n"; 
cout <<  "                 SELAMAT BERBELANJA KEMBALI           \n";
cout << "----------------------------------------------------------\n";
}