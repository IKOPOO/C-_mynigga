/*
  judul : membuat deret bilangan 3 4 5 6 7 8 dengan repeat until (do while)
  oleh  : rico andre pratama 
  waktu : semarang, 27 oktober 2023
*/
#include<iostream>
using namespace std;

//kamus 
int a,b;

//deskripsi 
main()
{
  a = 3;
  do
  {
    cout << a << " ";
    a = a + 1 ;

  }while(a <= 8);
}