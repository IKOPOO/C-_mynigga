#include <iostream>
#include <string>
using namespace std;

//kamu
int jumlah,harga,banyak;
int subtotal,totalpesanan;
string pilihan;

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


do
{
  cout << "Pilihlah pesanan anda :" ; cin >> pilihan;
  if(pilihan == "nasi badak")
  {
    cout << "Anda memesan Nasi Badak \n";
    harga = harga + jumlah * (15000);

  }
  else
  {
    cout << "pesanan tidak tersedia !! \n";
  }
  
  cout << "Banyak pesanan : " ; cin >> jumlah; 
  cout << "sub total : " << harga; 

  if(pilihan == "nasi biawak")
  {
    cout << "Anda memesan Nasi biawak \n";
    harga = harga + jumlah * (20000); 
  }
  else 
  {
    cout << "pesanan tidak tersedia  !! \n";
  }
  
  cout << "Banyak pesanan : " ; cin >> jumlah; 
  cout << "sub total : " << harga; 

  if(pilihan == "nasi goreng")
  {
    cout << "Anda memesan Nasi Goreng \n";
    harga = harga + jumlah * (13000);
  }
  else 
  {
    cout << "pesanan tidak tersedia !! \n";
  }
  
  cout << "Banyak pesanan : " ; cin >> jumlah; 
  cout << "sub total : " << harga; 

  if(pilihan == "soto ayam")
  {
    cout << "Anda memesan Soto Ayam \n";
    harga = harga + jumlah * (10000);
  }
  else
  {
    cout << "pesanan tidak tersedia !!\n";
  }
  
  cout << "Banyak pesanan : " ; cin >> jumlah; 
  cout << "sub total : " << harga; 

  if(pilihan == "soto bebek")
  {
    cout << "Anda memesan Soto Bebek \n";
    harga = harga + jumlah * (15000);
  }
  else
  {
    cout << "pesanan tidak tersedia !! \n";
  } 
  
  cout << "Banyak pesanan : " ; cin >> jumlah; 
  cout << "sub total : " << harga; 

  if(pilihan == "nasi uduk")
  {
    cout << "Anda memesan Nasi Uduk Ayam Gablek \n";
    harga = harga + jumlah * (20000);
  }
  else
  {
    cout << "pesanan tidak tersedia !! \n";
  } 
  
  cout << "Banyak pesanan : " ; cin >> jumlah; 
  cout << "sub total : " << harga; 

  if(pilihan == "nasi kuning")
  {
    cout << "Anda memesan Nasi kuning Bebek Rebus \n";
    harga = harga + jumlah * (17000);
  }
  else
  {
    cout << "pesanan tidak tersedia !!\n" ; 
  }
  
  cout << "Banyak pesanan : " ; cin >> jumlah; 
  cout << "sub total : " << harga; 

  if(pilihan == "nasi campur")
  {
    cout << "Anda memesan Nasi Campur Sayur \n";
    harga = harga + jumlah * (14000);
  }
  else
  {
    cout << "pesanan tidak tersedia !! \n";
  }
  
  cout << "Banyak pesanan : " ; cin >> jumlah; 
  cout << "sub total : " << harga; 

  if(pilihan == "nasi opor")
  {
    cout << "Anda memesan Nasi Opor Kambing \n";
    harga = harga + jumlah * (23000);
  }
  else
  {
    cout << "pesanan tidak tersedia !! \n";
  }
  
  cout << "Banyak pesanan : " ; cin >> jumlah; 
  cout << "sub total : " << harga; 

  if(pilihan == "steak ayam sapi")
  {
    cout << "Anda memesan Steak Ayam Sapi \n";
    harga = harga + jumlah * (50000);
  }
  else
  {
    cout << "Menu tidak tersedia \n";
  }
  cout << "Banyak pesanan : " ; cin >> jumlah; 
  cout << "sub total : " << harga; 
  
  

}while(pilihan != "selesai");
}