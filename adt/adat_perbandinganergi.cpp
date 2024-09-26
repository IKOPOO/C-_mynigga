//Judul : adt dan array Berangkat sekolah
//      : Mencari yang tiba duluan
//      : Mencari yang tiba paling terakhir
//      : Mencari yang berangkat duluan
//      : Mencari yang berangkat terakhir

#include <iostream>
using namespace std;

//Kamus
void garis()
{
    int a = 0;
    while(a < 61)
    {
        cout << "-";
        a = a + 1;
    }
    cout << endl;
}


struct JAM {
int j, m, d;
};

JAM berangkat[2], tiba[2], durasi[2];
string nama[2];

//Diskripsi
main()
{
    garis();
    cout << "Aplikasi mencari siswa yang terawal dan terakhir datang kelas" << endl;

    //Melakukan input data jam, menit, detik berangkat dan jam, menit, detik tiba di sekolah
    int b = 0;
    while(b < 2)
    {
        garis();
        cout << "Input nama siswa yang berangkat : ";
        cin >> nama[b];
        cout << "Input jam saat berangkat " << nama[b] << " : ";
        cin >> berangkat[b].j;
        cout << "Input menit saat berangkat " << nama[b] << " : ";
        cin >> berangkat[b].m;
        cout << "Input detik saat berangkat " << nama[b] << " : ";
        cin >> berangkat[b].d;
        garis();
        cout << "Input nama siswa saat tiba : ";
        cin >> nama[b];
        cout << "Input Jam saat tiba " << nama[b] << " : ";
        cin >> tiba[b].j;
        cout << "Input Menit saat tiba " << nama[b] << " : ";
        cin >> tiba[b].m;
        cout << "Input detik saat tiba " << nama[b] << " : ";
        cin >> tiba[b].d;

        b = b + 1;
    }

    //Mencari durasi sampai ke sekolah
    int c = 0;
    int duration[2];
    while(c < 2)
    {
        int totalDetikBerangkat[2], totalDetikTiba[2];
        int sisa[2];

        totalDetikBerangkat[c] = (berangkat[c].j * 3600) + (berangkat[c].m * 60) + berangkat[c].d;
        totalDetikTiba[c] = (tiba[c].j * 3600) + (tiba[c].m * 60) + tiba[c].d;
        duration[c] = totalDetikTiba[c] - totalDetikBerangkat[c];
        durasi[c].j = duration[c] / 3600;
        sisa[c] = duration[c] % 3600;
        durasi[c].m = sisa[c] / 60;
        durasi[c].d = sisa[c] % 60;

        c = c + 1;
    }


    //Mencari yang berangkatnya terawal, berangkatnya terakhir
    //Mencari yang tibanya paling awal, tibanya terakhir
    int d = 0;
    int berangkatAwal = 0;
    int berangkatAkhir = 0;
    int tibaAwal = 0;
    int tibaAkhir = 0;

    while(d < 2)
    {
        garis();
        cout << "Informasi data jam berangkat dan tiba siswa" << endl;
        garis();
        cout << "Siswa " << nama[d] << endl;
        cout << "Durasi : " << durasi[d].j << " jam " << durasi[d].m << " menit " << durasi[d].d << " detik " << endl;


        //Mencari berangkat awal
        if(berangkat[d].j < berangkat[berangkatAwal].j || berangkat[d].j == berangkat[berangkatAwal].j && berangkat[d].m < berangkat[berangkatAwal].m || berangkat[d].j == berangkat[berangkatAwal].j && berangkat[d].m == berangkat[berangkatAwal].m && berangkat[d].d < berangkat[berangkatAwal].d)
        {
            berangkatAwal = d;
        }
        //Mencari berangkat akhir
        if(berangkat[d].j > berangkat[berangkatAkhir].j || berangkat[d].j == berangkat[berangkatAkhir].j && berangkat[d].m < berangkat[berangkatAkhir].m || berangkat[d].j == berangkat[berangkatAkhir].j && berangkat[d].m == berangkat[berangkatAkhir].m && berangkat[d].d < berangkat[berangkatAkhir].d)
        {
            berangkatAkhir = d;
        }
        //Mencari tiba awal
        if(tiba[d].j < tiba[tibaAwal].j || tiba[d].j == tiba[tibaAwal].j && tiba[d].m < tiba[tibaAwal].m || tiba[d].j == tiba[tibaAwal].j && tiba[d].m == tiba[tibaAwal].m && tiba[d].d < tiba[tibaAwal].d)
        {
            tibaAwal = d;
        }
        //Mencari tiba terakhir
        if(tiba[d].j > tiba[tibaAkhir].j || tiba[d].j == tiba[tibaAkhir].j && tiba[d].m > tiba[tibaAkhir].m || tiba[d].j == tiba[tibaAkhir].j && tiba[d].m == tiba[tibaAkhir].m && tiba[d].d < tiba[tibaAkhir].d)
        {
            tibaAkhir = d;
        }

        d = d + 1;
    }

    garis();
    cout << "Siswa yang berangkat paling awal adalah " << nama[berangkatAwal] << " dengan berangkat pukul : " << berangkat[berangkatAwal].j << ":" << berangkat[berangkatAwal].m << ":" << berangkat[berangkatAwal].d << endl;
    cout << "Siswa yang berangkat terakhir adalah " << nama[berangkatAkhir] << " dengan berangkat pukul : " << berangkat[berangkatAkhir].j << ":" << berangkat[berangkatAkhir].m << ":" << berangkat[berangkatAkhir].d << endl;
    cout << "Siswa yang tiba paling awal adalah " << nama[tibaAwal] << " dengan tiba pukul " << tiba[tibaAwal].j << ":" << tiba[tibaAwal].m << ":" << tiba[tibaAwal].d << endl;
    cout << "Siswa yang tiba terakhir adalah " << nama[tibaAkhir] << " dengan tiba pukul " << tiba[tibaAkhir].j << ":" << tiba[tibaAkhir].m << ":" << tiba[tibaAkhir].d << endl;
}
