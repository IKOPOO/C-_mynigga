#include <iostream> 
#include <string>
using namespace std;

//kamus
//daftar makanan  
string makanan[] = {"sayur","ikan","ayam"};
string sayur[] = {"sayur asem","sayur capcay","jamur tumis","kangkung"};
string ikan[] = {"ikan sambal madu","ikan bakar jahe","ikan asam manis","ikan masak arsik"};
string ayam [] = {"ayam bakar madu","ayam goreng krispi","ayam goreng rempah","ayam celup lava"};
//variabel untuk daftar makanan 
int a,b,c,d;

//daftar harga
int harga_sayur[] = {10000,15000,12000,8000};
int harga_ikan[] = {12000,13000,10000,20000};
int harga_ayam[] = {10000,20000,13000,15000};
//variabel yang lain 
int pilihan;
int jumlah;
int sayurr,ikann,ayamm;

int menu; 

//deskripsi 
main()
{
  //menampilkan menu makanan dan harga 
  cout << "Menu Makanan : \n";
  a = 0;
  b = 0;
  c = 0;
          cout << "Menu Sayur\n";
  while(a < 4)
  /*
    perulangan untuk menampilkan daftar menu nya 
    perulangan di di kerjakan satu satu untuk menampilkan garis pemisah 
    sebenarnya bisa di lakukan nested loop 
    tapi di karenakan garis tidak muncul sesuai keinginan saya memilih untuk mengulangnya satu satu 
  */
    {
          cout << a + 1 << ". " << sayur[a] << "\t\t:" << " RP." << harga_sayur[a] << endl;
          a = a + 1;
    
    }
    cout << "========================================== \n";
          cout << "Menu Ikan \n";
    while(b<4)
      {              
          cout << b + 1 << ". " << ikan[b]<< " \t:" << " RP." << harga_ikan[b] << endl;
          b = b + 1;                                 
      }
    cout << "========================================== \n";
          cout << "Menu Ayam \n";
    while(c < 4 )
      {                                        
          cout << c + 1 << ". " << ayam[c]<< " \t:" << " RP." << harga_ayam[c] << endl;
          c = c + 1;                
      }
    cout << "========================================= \n";

  //input makanan 
  cout << "Pilih Menu Anda \n";
  cout << "masukkan pilihan mu : "; cin >> pilihan;
  switch(pilihan) 
  {
    case 1 : 
        {
          cout << "Pilih sayur anda :"; cin >> sayurr;
          if(sayurr == 1)
            {
              cout << "Anda memesan Sayur Asem \n";
              break;
            }
            else if(sayurr == 2)
              {
                cout << "Anda Memesan sayur Capcay \n";
                break;
              }
              else if(sayurr == 3)
                {
                  cout << "Anda Memesan Tumis Jamur \n";
                  break;
                }
                else if(sayurr == 4)
                  {
                    cout << "Anda Memesan Kangkung \n";
                    break;
                  }
          else 
            {
              cout << "menu yang ada pesan tidak ada \n";
              break;
            }
            break;
        }
    case 2 : 
        {
          cout << "pilih Ikan Anda :"; cin >> ikann;
          if (ikann == 1)
            {
              cout << "Anda Memesan Ikan Sambal Madu \n";
              break;
            } 
            else if(ikann = 2)
              {
                cout << "Anda Memesan Ikan bakar jahe \n";
                break;
              }
              else if(ikann == 3)
                {
                  cout << "Anda Memesan Ikan Asam Manis \n";
                  break; 
                }
                else if(ikann == 4)
                  {
                    cout << "Anda Memesan Ikan masak arsik \n";
                    break;
                  }
          else
            {
              cout << "Menu yang anda pesan tidak tersedia \n";
              break;
            }
          break;
        }
    case 3 : 
        {
          cout << "Pilih Ayam Anda :"; cin >> ayamm;
          if (ayamm == 1)
            {
              cout << "Anda Memesan Ayam Sambal Madu \n";
              break;
            }
            else if(ayamm == 2)
              {
                cout << "Anda Memesan Ayam Goreng Krispi \n";
                break;
              }
              else if(ayamm == 3)
                {
                  cout << "Anda Memesan Ayam Goreng Rempah \n";
                  break;
                }
                else if(ayamm == 4 )
                  {
                    cout << "Anda Memesan Ayam Celup Lava \n";
                    break;
                  }
          else 
            {
              cout << "Menu yang anda pesan tidak tersedi \n";
              break;
            }
          break;
        }
      default :
        {
          cout << "menu tidak tersedia \n";
          break;
        }
  }
  
/*
  //input jumlah makanan 
  jumlah = 0;
  cout << "berapa yang ingin anda pesan : "; cin >> jumlah;
  
  

  //total harga 
  cout << "harga yang harus anda bayar : " << harga[pilihan-1]*jumlah << endl;  
*/
}