#include <iostream>

using namespace std;

int keranjang = 0;
int nom;

int main()
{
  int pilihan;
  char ulang;
  do
  {
    cout << "     DAFTAR MENU CAFE HAP     " << endl;
    cout << "==============================" << endl;
    cout << "|  1. Espresso      ( 20K )  |"            << endl;
    cout << "|  2. Cappuccino    ( 22K )  |"          << endl;
    cout << "|  3. Moccacino     ( 22K )  |"          << endl;
    cout << "|  4. Vanilla Latte ( 25K )  |"       << endl;
    cout << "|  5. Hazelnut Latte( 25K )  |"      << endl;
    cout << "|  6. Lemon Tea     ( 20k )  |"           << endl;
    cout << "|  7. Thai Tea      ( 21k )  |"            << endl;
    cout << "|  8. Matcha        ( 21K )  |"              << endl;
    cout << "|  9. Teh Tarik     ( 22K )  |"           << endl;
    cout << "| 10. Air Mineral   ( 12k )  |"        << endl;
    cout << "==============================" << endl;
    cout << endl;

    cout << "Pilihan anda: ";
    cin >> pilihan;
    cout << "Jumlah: ";
    cin >> nom;

    switch(pilihan){
    case 1:
        cout << "Anda memilih Espresso sebanyak "<< nom << endl;
        keranjang = keranjang + 20000 * nom;
        cout << "harga dari espresso adalah: " << keranjang << endl;
        cout << "harga total: " << keranjang << endl;
        break;
    case 2:
        cout << "Anda memilih Cappuccino" << nom << endl;
        keranjang = keranjang + 22000 * nom;
        cout << "harga dari cappuccino adalah: " << keranjang << endl;
        cout << "harga total: " << keranjang << endl;
        break;
    case 3:
        cout << "Anda memilih Moccacino" << endl;
        keranjang = keranjang + 22000 * nom;
        cout << "harga dari Moccacino adalah: " << keranjang << endl;
        cout << "harga total: " << keranjang << endl;
        break;
    case 4:
        cout << "Anda memilih Vanilla Latte" << endl;
        keranjang = keranjang + 25000 * nom;
        cout << "harga dari Vanilla Latte adalah: " << keranjang << endl;
        cout << "harga total: " << keranjang << endl;
        break;
    case 5:
        cout << "Anda memilih Hazelnut Latte" << endl;
        keranjang = keranjang + 25000 * nom;
        cout << "harga dari Hazelnut Latte adalah: " << keranjang << endl;
        cout << "harga total: " << keranjang << endl;
        break;
    case 6:
        cout << "Anda memilih Lemon Tea" << endl;
        keranjang = keranjang + 20000 * nom;
        cout << "harga dari Lemon Tea adalah: " << keranjang << endl;
        cout << "harga total: " << keranjang << endl;
        break;
    case 7:
        cout << "Anda memilih Thai Tea" << endl;
        keranjang = keranjang + 21000 * nom;
        cout << "harga dari Thai Tea adalah: " << keranjang << endl;
        cout << "harga total: " << keranjang << endl;
        break;
    case 8:
        cout << "Anda memilih Matcha" << endl;
        keranjang = keranjang + 21000 * nom;
        cout << "harga dari Matcha adalah: " << keranjang << endl;
        cout << "harga total: " << keranjang << endl;
        break;
    case 9:
        cout << "Anda memilih Teh Tarik" << endl;
        keranjang = keranjang + 22000 * nom;
        cout << "harga dari Teh Tarik adalah: " << keranjang << endl;
        cout << "harga total: " << keranjang << endl;
        break;
    case 10:
        cout << "Anda memilih Air Mineral" << endl;
        keranjang = keranjang + 12000 * nom;
        cout << "harga dari Air Mineral adalah: " << keranjang << endl;
        cout << "harga total: " << keranjang << endl;
        break;
    default:
        cout << "Menu tidak tersedia" << endl;
    }
    cout << endl;

    cout << "Ingin memilih menu lain (y/t)? ";
    cin >> ulang;
    cout << endl;
  }
  while (ulang!= 't');

  cout << "==================================" << endl;
  cout << "total yg harus dibayar: " << keranjang << "                            " << endl;
  cout << "Kamu harus bayar segini yaa : " << keranjang << endl;
  cout << "Terimakasih Semoga Harimu Indah" << endl;

  cout << endl;
  return 0;
}