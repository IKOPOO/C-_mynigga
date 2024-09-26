#include <iostream>
using namespace std;

int a,k;


main(){
  k = 0;
 
  while(k < 10){
    a = 1;
    do{
      cout << " " << a ;
      a=a+1;
    }while(a < 10 - k);
    
   k = k + 1;
    cout << endl;
  }
}