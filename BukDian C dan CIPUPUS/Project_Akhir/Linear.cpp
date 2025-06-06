#include <iostream>
#include <vector>
#include <string>
#include <cctype>
using namespace std;

string toLower(string str)
{
    for (int i = 0; i < str.length(); i++) {
        str[i] = tolower(str[i]);
    }
    return str;
}

int main() {
    vector<string> rak_buku = {
        "Skajorie", "Love Theft", "How to See", "The 7 Wings of Sinners",
        "Scenic", "Lovely Heist", "Dikta dan Hukum", "Sang Pemimpi",
        "Act of Money Boyfriend", "A Beautifull Little Secret"
    };

    string judul_cari;
    bool ditemukan = false;
    int rak_ke = 0;

    cout << "== PENCARIAN BUKU ==\n";
    cout << "Masukkan judul buku: ";
    getline(cin, judul_cari);
    cout << "\nMemulai mencari...\n";

    string judul_cari_lower = toLower(judul_cari);

    for (int i = 0; i < rak_buku.size(); i++) {
        string buku_lower = toLower(rak_buku[i]);
        if (buku_lower == judul_cari_lower) {
            ditemukan = true;
            rak_ke = i + 1;
            break;
        }
    }

    if (ditemukan) {
        cout << "Buku \"" << rak_buku[rak_ke - 1] << "\" ditemukan di rak " << rak_ke << ".\n";
    } else {
        cout << "Buku \"" << judul_cari << "\" tidak ditemukan di seluruh rak.\n";
    }

    cout << "Terima kasih.\n";
    return 0;
}