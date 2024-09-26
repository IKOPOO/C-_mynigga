// judul mengurutkan 4 bilangan 
#include<iostream>
using namespace std;

//kamus 
int a , b , c , d, e;

//deskripsi
main(){
  cin >> a >> b >> c >> d >> e;
  if(a > b) {
    if(a > c) {
      if(a > d) {
        if(b > c) {
          if(b > d){
            if(c > d){
              cout << a << b << c << d;
            }
            else{
              cout << a << b << d << c;
            }
            else{
              cout << a << d << b << c;
            }
          }
        }
      }
    }
  }
}