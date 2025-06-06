#include <iostream>
#include <string.h>
using namespace std;
int main(){
    class Buku{
        private:
            char judul[50];
            char pengarang[30];
            int jumlah;
        public:
            void inisialisasi(char*Judul, char*Pengarang, int Jumlah){
                strcpy(judul, Judul);
                strcpy(pengarang, Pengarang);
                jumlah = Jumlah;
            }
            void info(){
                cout << "Judul Buku: " << judul << endl;
                cout << "Pengarang: " << pengarang << endl;
                cout << "Jumlah Buku: " << jumlah << endl;
            }
    };
    Buku novel;
    novel.inisialisasi("Ramayana", "Narayan", 12);
    novel.info();
    return 0;
}