/*
  judul : membuat deret bilangan n... 8 10 12 14 16 18 ...m, z = jarak (2) dengan while 
  n dan m input 
  z input 
*/
#include <iostream> 
using namespace std;

//kamus 
int x, n, m, z;
int a,b;

//deskripsi ;
main()
{
 
  cout << "masukkan awalan dengan nilai awalan lebih kecil dari akhiran  \n";
  cout << "masukkan awalan\t: " ;cin >> n;
  cout << "masukkan akhiran : " ; cin >> m;
  cout << "masukkan selisih : " ; cin >> z;
  x = n ;
  while(x <= m)
  {
    cout << x << " ";
    x = x + z;
  }
  
}