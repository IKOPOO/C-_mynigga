#include <iostream> 
using namespace std;

//kamus 
int a,b,c;

//deskripsi 
main()
{
 a = 1;
  while(a <=4 )
  {
    
    b = 10;
    c = 0;
    do
    {
      cout << b << " + ";
      c = c + b;
      b = b - 1;
    }
    while(b >= 4);
    cout << "= " << c;
    cout << endl;
    a = a + 1;
  }


}
