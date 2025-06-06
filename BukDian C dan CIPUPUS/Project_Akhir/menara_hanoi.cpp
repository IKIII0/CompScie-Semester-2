#include <iostream>
using namespace std;
void hiasan() {
    cout << "=============================\n";
    cout << "  Program Menara Hanoi C++\n";
    cout << "=============================\n\n";
}
void menaraHanoi(int jumlahCakram, char tiang_1, char tiang_3, char tiang_2) {
    if (jumlahCakram == 1) {
        cout << "Pindahkan cakram 1 dari tiang " << tiang_1 << " ke tiang " << tiang_3 << endl;
        return;
    }
    menaraHanoi(jumlahCakram - 1, tiang_1, tiang_2, tiang_3);
    cout << "Pindahkan cakram " << jumlahCakram << " dari tiang " << tiang_1 << " ke tiang " << tiang_3 << endl;
    menaraHanoi(jumlahCakram - 1, tiang_2, tiang_3, tiang_1);
}

int main() {
    int jumlahCakram;
    cout << "Masukkan jumlah cakram: "; cin >> jumlahCakram;
    menaraHanoi(jumlahCakram, 'A', 'C', 'B');
    return 0;
}
