#include<iostream> 
using namespace std;


//kamus 
int a,b,c,d,e,k,na;
int hasil;
int semua[5];

//deskripsi 

main()
{
  cout << "masukkan bilangan pertama : " ; cin >> semua[0]; 
  cout << "masukkan bilangan kedua : "; cin >> semua[1] ; 
  cout << "bilangan ketiga  : " << (semua[2] = 20) << "\n"; 
  cout << "bilangan keempat : " << (semua[3] = 40) << "\n"; 
  cout << "bilangan kelima  : " << (semua[4] = 45) << "\n";
  cout << "masukkan bilangan keenam :  " ; cin >> semua[5];

  hasil = semua[4] + semua[0] + semua[5] + semua[2] + semua[3] + semua[1];
  cout << "hasilny = " << hasil ;  
}