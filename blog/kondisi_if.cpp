#include<iostream> 
using namespace std; 

//kamus 

int text;

//deskripsi 

main(){
  cout << "mau makan apa hari ini ? " << endl; 
  cout << "1.ikan "<< endl; 
  cout << "2.ayam "<< endl; 
  cout << "3.sayur "<< endl; 
  cin >> text;
 switch (text) { //ini adalah kondisi 

  //pertukaran jika kita menekan angka satu maka yang keluar program di bawah ini 
    case 1:{
      cout << "yeeyy makan ikan" << endl; 
      cout << "ikan ada didalam lemari ikan ya!"<< endl; 
        break; //ini digunakan untuk memberhentikan program agar blok kode di bawah tidak ikut di eksekusi
    }
    //pertukaran jika kita menekan angka satu maka yang keluar program di bawah ini 
    case 2: {
      cout << "yeey makan ayam" << endl; 
      cout << "ayam ada di dalam oven ya!" << endl;
        break;
    }
     case 3: {
      cout << "yeey makan sayur" << endl; 
      cout << "ayam ada di panci ya!" << endl;
        break;
    }
    default:{     // Blok kode jika tidak ada nilai yang cocok dengan kondisi 
                
      cout << "jadi kamu mau makan apa ? " << endl; 
    }
    break;
}

}
