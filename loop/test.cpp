#include <iostream>
using namespace std;

// Kamus
int i, j, y, n;
int jml;
int total = 0;  // Initialize total to 0

// Deskripsi
int main()  // Specify the return type of main
{
    
    i = 9;
    n = 4;
    while (i >= n)
    {
        j = 5;
        jml = 0;
        while (j <= i)
        {
            cout << j << " ";
            jml = jml + j;
            j++;
            
        }
        cout << " = " << jml;
        total += jml;  // Add jml to total
        cout << endl;
        i--;
    }

    cout << "= " << total << endl;  // Print the total at the end
 
    
  
//looping kedua 
/*
10 9 8 7 6 5 4 3 2 1 
10 9 8 7 6 5 4 3 2 
10 9 8 7 6 5 4 3 
10 9 8 7 6 5 4 
10 9 8 7 6 5 
10 9 8 7 6 
10 9 8 7 
10 9 8 
10 9 
10 
*/
//kamus
int a,b;

//deskripsi

  a = 1; 
  //looping terluar melakukan lopping deret ke samping ke bawah 
  do{
    //melakukan looping deret ke samping : 10 9 8 7 6 5 4 3 2 1 
    b = 10; //parameter looping inner 
    while(b >= a)
    {
      cout << b << " ";
      b = b - 1;
    }

    cout << endl;    
    a = a + 1;

  }
    while(a <= 10 );

   

     


}

