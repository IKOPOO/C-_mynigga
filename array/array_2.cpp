#include<iostream>
using namespace std;


//kamus 
int dataNA[6],x,y;
float hasil;
float rata;


//deskripsi
main()
{
  cout << "latihan array \n";
  x = 0;
  do{
    cout << "masukkan bilangan : " ; cin >> dataNA[x];
    x = x + 1;
    
  }while(x < 6);

  y = 0; 
  do{
    cout << "bilangan " <<  dataNA[y] << endl;
    y = y + 1;
  }while( y < 6);

  hasil = dataNA[4] + dataNA[5] + dataNA[0] + dataNA[2] + dataNA[3] + dataNA[1];
  rata = hasil / 6;
  cout << hasil ; 
  cout << "\n" << rata;
}
