#include <iostream>
using namespace std;

//kamus 
int indomie,bihun,mie_lidi;
int jenis_mie;
int jenis_masakan, jenis_bihun;
//deskripsi
main(){
  //judul 
  cout << "Selamat Datang Di MI MAMA \n";
  cout << "Mau masak apa hari \n";
  cout << "Menu Mi : \n";
  cout << "=================================================================== \n";
  //jenis jenis mie nya 
  cout << "1.Indomie \n";
  cout << "2.Bihun \n";
  cout << "3.Mie Lidi \n";
  cout << "Masukkan pilihan mie kamu : " ;cin >> jenis_mie;
  cout << "==================================================================== \n";
  switch (jenis_mie)
  {
    //pertukaran jika kita takan angka satu munculnya di bawah ini 
    case 1 : 
        {
          //yang keluar jika tekan angka 1
          cout << "mau indomie kepiyee \n";
          cout << "1.nyemek \n";
          cout << "2.tektek \n";
          cout << "3.godog \n";
          cout << "Tentukan pilihanmu : "; cin >> jenis_masakan;
          cout << "=====================Resep masakan================================== \n";
          if (jenis_masakan == 1)
                  {
                    cout << "1.Panaskan sedikit minyak dalam wajan, lalu masukkan telur, kemudian orak arik hingga matang \n";
                    cout << "2.Sisihkan telur orak arik ke pinggiran wajan, lalu tambahkan sedikit minyak goreng, kemudian tumis bawang putih yg sudah dicincang hingga harum \n";
                    cout << "3.Tambahkan 1 gelas air, tunggu hingga mendidih, kemudian masukkan sawi hijau \n";
                    cout << "4.Setelah sawi hijau agak layu, masukkan indomie dan bumbunya. Setelah mie setengah matang tambahkan sedikit garam, kecap manis dan cabe rawit \n";
                    cout << "5.Tunggu hingga mie matang & kuah agak menyusut. Kemudian pindahkan ke piring dan taburi bawang goreng. Indomie nyemek siap disajikan. \n";
                   
                  }
                else if (jenis_masakan == 2)
                    {
                      cout << "1.Rebus setengah matang mie, tiriskan lalu campurkan dengan minyak bawang dari kemasan mie instan. Sisihkan. \n";
                      cout << "2.Cincang bawang putih dan bawang merah. Tumis hingga harum dan matang. \n";
                      cout << "3.Masukkan telur kocok, aduk orak arik \n";
                      cout << "4.Masukkan potongan sayu sawi dan kubis, tumis hingga layu \n"; 
                      cout << "5.Masukkan potongan cabai, daun bawang, dan seledri. Masukkan pula semua bumbu mie instan, tambahkan kecap manis secukupnya \n";
                      cout << "6.Jika suka, boleh tambahkan garam dan lada bubuk \n";
                      cout << "7.Masukkan mie, aduk rata. JIka terlalu kering,boleh tambahkan air panas sedikit, masak hingga agak mengering atau bumbu sudah meresap. Angkat \n";
                      
                    }
                  else if(jenis_masakan == 3)
                      {
                        cout << "1.Panaskan minyak kemudian masukkan telor goreng menjadi orak arik dan tambahkan bawang putih cincang dan daun bawang tumis sampai harum kemudian masukkan air biarkan sampai mendidih \n";
                        cout << "2.Setelah mendidih masukkan mie dan bumbu mie kecuali bawang goreng masak mie sampai setengah matang susuklan daun sawi masak sampai keduanya matang. \n";
                        cout << "3.Siapkan mangkuk tuang mie kedalam mangkuk tambahkan bawang goreng, cabai potong dan tomat iris \n";
                        cout << "4.Mie godok siap di sajikan \n";
                        
                      }
                     
          else 
          {
            cout << "tidak tau resepnya yaa  \n";
          }
          break;
        }
    case 2 : 
        {
          cout << "Bihunnya mau di apain ki : \n";
          cout << "1.bihun goreng \n";
          cout << "2.bihun kuah \n"; cin >> jenis_bihun;
          cout << "=====================Resep masakan================================== \n";
          if (jenis_bihun == 1)
            {
              cout << "1.Panaskan minyak, tumis bumbu yang telah dihaluskan hingga harum \n";
              cout << "2.Kecilkan api, sisihkan bumbu sebentar, masak telur orak arik hingga matang \n";
              cout << "3.Tambahkan bakso, daging ayam dan ati ampela,aduk rata \n";
              cout << "4.Masukkan kembang dan daun sawi, masak semua bahan hingga kembang kol dan daun sawi layu \n";
              cout << "5.Masukkan mie bihun yang telah direndam dan ditiriskan, aduk rata \n";
              cout << "6.Tambahkan kecap manis, kecap asin, saus tiram, kaldu jamur bubuk, lada bubuk, dan penyedap rasa. Aduk rata \n";
              cout << "7.Tambahkan bawang goreng dan daun bawang, aduk rata kemudian korekski rasa \n";
              cout << "8.Angkat dan sajikan bihun goreng ala solaria yang enak dan menggugah selera";
            }
            else if (jenis_bihun == 2)
                {
                  cout << "1.Rebus bihun sampai empuk dan lembut, tiriskan \n";
                  cout << "2.Panaskan minyak, tumis bawang putih sampai harum, masukkan air, tambhkan jahe, didikan. Bubuhkan garam, merica bubuk, kaldu ayam bubuk \n";
                  cout << "3.Masukkan caisim dan bakso ikan, cabai, bubuk, dan minyak wijen, masak sebentar, matikan air \n";
                  cout << "4.siapkan mangkuk, tata bihun, taburi daun bawang di atasnya, siram dengan kuah panas beserta caisim dan bakso ikan, telur rebus setengah matang. Sajikan hangat \n";
                }
          else 
            {
              cout << "mboh mas ra ngerti karepmu opo ki \n";
            }
            break;
        }
    case 3 : 
        {
          cout << "=====================Resep masakan================================== \n";
          cout << "1.rebus mie lidi sampai matang dan jangan telalu lembek. Tiriskan mie setelah matang dan sisakan air rebusan sekitar satu gelas. \n";
          cout << "2.Halus bawang merah.bawang putih,kunyit, kemiri, cabai rawit, dan jahe.";
          cout << "3.Siapkan wajan dan beri minyak secukupnya. Masukkan bumbu halus dan tumis sampai harum \n";
          cout << "4.Masukkan bakso aduk sebentar lalu masukkan mie yang telah direbus. Aduk rata \n";
          cout << "5.Masukkan air rebusan mie yang disisakan lalu tambahkan gula, garam dan merica. Aduk rata \n";
          cout << "6.Masukan potongan seledri dan tomat, aduk sebentar hingga rata. \n";
          cout << "7.Mie gomak goreng siap disajikan bersama kerupuk dan potongan timun. \n";
          break;
        }
        default : 
          {
            cout << "mboh ra ngerti opo gelemmu \n";
          }
          break;
  }
  

}