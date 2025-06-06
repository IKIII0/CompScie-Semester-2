#include <iostream>
using namespace std;
int main(){
    int x, *y, y = new int;
    x = 5;
    *y = 10;
    cout << "Nilai x: " << x << endl;
    cout << "Alamat memori x = " << &x << endl;
    cout << "Nilai Y = " << *y << endl;
    cout << "Alamat memori Y = " << y << endl;
    delete y;
    cout << "Setelah di delete";
    cout << "Nilai y = " << *y << endl;
    cout << "Alamat memori y = " << y << endl;
    
}