//judul : membuat program kocok dadu menggunakan fungsi library random 
#include<iostream>
#include<cstdlib> //library agar bisa menggunakan fungsi acak nilai 
using namespace std;
/*

*/
//kamus 

char lanjut;
int y,x,a;
int jumlah_dadu,jumlah_lemparan,hasil_dadu;

main(){

  cout << "selamat datang program lempar dadu !! \n";
  //melakukan perulangan untuk menjalankan program di dalamnya 
  while (true)
  {
    cout << "apakah anda ingin melempar dadu Y/N : " ; cin >> lanjut;
    //kondisi jika inputan kita y 
    if( lanjut == 'y'){

      cout << "berapa jumlah dadu yang ingin di lempar ? \n";
      cin >> jumlah_dadu; //menampung berapa jumlah dadu yang akan di lempar dalam sekali lempar 
      cout << "berapa kali lempar? \n"; 
      cout << "lempar : ";cin >> jumlah_lemparan; // menampung jumlah berapa kali dadu tersebut akan di lempar 
      
      //melakukan perulangan untuk menghitung berapa kali dadu sudah di lempar 
      a = 0;
      do
      {
        cout << " lemparan dadu pusingan ke-" << a + 1 << " : ";
        //melakukan perulangan untuk mencari nilai dari dadu yang sudah di lempar kan 
        y = 0;
        while( y < jumlah_dadu){
          hasil_dadu = 1 + (rand() % 6); //hasil_dadu di gunakan untuk menampung nilai dadu yang sudah di lempar 
          cout << hasil_dadu << " " ;     //disini memakai fungsi yang sudah di sediakan dari librari di atas yaitu fungsi acak
          y++; 
        }
        cout << endl;
        a++;
      }while( a < jumlah_lemparan );

        //kondisi jika inputan yang kita masukkan adalah n 
    }else if( lanjut == 'n'){
      cout << "panggil aku lagi jika ingin main !!";
      break; //disini setelah kita output kalimat di atas maka program akan langsung di break atau langsung diberhentikan
    }else{ // jika kita memasukkan inputan yang tidak ada dalam dua kondisi di atas 
      cout << "seng genah anying ra ono pilihan kui jancok !!! \n";
      cout << "matane picek kah koe ? \n";
    }

  }
  
}