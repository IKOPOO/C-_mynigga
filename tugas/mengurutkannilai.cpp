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
  if(a > b){
    if(a > c){
      if(a > d){
        if(a > e){
          cout << "hasil urutan : " << a << b << c << d << e << endl;
        }
      }
    }
  }
  else {
    cout << "mumet ndas ku coookk \n";
  }





 }
