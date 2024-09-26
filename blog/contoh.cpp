#include <iostream>
using namespace std;

int array2D[2][3];
int a, b, c, d;


main()
{
    a = 0;
    while(a < 2) {
        b = 0;
        while(b < 3) {
            cout << "Input data [" << a << "][" << b << "] : ";
            cin >> array2D[a][b];
            b = b + 1;
        }
        a = a + 1;
    }

    c = 0;
    while(c < 2) {
        d = 0;
        while(d < 3) {
            cout << array2D[c][d] << "  ";
            d = d + 1;
        }
        cout << endl;
        c = c + 1;
    }
}