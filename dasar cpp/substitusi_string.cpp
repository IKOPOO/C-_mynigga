#include<iostream>
using namespace std;

int main(){
  string kalimat1 = "kontol radit kecil seperti kecambah";
  string kalimat2 = "dasar kau hitam nigga anjing";

  cout << kalimat1 << endl;
  cout << kalimat2 << endl;

  // swap string -> menukar 2 buah string 
  cout << "swap string" << endl; 
  kalimat1.swap(kalimat2);

  cout << kalimat1 << endl;
  cout << kalimat2 << endl;

  // replace string -> mengganti string menggunakan replace() -> menggunakan inputan 
  // replace(index,panjang,pengganti)
  // cout << "replace string" << endl;
  // kalimat2.replace(27,8,"jempol");
  // cout << kalimat2 << endl;

  // dari pada mencari index kata manual kita bisa menggunakna fungsi find agar lebih mudah dan cepat
  kalimat2.replace(
    kalimat2.find("kecambah"),
    8,
    "jempol"
  );
  cout << kalimat2 << endl;

  // kontol radit kecil seperti jempol
  cout << "insert string" << endl ; 
  kalimat2.insert(33," kaki");
  cout << kalimat2 << endl;
}