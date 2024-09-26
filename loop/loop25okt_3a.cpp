/*
  judul : MEMBUAT PERHITUNGAN INPUT AWALAN AKHIRAN DAN OPERATOR INPUTAN (*,/,+,-)
  oleh  : rico andre pratama 
  waktu : semarang, 28 oktober 2023
*/
#include <iostream>
using namespace std;

//kamus 
int awal,akhir,a,b;
char o;
int x,j,c;
//deskripsi 
main()
{
  cout << "masukkan bilangan awal \t: "; cin >> awal ; 
  cout << "masukkan bilangan akhir : "; cin >> akhir;
  cout << "pilih operator *,/,+,- \t: "; cin >> o;
 // a = awal;
  //b = akhir;
  c = 1;

 while( awal <= akhir )
 {
  if(o == '*')
    {
      cout << awal << " * ";
      c = c * awal;
      
    }
    else if (o == '/')
      {
        cout << awal << " / ";
        c = c % awal;
      
      }
      else if(o == '+')
        {
          cout << awal << " + ";
          c = c + awal;
          
        }
        else if(o == '-')
          {
            cout << awal << " - ";
            c = c - awal;
            
          }
  else 
    {
      cout << " tidak ada operator \n";
    }
  
    awal = awal + 1;
    
 }

    cout << " = " << c;

}

