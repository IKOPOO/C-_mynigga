#include<iostream> 
using namespace std; //sequential statement dimulai dari sini

//kamus 
int a,b; //sequential statement pertama mendeklarasikan variabel a bertype data integer 
int total = a + b; //sequential statement kedua mendeklarasikan variabel total bertipe integer dan bernilai sama dengan a + b

int main(){

  cout << "nilai A : "; //mengeluarkan output nilai A 
  cin >> a; //membuat inputan untuk memasukkan nilai ke variabel a 
  cout << "nilai B : "; //mengeluarkan output nilai B
  cin >> b; //membuat inputan untuk memasukkan nilai ke variabel b 
  cout << "total bilangan A + B : " << total; //mengeluarkan output total bilangan A + B dan mengeluarkan nilai dari variabel total


}