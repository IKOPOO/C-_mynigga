/*
  judul : membuat segitiga terbalik 
  *****
   ****
    ***
     **
      *
*/

/*
   ***********
   *********
    *******
     *****
      ***
       *
*/
#include<iostream>
using namespace std; 

//kamus 
int n,i,j,k;

main(){

  cout << "masukkan panjang polanya : " ; cin >> n;
  //melakukan perulangan ke samping 
  i = 1;
  //looping terluar melakukan looping ke bawah 
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