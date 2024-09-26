/*
  judul : membuat hasil hitung kali dari 7 * 6 * 5 * 4 * 3 = ? dengan loop while
  oleh  : rico andre pratama 
  watku : semarang, 27 oktober 2023
*/
#include<iostream>
using namespace std;

//kamus 
int a,b,c,d;

//deskripsi 
main()
{
  c = 1; 
  d = 0;
 do{
      //melakukan pengeluaran untuk deret bilangan kesamping 
      a = 7;
      b = 1;
      while(a >= 3)
      {
        cout << a << " * ";
        b = b * a;
        a = a - 1;
      } 
  //untuk melakukan looping ke bawah 
  cout << " = " << b ;
  cout << "\n";
  c = c + 1 ; 
  d = d + b;
  
 }while(c <= 4);
 cout << "hasil pertambahan hasil semua = " << d;
}