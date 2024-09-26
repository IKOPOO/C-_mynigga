#include <iostream>

using namespace std;


int main()
{
    //Daftar Makanan dan Harga
    string makanan[] = {"Nasi Rames","Nasi Goreng","Nasi Uduk","Nasi Pecel"};
    int harga[] = {7000,12000,6000,8000};

    //Menampilkan Menu
    cout<<"Menu Makanan"<<endl;
    for(int a = 0;a < 4;a++){
        cout<<a+1<<". "<<makanan[a]<<" -RP."<<harga[a]<<endl;
    }


    cout<<"=========================================================="<<endl;



    //Input
    int pilihan;
    cout<<"Pilih Menu Makanan [1-4] : ";
    cin>>pilihan;

    if(pilihan == 1){
        cout<<"Anda Memesan Nasi Rames"<<endl;
    }else if(pilihan == 2){
        cout<<"Anda Memesan Nasi Goreng"<<endl;
    }else if(pilihan == 3){
        cout<<"Anda Memesan Nasi Uduk"<<endl;
    }else if(pilihan == 4){
        cout<<"Anda Memesan Nasi Pecel"<<endl;
    }else {
        cout<<"Anda Memesan Menu Yang Salah"<<endl;
    }


    //Input Jumlah
    int jumlah = 0;
    cout<<"Masukan Jumlah Yang Ingin Anda Pesan : ";
    cin>>jumlah;


    cout<<"=============================================================="<<endl;
    //Total Harga

    cout<<"Harga Yang Harus dibayar Adalah : "<<harga[pilihan-1]*jumlah<<endl;





    //Menggunakan For
    int hasil = 0;

    for(int b=1;b<=4;b++){
        cout<<b<<endl;
        hasil+=b;
    }
    cout<<"Jumlah : "<<hasil<<endl;





    //Menggunakan While

    int ohoy = 0;
    int h = 1;

    while(h<=4){
        cout<<h<<endl;
        ohoy+=h;
        h++;
    }

    cout<<"Jumlah : "<<ohoy;

    return 0;
}