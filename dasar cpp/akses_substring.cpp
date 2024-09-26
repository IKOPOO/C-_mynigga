#include<iostream>
using namespace std;


int main(){
  string nama1 = "dayat suka kontol bapak";
  string nama2 = "pasha suka anak kecil dan balita";

  // cout << nama1 << endl; 
  // cout << nama2 << endl;

  //substring, mengambil string di tengah tengah kalimat 
  //contoh pada kalimat saya ingin mengambil kata kontol saja, menggunkan substr() <- memiliki 2 input 
  //substr(index, panjang)

  // cout << nama2.substr(0,5)<< " " << nama1.substr(6,4) << " " << nama1.substr(11,6) << endl;

  //mencari posisi dari substring -> mencari letak dari sebuah kata 
  //contoh kamu ingin mencarai posisi dari kata kontol di string nama1
  //  cout << nama1.find("kontol") << endl;

  //loop untuk mencari kata atau huruf di dalam sebuah kalimat 
  // int a = nama1.find("a");
  // while(a != string::npos) {

  //   cout << a << endl;
  //   a = nama1.find("a", a + 1);
  // }

  //loop untuk mencari kata atau huruf di dalam sebuah kalimat namun dari belakang kalimat 
  //sama saja caranya seperti di atas namun pada fungsi find tambahkan r didepannya -> rfind()
  int a = nama1.rfind("a");
  while(a != string::npos) {

    cout << a << endl;
    a = nama1.rfind("a", a - 1);
  }
  
}