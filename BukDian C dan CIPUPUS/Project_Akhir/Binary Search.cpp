#include <iostream>
#include <vector>
using namespace std;

void tukar(int &a, int &b) {
    int temp = a;
    a = b;
    b = temp;
}

void bubbleSort(vector<int> &arr) {
    int n = arr.size();
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                tukar(arr[j], arr[j + 1]);
            }
        }
    }
}


int binarySearch(const vector<int> &arr, int target) {
    int low = 0, high = arr.size() - 1;
    while (low <= high) {
        int mid = (low + high) / 2;
        if (arr[mid] == target)
            return mid;
        else if (arr[mid] < target)
            low = mid + 1;
        else
            high = mid - 1;
    }
    return -1;
}

int main() {
    int n, target;
    system("cls"); 
    cout << "==============================================\n";
    cout << "=========== Program  Binary Search ===========\n";
    cout << "==============================================\n";

    cout << "Masukkan jumlah elemen: ";  cin >> n;
    vector<int> arr(n);
    for (int i = 0; i < n; i++) {
        cout << "Elemen ke-" << i << ": ";
        cin >> arr[i];
    }

    bubbleSort(arr);
    cout << "\nArray setelah diurutkan: ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }

    cout << "\n\nMasukkan nilai yang ingin dicari: ";
    cin >> target;

    int hasil = binarySearch(arr, target);
    if (hasil != -1)
        cout << "Nilai ditemukan pada indeks ke-" << hasil << endl;
    else
        cout << "Nilai tidak ditemukan." << endl;
    return 0;
}
