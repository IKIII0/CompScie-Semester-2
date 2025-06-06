#include <iostream>
using namespace std;

int main() {
    int A[5] = {20, 9, 1986, 200, 13};
    int n;
    cout << "Data yang lama\n";
    for (n = 0; n < 5; n++){
        cout << " " << A[n];
    }
    cout << "\nData yang baru:\n";
    A[0] = 4;
    A[1] = 2;
    A[2] = 1;
    A[3] = 3;
    A[4] = 5;
    for (n = 0; n < 5; n++){
        cout << " " << A[n];
    }
    cout << endl;
    system("pause");
}