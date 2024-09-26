#include<iostream>
#include<algorithm>
using namespace std; 


int main(){


  int array [] = {2,3,6,8,1,5};
  int ukuran  = sizeof(array) / sizeof(array[0]);

  //cari angka 
  int cariAngka = 0; 
  bool ketemu; 

  //sorting terlebih dahulu
  sort(array, array + ukuran);

  for(int x = 0; x < ukuran; x++){
    cout << array[x]; 
  }

  ketemu = binary_search(array, array + ukuran, cariAngka);
  
  if(ketemu){
    cout << endl;
    cout << "data di temukan : " << endl; 
  }else{
    cout << "data tidak di temukan :" << endl;
  }
}