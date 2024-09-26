//judul	: percobaan nested conditional
//oleh	: penulis 
//waktu : 24 desember 2023 
#include<iostream> 
using namespace std; 

//kamus 

	int angka;


//deskripsi 

main (){
	cout << "masukkan bilangan" ;
	cin >> angka ;

	//ini adalah kondisi awal 
	if (angka != 0 ){
    //ini adalah kondisi jika kondisi awal terpenuhi 
		if ((angka % 2) == 0 ){
			cout << " ini bilangan genap" ;
		}
		else{ // ini kondisi jika kondisi di atas tidak terpenuhi 
			cout << "ini bilangan ganjil";
		}
	}
	else {  //ini adalah kondisi jika kondisi awal tidak terpenuhi
		cout << " bilangan ini tidak genap ataupun ganjil" ;
	}
}