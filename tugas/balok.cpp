//Judul	: menghitung luas volume balok 
/*Rumus untuk menghitung jumlah Panjang, lebar, tinggi
	Panjang	= 2 * ( p * l * t )
	Lebar 		= 2 * ( p * l * t ) 
	Tinggi		= 2 * ( ( p * l ) + ( p * t ) + ( l * T ) ) 
  Volume 	= p * l * t
  Luas		= 2 * ( ( p * l ) + ( p * t ) + ( l * T ) )
*/
//Oleh 	: penulis 
//Waktu	: 14 desember 2023, semarang 

#include<iostream>
using namespace std;


//Kamus 
	
	int Panjang;
	int Lebar;
	int Tinggi;
	int Luas;
	int Volume;


//Deskripsi   
main(){

	//disini kita memasukkan nilai ke dalam variabel panjang, lebar, tinggi
	cout << "menghitung luas dan volume balok" << endl; 
	cout <<  "Panjang :";
	cin >> Panjang ;
	cout << "tinggi : " ;  
	cin >> Tinggi;
	cout << "lebar : " ; 
	cin >> Lebar ;  

	//deklarasikan rumus luas di atas ke dalam program
	Luas = 2 * ( ( Panjang * Lebar ) + ( Panjang * Tinggi ) + ( Lebar * Tinggi ) ) ;
	//menampilkan hasil dari operasi rumus di atas agar kelihatan 
	cout << "luas permukaan balok = " << Luas << endl;  
	
	//deklarasikan rumus volume di atas ke dalam program 
	Volume = Panjang * Lebar * Tinggi; 
	//menampilkan hasil dari operasi rumus di atas agar kelihatan 
	cout << "volume = " << Volume << endl;
}


// ini adalah baris komentar satu baris 

// ini hanya bisa digunakan di satu baris ini saja 
	

/*
	ini adalah baris komentar yang mencakup beberapa garis
	ini bisa dugunakan untuk beberapa garis, jika kita menuliskan
	di dalam antara dua garis atas dan bawah
*/