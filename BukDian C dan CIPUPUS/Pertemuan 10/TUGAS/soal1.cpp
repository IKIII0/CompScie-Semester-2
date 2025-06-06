#include <iostream>
using namespace std;

int main() {
    int n, angka, min, max, total = 0;
    double rata_rata;

    cout << "Masukkan jumlah angka: ";
    cin >> n;

    if (n <= 0) {
        cout << "Jumlah angka harus lebih dari 0!" << endl;
        return 1;
    }
    for (int i = 0; i < n; i++) {
        cout << "Masukkan angka: "; cin >> angka;

        total += angka;  
        if (angka > max) max = angka;
        if (angka < min) min = angka;
    }

    rata_rata = float(total) / n;

    cout << "Nilai terbesar: " << max << endl;
    cout << "Nilai terkecil: " << min << endl;
    cout << "Rata-rata: " << rata_rata << endl;
}
