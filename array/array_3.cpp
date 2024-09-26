// uji coba dan latihan array 
#include <iostream>
using namespace std;
// kamus 
int dataNA[6];
int Hasil;
//diskripsi
int main() 
{
    cout << "latihan array!" << endl;
        cin >> dataNA[0];
        cin >>  dataNA[1];
        dataNA[2] = 20;
        dataNA[3] = 40;
        dataNA[4] = 45;
        cin >> dataNA[5];
        Hasil =  dataNA[4] +dataNA[0]+dataNA[5]+dataNA[2]+dataNA[3]+dataNA[1] ; 
        cout  << Hasil;
        
    return 0;
}