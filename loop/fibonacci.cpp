//judul : belajar deret fibonaccin menggunakan loop 
#include<iostream>
using namespace std; 

//kamus 
/*
  rumus fibonacci --> Un = Un - 1 + Un - 2
  Un = jumlah dua bilangan terakhir 
  ini rumus sederhana --> f(n) = f(n - 1) + f(n - 2);
*/
int n,f_n,f_n1,f_n2;

main(){

  cout << "program deret fibonacci \n"; 
  cout << "masukkan nilai ke-n : "; cin >> n; 

  f_n1 = 1;
  f_n2 = 0;
  //f_n = f_n1 + f_n2; 
  //cout << f_n << endl;
  /*
  for(int i = 0; i <=n ; i++){
    f_n = f_n1 + f_n2; 
    f_n2 = f_n1;
    f_n1 = f_n;
    cout << f_n << " " ;
  } 
  */
  int i = 0;
  do{
    
    f_n = f_n1 + f_n2; 
    f_n2 = f_n1;
    f_n1 = f_n; 
    cout << f_n << " " ;
    i++; 
  }while(i <= n);


}