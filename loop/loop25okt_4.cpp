//judul : membuat deret 1 2 3 4 # 6 7 8 9 # 11 12 13 14 #
//oleh  : rico andre pratama
#include<iostream>
using namespace std;

//kamus 
int a, b,c; 

//deskripsi 
main()
{
  a = 1;
  
  while(a <= 15)
  {
    
   
    
    if( a % 5 == 0)
      {
        cout << " # ";
      }
      else 
        {
          cout << a << " ";
        }
    a = a +1;
  }
  

    


}