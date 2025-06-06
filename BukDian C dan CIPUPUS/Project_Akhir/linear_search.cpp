#include<iostream>
#include<string.h>
#include <string>
#include <cctype>
using namespace std;

int main()
{
    string rak_buku[] ={
        "Skajorie",
        "Love Theft",
        "How to See",
        "The 7 Wings of Sinners",
        "Scenic",
        "Lovely Heist",
        "Dikta dan Hukum",
        "Sang Pemimpi",
        "Act of Money Boyfriend",
        "A Beautifull Little Secret"};

    string judul_cari;

    printf("==Cari Judul Buku==\n");
    cout << "Masukkan judul buku yang dicari : ";
    getline(cin, judul_cari);
    printf("\nMemulai Pencarian...\n");
    for(int i = 0; i < 10; i++){
        if(judul_cari== rak_buku[i])
        {
            cout << "\nBuku di temukan di rak nomor " << i + 1 << "!" << endl;
            break;
        }

        else
        {
            cout<< "Buku" << judul_cari <<" tidak cocok. Lanjut ke rak berikutnya...\n";
        }
    }

    cout << "\nTIDAK ADA di seluruh rak. Sudah dicek semua!\n" << endl;
    cout << "Coba cek judul lagi ya~" << endl;
    return 0;
}