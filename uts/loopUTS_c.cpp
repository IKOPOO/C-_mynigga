/*
  judul : membuat deret bilangan dengan awalan,akhiran,jarak sebagai inputan
          deret bilangan tersebut di jumlahkan keseluruhannya 
  oleh  : rico andre pratama 
  waktu : semarang, 19 november 2023
*/

#include<iostream>
using namespace std;

//kamus 
int a, k , j , b;
/*
  awalan = a
  akhiran = k 
  jarak = j
*/
int hasil,hasil_a,hasil_b;

//deskripsi 
main()
{
 //melakukan input bilangan 
 cout << "masukkan bilangan awalan : "; cin >> a;
 cout << "masukkan bilangan akhiran : "; cin >> k; 
 cout << "masukkan jarak antar bilangan : "; cin >> j;
b = 0;
while(b < 4){ 
 hasil_b = hasil;
 hasil_a = a;
 if(a < k)
 {
    while(hasil_a <= k)
    {
      cout << hasil_a << " ";
      hasil_b = hasil_b + hasil_a; 
      hasil_a = hasil_a + j;
    }
 }else if(a > k)
        {
          while(hasil_a >= k)
          {
            cout << hasil_a << " ";
            hasil_b = hasil_b + hasil_a; 
            hasil_a = hasil_a - j;
          }
        }
 else{
  cout << hasil_a ;
 }
 cout << " = " << hasil_b; 
 cout << endl;
 b = b + 1; 
}

}