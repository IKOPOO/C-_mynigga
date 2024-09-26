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


//prosedur memasukkan data nama, jam, menit, detik bangun dan tidur 
void masukdata(){
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
    
     
    y = y + 1;
  }
}

  //fungsi konversi waktu tidur 
  waktu konversit(int y){
      
      //kamus lokal
      waktu totaltidur;
      
      // deskripsi 

      //mengkonversi detik ko format jam 
      while(y < 2){
        int totaldtk = (tidur[y].j * 3600) + (tidur[y].m * 60) + tidur[y].d;
      
        totaltidur.j = totaldtk / 3600;
        totaldtk %= 3600;
        totaltidur.m = totaldtk / 60;
        totaltidur.d = totaldtk % 60;
      }
      

      return totaltidur;
  };

waktu konversib(int y){

  //kamus lokal
  struct waktu totalbangun;

  //deskripsi 
    //mengkonversi format detik ke jam
    while(y < 2){
      int totaldtk = (bangun[y].j * 3600) + (bangun[y].m * 60) + (bangun[y].d);

      totalbangun.j = totaldtk / 3600;
      totaldtk %= 3600;
      totalbangun.m = totaldtk / 60;
      totalbangun.d = totaldtk % 60;
    }
    
    
  return totalbangun;
};

waktu kurang_durasi(){
  //kamus lokal 
  int y = 0; 
  waktu konversi[2];
  waktu totaldata;

  //deskripsi 
  while (y < 2)
  {
    waktu totalTidur = konversit(y);
    waktu totalBangun = konversib(y);
     
    konversi[y].j = totalBangun.j - totalTidur.j;
    konversi[y].m = totalBangun.m - totalTidur.m;
    konversi[y].d = totalBangun.d - totalTidur.d;

    y = y + 1; 
  }

  totaldata.j = konversi[0].j + konversi[1].j;
  totaldata.m = konversi[0].m + konversi[1].m;
  totaldata.d = konversi[0].d + konversi[1].d;

  return totaldata;
}

void tampil_data(){ //void untuk menampilkan data waktu tidur masing masing orang 
  
  //kamus lokal
    int x = 0 ;
    waktu kurang[2];
    
  //deskripsi
    while( x < 2){
      //mengeluarkan hasil tidur setelah di konversi 
        kurang[x] = kurang_durasi();
        cout << "total waktu tidur orang ke "<< x + 1 << setw(15) << nama[x] << " = " << kurang[x].j << " jam " << kurang[x].m << " menit " << kurang[x].d << " detik \n";
        
        x += 1;
        
      }
}

main()
{
  
  //memanggil void memasukkan data
  masukdata();

  //memanggil fungsi pengurangan waktu 
  kurang_durasi();

  //memanggil void tampil data waktu yang telah di konversi 
  tampil_data();
   
 // Melakukan perbandingan waktu tidur
 /*
int tidurkebo = 0;
int tidurnormal = 0;
int oraturug = 0;
int jamm[2]; 
int z = 0;


while (z < 2) {
    //kondisi untuk menemukan siapa yang tidur duluan 
    if (tidur[z].j < tidur[tidurnormal].j || (tidur[z].j == tidur[tidurnormal].j && tidur[z].m < tidur[tidurnormal].m) || (tidur[z].j == tidur[tidurnormal].j && tidur[z].m == tidur[tidurnormal].m && tidur[z].d < tidur[tidurnormal].d)) 
    {
        tidurnormal = z;
    }

    //kondisi untuk menemukan durasi tidur paling lama  
     if(kurang[z].d > kurang[oraturug].d)
    {
      oraturug = z; 
      jamm[z] = oraturug;
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
 */ 
}