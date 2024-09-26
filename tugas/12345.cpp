//judul : mengurutkan nilai yang terbesar ke terkecil
//bilangan terkecil di urutkan ke bilangan terbesar
//masukkan bilangan lalu di urutkan
//

#include <iostream>
using namespace std;

//kamus
int a,b,c,d,e;

 //deskripsi
 main(){
  //memasukkan bilangan
  cout << "masukkan bilangan : " << endl;
  cin >> a;
  cin >> b;
  cin >> c;
  cin >> d;
  cin >> e;

  cout << "hasil bilangan : " << a << b << c << d << e << endl;
  //a lebih besar dari semuanya
    if(a > b > c > d > e){
      if( b > c > d > e){
        if( c > d > e){
          if(d > e)
          cout << a << b << c << d << e;
        }
      }
//b lebih besar dari semuanya
      else if(b > a > c > d > e){
        if(a > c > d > e){
          if(c > d > e){
            if(d > e){
              cout << b << a << c << d << e;
            }
          }
        }
      } else if( c > a > b > d > e){
        if(a > b > d > e){
          if( b > d > e){
            if(d > e){
              cout << c << a << b << d << e;
            }
          }
        }
      }

    }


 }
