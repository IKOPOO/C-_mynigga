// judul: mengurutkan nomer dari yg terbesar ke terkecil
// Muhammad Daniyal Haq
//         misal 1234 jadi 4321
#include <iostream>
using namespace std;
// rumus:
int A,B,C,D;

// Deskripsi

main(){
cout << "mengurutkan 5 bilangann" << endl;
cin >> A;
cin >> B;
cin >> C;
cin >> D;
  if(A >= B && A >= C && A >= D){
    if (B >= C && B >= D){
        cout << A << B << C << D;
    } else if (C >= B && C >= D){
        cout << A << C << D << B;
    } else{
        cout << A << D << B << C;
    }
} else if(B >= A && B >= C && B >= D){
    if (A >= C && A >= D){
        cout << B << A << C << D;
    } else if(C >= A && C >= D){
        cout << B << C << D << A;
    } else {
        cout << B << D << A << C;
    }

} else if(C >= A && C >= B && C >= D){
    if (A >= B && A >=D){
        cout << C << A << B << D;
    } else if(B >= A && B >= C){
        cout << C << B << D << A;
    } else{
        cout << C << D << A << B;
    }

} else {
    if( A >= B && A >= C){
        cout << D << A << B << C;
    } else if (B >= A && B>=C){
        cout << D << B << C << A; 
    } else{
        cout << D << C << A << B;
    }
}
}

 