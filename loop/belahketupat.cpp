/*
  judul : membuat program yang menampilkan belah ketupat menggunakan looping 
*/
#include<iostream>
using namespace std;

//kamus
int n,i,j,k;
int a,b,c;


//deskripsi 
main(){
  

  cout << "masukkan nilai polanya : " ; cin >> n; 
  

    //melakukan looping segitiga sama kaki menghadap atas
    a = 1;
  while( a <= n ){
    
    //melakukan tahap pertama menggunakan loop 2
    b = n;
    while (b >= a)
    {
      cout << " ";
      b--;
    }

    //melakukan tahap kedua menggunakan loop 4
    c = 1; 
    while(c < (a*2) )  //cara lain ( k <= (2*a-1))
    {
      cout << "*";
      c++;
    }
    cout << endl;
    a++;
  }

  //melakukan looping sama kaki menghadap ke bawah 
  //looping terluar melakukan looping ke bawah 
  i = 2;  //disini kita buat i = 2 untuk menghilangkan satu baris di bawah agar seimbang 
  do{
  
    //melakukan looping spasi ke samping 
    j = 1; 
    do{
      cout << " "; 
      j++;
    }while(j <= i);

    //melakukan looping bintang ke samping 
    k = n;
    do{
      cout << "*"; 
      k--;
    }while( k >= (2*i-n));
    
    cout << endl;
    i++;
  }while(i <= n);
}
