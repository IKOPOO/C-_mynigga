#include <iostream>
#include <cstdlib>
#include <ctime>

int main() {
    // Inisialisasi generator angka acak dengan waktu saat ini
    std::srand(std::time(0));

    int jumlahDadu;
    int jumlahLemparan;

    // Meminta pengguna untuk memasukkan jumlah dadu
    std::cout << "Berapa jumlah dadu yang ingin di lempar? ";
    std::cin >> jumlahDadu;

    // Meminta pengguna untuk memasukkan jumlah lemparan
    std::cout << "Berapa kali lempar? ";
    std::cin >> jumlahLemparan;

    // Menggunakan alokasi memori dinamis untuk array dua dimensi
    int** hasilDadu = new int*[jumlahLemparan];
    for (int i = 0; i < jumlahLemparan; ++i) {
        hasilDadu[i] = new int[jumlahDadu];
    }

    // Melakukan lemparan dadu dan menyimpan hasilnya dalam array dua dimensi
    for (int i = 0; i < jumlahLemparan; ++i) {
        for (int j = 0; j < jumlahDadu; ++j) {
            hasilDadu[i][j] = (std::rand() % 6) + 1;
        }
    }

    // Menampilkan hasil lemparan dadu dari array dua dimensi
    for (int i = 0; i < jumlahLemparan; ++i) {
        std::cout << "Lemparan ke-" << i + 1 << ": ";
        for (int j = 0; j < jumlahDadu; ++j) {
            std::cout << hasilDadu[i][j] << " ";
        }
        std::cout << std::endl;
    }

    // Dealokasi memori dinamis
    for (int i = 0; i < jumlahLemparan; ++i) {
        delete[] hasilDadu[i];
    }
    delete[] hasilDadu;

    return 0;
}
