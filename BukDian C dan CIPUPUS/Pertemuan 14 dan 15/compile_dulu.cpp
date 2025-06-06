#include <iostream>
using namespace std;
int main(){
    int x, *y;
    y= &x;
    x = 5;
    *y = 10;
    cout<< "Nilai x: " << x << endl;
    cout<< "Alamat memori x = "<<&x << endl;
    cout<< "Nilai Y = "<<*y << endl;
    cout<< "Alamat memori Y = "<<y << endl;
}