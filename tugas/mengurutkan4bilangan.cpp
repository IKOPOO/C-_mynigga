//judul : Mengurutkan 5 buah bilangan dari yang terbesar ke yang terkecil
#include<iostream>
using namespace std;
//kamus
   int a, b, c, d, e;
    
//diskripsi
 main(){
 
  cin >> a;
  cin >> b;
  cin >> c; 
  cin >> d; 
  cin >> e;
 
if(a>b){
    if(a>c){
      if(a>d){
        if(b>c){
          if(b>d){
            if(c>d){
              cout << a << b << c << d;
            }
            else{//d>c
              cout << a << b << d << c;
            }
          else{//d>b
            cout << a << d << b << c;
          }
        else{//c>b
          if(b>d){
            cout << a << c << b << d;
          }
        }
          else{//d>b
            if(c>d){
              cout << a << c << d << b; 
              }
          }  
            else{//d>c
              cout << a << d << c << b;
            }
      else{//d>a
        if(b>c){
          cout << d << a << b << c;
        }
      }  
         else{
          cout << d << a << c << b;
         }
    else{//c>a
      if(a>d){
        if(b>d)z{
          cout << c << a << b << d;
        }
      }
    }
        else//d>b
          output cadb
      else//d>a
        if(d>c)
          output dcab
        else//c>d
          output cdab
else//b>a
    if(b>c)
      if(b>d)
        if(a>c)
          if(a>d)
            if(c>d)
              output bacd
            else//d>c
              output badc
          else//d>a
            output bdac
        else//c>a
          if(a>d)
            output bcad
          else//d>a
            if(c>d)
              output bcda
            else//d>c
              output bdca
      else//d>b
        if(a>c)
          output dbac
        else//b>d
          output dbca
    else//c>b
      if(a>d)
        if(b>d)
          if(c>d)
            output cbad 
          else//d>c
            output dcba
        else//d>b
          output cdba
      else//
        output cabd
 }