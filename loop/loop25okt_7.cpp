#include <iostream> 
using namespace std;

//kamus 
int a,b,c; 
int sum;

//deskripsi 
main()
{
  a = 5; 
   
  while(a <= 9 )
  {
    b = 5;
    c = 0;
    do
    {
      
      cout << b << " + ";
      c += b;
      b = b + 1;
    }while(b <= 9  );
    cout << "= " << c ; 
    a = a + 1;
    cout << endl;
  }

}