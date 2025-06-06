#include <iostream>
#include <string.h>
using namespace std;
class buku{
    public:
        string judul[50];
        string pengarang[30];
            int jumlah;
};

int main(){
    buku book;
    getchar();
    cout << "Masukkan judul buku: ";getline(cin, book.judul);
    cout << "Masukkan nama pengarang: ";getline(cin, book.pengarang);
    cout << "Masukkan jumlah buku: ";cin >> book.jumlah;
    return 0;
}