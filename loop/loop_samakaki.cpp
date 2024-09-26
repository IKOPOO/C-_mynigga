#include<iostream>
using namespace std; 

//kamus 
int a,b,c,d,n;

main(){
  /*
           ******
        ******
      ******
    ******
  ******
  */
  //melakukan looping pertama
  cout << "masukkan nilai n : " ; cin >> n; 
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
    while(c <= a )
    {
      cout << "*";
      c++;
    }

    //melakukan tahap ketiga menggunakan loop 1
    d = n;
    while(d >= a ){
      cout << "*";
      d--; 
    }     
    cout << endl; 
    a++;   
    
  }

  /*
        *
       ***
      *****
     *******
    *********
  */

    int i,j,k,l;
    i = 1;
  while( i <= n ){
    
    //melakukan tahap pertama menggunakan loop 2
    j = n;
    while (j >= i)
    {
      cout << " ";
      j--;
    }

    //melakukan tahap kedua menggunakan loop 4
    k = 1; 
    while(k < (i*2) )  //cara lain ( k <= (2*i-1))
    {
      cout << "*";
      k++;
    }
    cout << endl;
    i++;
  }
}