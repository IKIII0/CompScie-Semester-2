#include <iostream>
#include <vector>
using namespace std;  
void hiasan() {
    cout << "=============================\n";
    cout << "  Program Bubble Sort C++\n";
    cout << "=============================\n\n";
}
void hiasan2(){
    cout << "============================="<<endl;
}
void tukar(int &a, int &b) {
    int temp = a;
    a = b;
    b = temp;
}
void bubblesort(vector<int> &arr) {
    int n = arr.size();
    for(int i = 0; i < n ; i++) {
        for(int j = 0; j < n - i - 1; j++) {
            if(arr[j] > arr[j + 1]) {
                tukar(arr[j], arr[j + 1]);
            }
        }
    }
}

int main(){
    system("cls");
    vector<int> arr;
    int jumlah;
    hiasan();
    cout << "Masukkan jumlah elemen: "; cin >> jumlah;
    arr.resize(jumlah);
    for(int i = 0; i < jumlah; i++) {
        cout << "Masukkan elemen ke-" << i + 1 << ": "; cin >> arr[i];
    }
    bubblesort(arr);
    hiasan2();
    cout << "      Hasil Pengurutan  "<<endl;
    hiasan2();
    for(int i = 0; i < jumlah; i++) {
        cout<< arr[i] << " ";
    }
    cout << endl;
    hiasan2();
    

}