/*
    5 + 6 + 7 + 8 + 9 + = 35
    5 + 6 + 7 + 8 + = 26
    5 + 6 + 7 + = 18
    5 + 6 + = 11
    5 + = 5
    = 0
    = 95
*/
#include <iostream>
using namespace std;



//Kamus
int i, j, y, n;
int jml;
int total;


//Diskripsi
main()
{
    
    i = 9;//akhiran 
    n = 4;//awalan
    while(i >= n)
    {
        j = 5;
        jml = 0;
        while(j <= i)
        {
            cout << j << " + ";
            jml = jml + j;
            j++;
        }
        cout << "= " << jml ;
        total = total + jml;
        cout << endl;
        i--;
    }
        cout << "= " << total ;
}
