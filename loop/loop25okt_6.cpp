/*
  9 
  9 8 
  9 8 7 
  9 8 7 6 
  9 8 7 6 5 
  9 8 7 6 5 4 
*/
#include <iostream> 
using namespace std;

//kamus 
int a,b,c;

//deskripsi 
main()
{
  //versi besar ke kecil
  /*
  9 
  9 8 
  9 8 7 
  9 8 7 6 
  9 8 7 6 5 
  9 8 7 6 5 4 
  */
  //melakukan deret ke bawah 
  a = 9;//8,7
  do
  {
    //melakukan looping deret ke samping 
    b = 9;//8,7
    while(b >= a)
    {
      cout << b << " ";
      b = b - 1; //8,7
    }
    
    cout << endl;
    a = a - 1; //8,7

  }
  while(a >=4 ); //8,7

  //versi dari kecil ke besar
  /*
    1 
    1 2 
    1 2 3 
    1 2 3 4 
    1 2 3 4 5 
    1 2 3 4 5 6 
    1 2 3 4 5 6 7 
    1 2 3 4 5 6 7 8
    1 2 3 4 5 6 7 8 9
  */
   int c,d;
   //melakukan deret ke bawah 
  c = 1;//2
  do
  {
    //melakukan looping deret ke samping 
    d = 1;//2
    while(d <= c)
    {
      cout << d << " ";
      d = d + 1; //2
    }
    
    cout << endl;
    c = c + 1; //2

  }
  while(c <=9 ); //2

}
