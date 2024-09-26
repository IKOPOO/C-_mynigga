/*
  tugas loop 
  menapilkan angka 1 sampai 20 dengan genap dan ganjil 

*/

#include <iostream> 
using namespace std; 

//kamus 
int ayam; 
int cacing;

//deskripsi 
main()
{
  ayam = 0;
  cacing = 0;
  while(ayam <= 10)
  {
    cout << ayam;
    ayam = ayam + 1;
    cacing = cacing + ayam;


  }
  cout << "="<< cacing; 
  

}