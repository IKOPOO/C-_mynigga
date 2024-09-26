#include <iostream>
using namespace std;

int main(){
    int k,c;
    k = 0;
    while(k < 8){
        c = 1;
        do{
            cout << " " << c;
            c++;
        }
        while(c < 9 - k);
        cout << endl;
        k++;
        
    }
}