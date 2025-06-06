#include <iostream>
using namespace std;

bool prima(int n) {
    if (n < 2) return false;
    for (int i = 2; i < n; i++) {
        if (n % i == 0) return false;
    }
    return true;
}

int main() {
    int angka;
    cout << "Masukkan sebuah bilangan: "; cin >> angka;
    if (prima(angka)) {
        cout << angka << " adalah bilangan prima." << endl;
    } else {
        cout << angka << " bukan bilangan prima." << endl;
    }
    return 0;
}