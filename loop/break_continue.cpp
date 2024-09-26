#include<iostream>
using namespace std;


//latihan menggunakan break dan continue 

main(){

  //menggunakan break pada loop for 
  /*for(int x =0; x <=10; x++){

    if(x == 5){
      break;  
    }
    cout << x << endl;

  }
  
  //menggunakan continue pada loop for 
   for(int x =0; x <=10; x++){

    if(x == 5){
      continue;
    }
    cout << x << endl;

  }
  */
  //menggunakan break pada loop while do 
  /*int y = 0; 
  while ( y <=10)
  {
    if(y == 5){
      break;
    }
    cout << y << endl;
    y++;
  }
  */
  //penggunaan continue pada loop while do
  int b = 0; 
  while (b <= 10)
  {
    b++;
    if(b == 5){
      continue;
    }
    cout << b << endl;
    //b++; 
    /*
      jika increment kita letakkan di bawah perintah continue maka akan terjadi infinty loop 
      karena program yang berada di bawah akan di skip, maka dari itu letak incremen berada di atas 
      atau berada sebelum perintah continue 
    */
  }
  

}