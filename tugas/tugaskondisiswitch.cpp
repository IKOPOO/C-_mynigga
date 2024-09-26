// judul : belajar case switch
// lab 2 okt 2023
#include <iostream>
using namespace std;

// kamus
int pil, selera, dimana;
int berapa, apa;
int dimanaa, kopi, ndi, mana;
int dimanaaa;

// diskripsi
main()
{
    cout << "acara siang setelah kuliah" << endl;
    cout << "1. makan " << endl;
    cout << "2. ngopi " << endl;
    cout << "3. nongki nongki " << endl;
    cout << "4. pulang tidur " << endl;
    cout << "5. pulang nyuci " << endl;
    cout << "masukan angka pilihan anda" << endl;
    cin >> pil;
    switch(pil)
    {
        case 1 : {
                    cout << "makan " << endl;
                    cout << "meh mangan opo ? " << endl;
                    cout << "1. seger " << endl;
                    cout << "2. pedes " << endl;
                    cout << "3. junkfood " << endl;
                    cout << " masukan angka pilihan anda " << endl;
                    cin >> selera;
                    if (selera == 1)
                        {
                            cout << "bakso pak kumisan";
                            cout << "dimana 1. DPMALL 2. Splima 3. njoar, masukan pilihan anda" ; cin >> dimana;
                            switch (dimana)
                            {
                                case 1 :
                                    {
                                        cout << "di DPMALL";
                                        break;
                                    }
                                case 2 :
                                    {
                                        cout << "Splima";
                                        break;
                                    }
                                case 3 :
                                    {
                                        cout << " njoar ";
                                        break;
                                    }
                                default :
                                    {
                                        cout << "rak ono lianem sutar wae";
                                    }
                            }

                        }
                    else    if (selera == 2)
                                {
                                    cout << "diseblak sandal";
                                }
                            else    if (selera == 3)
                                        {
                                            cout << "berger pakDi";
                                        }
                                    else
                                        {
                                             cout << "ora ngerti karepmu opo \n";
                                             cout << "golei dewe karepmu opo dancuk \n";
                                        }
                    break;
                 }
        case 2 : {
                    cout << "minum \n";
                    cout << "mau minum apa hayoo ?? \n";
                    cout << "1.manis \n";
                    cout << "2.pahit \n"; 
                    cout << "3.asem \n";
                    cout << "pilih meh ngumbe opo?? " << endl;
                    cin >> apa;
                    if (apa == 1)
                        {
                            cout << "Es teh manis" << endl;
                            cout << "dimana ? " << endl; 
                            cout << "1.es teh kota \n";
                            cout << "2. STM (es teh manis) \n";
                            cout << "3 gawe dewe \n";
                            cout << "masukkan pilihanmu :  \n"; cin >> dimanaa;
                            switch(dimanaa)
                            {
                                case 1 : 
                                {
                                    cout << " Di tembalang toko es teh kota";
                                    break;
                                }
                                case 2 : 
                                {
                                    cout << "Di simpang lima toko STM";
                                    break;
                                }
                                case 3 : 
                                {
                                    cout << "neng omah mu dewe";
                                    break;
                                }
                                default : 
                                { 
                                    cout << "ra ngerti golek dewe";
                                }
                            }
                        }
                    else    if(apa == 2)
                    {
                        cout << "kopi hitan tanpa gula \n";
                        cout << "kopi apa ? \n";
                        cout << "1.tubruk gajah \n ";
                        cout << "2.tubruk angin \n ";
                        cin >> kopi;
                        switch (kopi)
                        {
                            case 1 : 
                            {
                                cout << "cari gajah nubruk kopi";
                                break;
                            }
                            case 2 : 
                            { 
                                cout << "lompat dari gedung ben nubruk angin";
                                break;
                            }
                            default :
                            {
                                cout << " sakarepmu dewe ";
                                break; 
                            }
                        }
                        
                    }
                    else    if(apa == 3)
                             {
                                 cout << " jeruk nipis karo es lemon ";
                             }
                            else {
                                cout << "bikin sendiri";
                            }
                    break;
                 }
        case 3 : {
                    cout << "nongki nongki " << endl;
                    cout << "nongki dimana ??" << endl;
                    cout << "1.angkringan" << endl;
                    cout << "2.kafe" << endl; 
                    cout << "3.pinggir jalan" << endl;
                    cout << "pilihhhh : "; cin >> dimanaa;
                   if(ndi == 1)
                   {
                    cout << "angkringan mana " << endl;
                    cout << "1.pak adit" << endl;
                    cout << "2.pak pahan" << endl;
                    cin >> mana;
                    switch(mana)
                    {
                        case 1 : 
                        {
                            cout << "jalan muda";
                            break;
                        }
                        case 2 : 
                        { 
                            cout << "jalan tua ";
                            break;
                        }
                        default : 
                        {
                            cout << " cari sendiri";
                            break; 
                        }
                    }
                   }
                   else    if( ndi == 2)
                        {
                            cout << "kafe mana ?" << endl; 
                            cout << "1.kafe mentari" << endl; 
                            cout << "2.kafe muntara " << endl;
                            cin >> dimanaaa;
                            switch(dimanaaa)
                            {
                                case 1 : 
                                {
                                    cout << "jalan mentari";
                                    break;
                                }
                                case 2 : 
                                { 
                                    cout << "jalan mumuntari";
                                    break;
                                }
                                default : 
                                {
                                    cout << "ngga tau aku ";
                                    break;
                                }
                        
                            }
                        }
                        else if(ndi == 3)
                        {
                            cout << " yowes neng pinggir jalan ndi wae";
                        }
                        else { 
                            cout << "terserah dimana aja ";
                        }
                    break;
                 }
        case 4 : {
                    cout << "pulang tidur"<< endl;
                    break;
                 }
        case 5 : {
                    cout << "pulang nyuci" << endl;
                    break;
                 }
        default :
            {
               cout << " tidak ditemukan pilihan anda";
            }
    }
}
