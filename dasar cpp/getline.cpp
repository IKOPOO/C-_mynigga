#include<iostream>
#include<string>
using namespace std;

int main(){

  //menngunakan getline untuk membaca satu baris penuh inputan 
  string input; 
  cout << "masukkan inputan :"; 
  getline(cin, input);
  cout << input << endl;

  // untuk menemukan berapa banyak kata yang telah kita inputkan 
  int posisi = 0; 
  int jumlah = 0; 
  while (true){
    posisi = input.find(" ", posisi + 1);
    jumlah++; 
    if(posisi < 0) {
      break;
    }    
  }

  cout << "jumlah kata : " << jumlah << endl;

}