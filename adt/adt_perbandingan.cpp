//judul : mencoba array dan adt 
#include<iostream>
#include<string>
#include<iomanip> 
using namespace std; 

//kamus global  
int totaltdr,totalbngn;
/* 
    membuat adt dari jam 
    jam terdiri dari jam , detik , menit ;
*/
struct waktu{
  int j;
  int m;
  int d;

};
void garis(){

  cout << endl;
  int y = 0;
  while(y < 55){
    cout << "*";
    y = y + 1;
  }
  cout << endl;
};

struct waktu totalw[2]; //tempat menyimpan data tidur yang sudah di konversi 
struct waktu tidur[2];
struct waktu bangun[2];
string nama [2];

//fungsi konversi waktu tidur 
waktu konversit(int i){
    
    //kamus lokal
    waktu totaltidur;
      
    // deskripsi 

    //mengkonversi detik ko format jam 
    
        int totaldtk = (tidur[i].j * 3600) + (tidur[i].m * 60) + tidur[i].d;
    
        totaltidur.j = totaldtk / 3600;
        totaldtk %= 3600;
        totaltidur.m = totaldtk / 60;
        totaltidur.d = totaldtk % 60;
    
    

    return totaltidur;
};

waktu konversib(int i){

  //kamus lokal
  waktu totalbangun;
  

  //deskripsi 
    //mengkonversi format detik ke jam    
      int totaldtk = (bangun[i].j * 3600) + (bangun[i].m * 60) + (bangun[i].d);

      totalbangun.j = totaldtk / 3600;
      totaldtk %= 3600;
      totalbangun.m = totaldtk / 60;
      totalbangun.d = totaldtk % 60;
  
    //}
    
    
  return totalbangun;
};


main()
{
  garis();
  //melakukan pengisian nama 
  cout << "program perbandingan waktu tidur \n";
 
  garis();
 
  int y = 0;
  while(y < 2){
        //memasukkan data nama dan waktu tidur
      cout << "memasukkan waktu tidur \n";
      cout << "masukkan nama orang ke " << y + 1 << setw(11) <<  " = " ; cin >> nama[y];
      cout << "masukkan jam tidur" << setw(17) << " = "; cin >> tidur[y].j;
      cout << "masukkan menit tidur"<< setw(15) << " = "; cin >> tidur[y].m;
      cout << "masukkan detik tidur"<< setw(15) << " = "; cin >> tidur[y].d;

      garis();
        //memasukkan data nama orang dan waktu bangun tidur 
      cout << "masukkan waktu bangun \n";
      cout << "masukkan nama orang ke " << y + 1 << setw(11) << " = "; cin >> nama[y];
      cout << "masukkan jam bangun" << setw(16) << " = " ; cin >> bangun[y].j;
      cout << "masukkan menit bangun" << setw(14) << " = " ; cin >> bangun[y].m;
      cout << "masukkan detik bangun" << setw(14) << " = "  ; cin >> bangun[y].d;

      garis();

      //memanggil fungsi konversi untuk mengkonversi 
      waktu totalTidur = konversit(y);
      waktu totalBangun = konversib(y);
     
     totalw[y].j = totalBangun.j - totalTidur.j;
     totalw[y].m = totalBangun.m - totalTidur.m;
     totalw[y].d = totalBangun.d - totalTidur.d;
     
      y = y + 1;
  }
    
      int x = 0 ;
      while( x < 2){
      //mengeluarkan hasil tidur setelah di konversi 
        cout << "total waktu tidur orang ke "<< setw(15) << x + 1  << " = " << totalw[x].j << " jam " << totalw[x].m << " menit " << totalw[x].d << " detik " << endl;
        x += 1;
        
      }
   
 // Melakukan perbandingan waktu tidur
int tidurkebo = 0;
int tidurnormal = 0;
int oraturug = 0;
int z = 0;


while (z < 2) {
    //kondisi untuk menemukan siapa yang tidur duluan 
    if (tidur[z].j < tidur[tidurnormal].j || (tidur[z].j == tidur[tidurnormal].j && tidur[z].m < tidur[tidurnormal].m) || (tidur[z].j == tidur[tidurnormal].j && tidur[z].m == tidur[tidurnormal].m && tidur[z].d < tidur[tidurnormal].d)) 
    {
        tidurnormal = z;
    }

    //kondisi untuk menemukan durasi tidur paling lama  
     if((totalw[z].j > totalw[oraturug].j) || (totalw[z].j == totalw[oraturug].j && totalw[z].m > totalw[oraturug].m) || (totalw[z].j == totalw[oraturug].j && totalw[z].m == totalw[oraturug].m && totalw[z].d > totalw[oraturug].d))
    {
      oraturug = z; 
    }

    //kondisi untuk menemukan siapa yang tidur belakangan 
     if(bangun[z].j > bangun[tidurkebo].j || (bangun[z].j == bangun[tidurkebo].j && bangun[z].m > bangun[tidurkebo].m) || (bangun[z].j == bangun[tidurkebo].j && bangun[z].m == bangun[tidurkebo].m && bangun[z].d > bangun[tidurkebo].d))
    {
      tidurkebo = z;
    }

    
    z += 1;
}

cout << "orang yang tidur duluan " << " = " << setw(15) << nama[tidurnormal] << " : " << " jam " << tidur[tidurnormal].j << " menit " << tidur[tidurnormal].m << " detik " << tidur[tidurnormal].d << "\n";
garis();
cout << "orang yang tidur belakangan  " << " = " << setw(15) << nama[tidurkebo] << " jam " << tidur[tidurkebo].j << " menit " << tidur[tidurkebo].m << " detik " << tidur[tidurkebo].d << "\n";
garis();
cout << "orang yang tidur paling lama " << " = " << setw(10) << nama[oraturug] << " jam " << totalw[oraturug].j << " menit " << totalw[oraturug].m << " detik " << totalw[oraturug].d << "\n";
garis();
  
}