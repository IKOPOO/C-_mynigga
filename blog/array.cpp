#include <iostream>
using namespace std;


//kamus 

string mobil [5] = {"toyota","bmw","ford","nissan","lamborghini"};
int x;
//deskripsi 

main(){

    x = 0; // digunakan sebagai penyebut indek dalam array 
    
    do{

        cout << "data array ke " << x << " adalah : " << mobil[x] << endl;
        
        x = x + 1;

    }while(x < 5);

}