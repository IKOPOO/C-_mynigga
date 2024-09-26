#include<iostream> 
using namespace std; 

//kamus 
int a,b,c;

//deskripsi 
main()
{
  a = 15; 
 while(a >= 1)
  {
    c = a;
    while(c >= 1)
    {
      if( c % 1 == 0)
      {
      cout << c << " - ";
      c -= 2; 
        if(c % 2 == 0)
        {
          cout << "+ ";
        }
        else{
          cout << "- ";
        }
      }
      else{     
        c -= 3;
      }
    }
    cout << endl;
    if(a % 1 == 0)
      {
        a -= 2;
      }
      else{
        a -= 3;
      }
  }
}