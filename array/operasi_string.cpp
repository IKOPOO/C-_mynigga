#include<iostream>
#include<string>
using namespace std;


int main(){
    
  //mencari kata di dalam string berdasarkan index nya 
  string kata = "mabil";
  cout << kata << endl; 
  cout << kata[0] << endl; 

  //merubah karakter menggunakan index 
  kata[1] = 'o';
  cout << kata << endl;

  //menyambungkan string, concatenation 
  string kata2(kata + "lio"); 
  cout << kata2 << endl; 
  
  //menyambunkan dua variabel string sehingga menjadi satu kata 
  string kata3("ertiga");
  // kata2.append( kata3);      // <-- dengan cara di samping juga bisa 
  // cout << kata2 << endl; 

  kata2.append(" " + kata3);
  cout << kata2 << endl; 

  string kata4 = "suuuuzuuuukiiiii"; 
  kata2 += " " + kata4; 
  cout << kata2 << endl; 

}