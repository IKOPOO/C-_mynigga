/*
  judul : membuat deret bilagang 1 - 2 - 3 - 4 - 5 - 6 - 7 - = ??
  oleh  : rico andre pratama 
  waktu : semrang, 30 oktober 2023 
*/
#include <iostream> 
using namespace std;

// kamus 
int a,b; 

//deskripsi 
main()
{
  a = 1;
  b = 0;
  while(a <= 7)
  {
    cout << a << " - "; 
    b = b - a;
    a++;
  }
  cout << " = " << b;
  
}