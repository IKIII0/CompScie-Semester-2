#include <iostream>
using namespace std;

double calculateAverage(int arr[], int n) {
    double sum = 0;
    for(int i = 0; i < n; i++) {
        sum += arr[i];
    }
    return sum / n;
}
int main() {
    int n;
    cout << "Masukkan angka: "; cin >> n;

    int values[n];
    cout << "Masukkan angka: "; cin >> values[0];
    int tinggi = values[0], rendah = values[0];

    for(int i = 1; i < n; i++) {
        cin >> values[i];
        if(values[i] > tinggi) tinggi = values[i];
        if(values[i] < rendah) rendah = values[i];
    }

    cout << "Tertinggi: " << tinggi << endl;
    cout << "Terendah: " << rendah << endl;
    cout << "Rata-rata: " << calculateAverage(values, n) << endl;

    return 0;
}