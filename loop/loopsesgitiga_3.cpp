 /*
      *
     **
    ***
   ****
  *****
 */
 #include<iostream>
 using namespace std; 

//kamus 
 int n,i,j,k;

//deskripsi 
 main(){
  
  cout << "masukkan panjang polanya : " ; cin >> n; 
    //melakukan perulangan ke samping 
    i = 1; //2 3 4 5 
    while(i <= n){ // 5 --> nilai n tetap dan tidak berubah 

      //melakukan looping spasi ke samping 
      j = n; //5 4 3 2 1 nilai j berkurang setiap loop selesai berjalan
      while( j >=i ){ //5 4 3 2 1
        
        cout << " " ;
        j--; //4 3 2 1
      } 
      //melakukan looping bintang ke samping 
      k = 1; 
      while( k <= i ){ //1 2 3 4 5 nilai k bertambah setiap loop selesai berjalan 
        cout << "*";
        k++; //2 3 4 5
      }
      cout << endl; 
      i++; //2 3 4 5 
    }

     
}