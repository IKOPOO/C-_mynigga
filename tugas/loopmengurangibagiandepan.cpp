#include <iostream>
using namespace std;

int main() {
    int k, c;
    k = 16;
    while (k >= 2) {
        c = k;
        while (c >= 2) {
            cout << c << " ";
            c -= 2;
        }
        cout << endl;
        k -= 2;
    }
   
 

    

 
   

}

