#include <iostream>
using namespace std;

int a,k;


main(){
  k = 0;
  while(k < 6){
    a = 1;
    do{
      cout << " " << a ;
      a++;
    }while(a < 7 - k);
    
    k++;
    cout << endl;
  }
}