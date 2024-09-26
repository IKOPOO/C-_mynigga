#include <iostream>
using namespace std;


int a,b,c;
int jml;


//deskripsi
main()
{
  /*
  a = 10;
  b = 1;
  c = 1;
  jml = 0;
  do
  {
    cout << a << " "; 
    cout << b << " ";
    cout << c << " ";
    c = c + 1;
    b = b + c;
    a = a + c;

  }while(b < 12 );
  */
  a = 1;
  b = 0;
  while(a < 7)
    {
      if(a %2 == 0)
       {
        cout << a << " - ";
        b -=a;

       }
       else 
       {
        cout << a << " + ";
        b +=a;
       }
       a = a + 1;
     
    }
      cout << " = " << b;
     

}