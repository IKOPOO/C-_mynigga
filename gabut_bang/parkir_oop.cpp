#include<iostream>
#include<chrono>
#include<ctime>
#include<sstream>
#include<iomanip>
using namespace std; 


class kendaraan{
  public : 
    struct mobil{
      string noPlat,jeniskendaraan,waktuMasuk,waktuKeluar;
      int noParkir;

      mobil* next; 
      
    };
    mobil *head,*current, *tail;
    //constructor untuk head tail dan current
    //menggunakan konsep initializer list 
    kendaraan() : head(nullptr), tail(nullptr), current(nullptr){}; 
    
    //fungsi untuk sebuah membuat node 
    mobil* buatnode(const mobil &data){

      mobil* newnode = new mobil;
      newnode ->noPlat = data.noPlat; 
      newnode ->jeniskendaraan = data.jeniskendaraan; 
      newnode ->noParkir = data.noParkir; 
      newnode ->waktuMasuk = data.waktuMasuk; 
      newnode ->waktuKeluar = data.waktuKeluar; 
      newnode ->next = nullptr; 
      return newnode;  
    }

    //prosedur tampilkan data dari kendaraan yang ada di dalam 
    void tampil_data(){
      current = head; 
      while(current != nullptr){
        cout << "no Plat : " << current->noPlat << endl; 
        cout << "no parkir : " << current ->noParkir << endl; 
        cout << "jenis kendaraan : " << current->jeniskendaraan << endl; 
        cout << "waktu masuk : " << current->waktuMasuk << endl; 
        cout << "waktu keluar : " << current ->waktuKeluar << endl;  
        current = current->next; 
      }
    };

  friend class masuk; 

};

class masuk{
  public : 
    void masukmobil(kendaraan &input, const string &noplat, string &jeniskendaraan, int noparkir, string &waktumasuk){
        // kendaraan::mobil* newmobil = input.buatnode({noplat, jeniskendaraan,noparkir, waktumasuk});
    }
};
