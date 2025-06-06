#include <iostream>
#include <math.h>
using namespace std;

int main(){
    int a,b,c,hasil;
    cout<<"Masukkan a: ";cin>>a;
    cout<<"Masukkan b: ";cin>>b;
    cout<<"Masukkan c: ";cin>>c;
    hasil = pow(b,2) - 4 * a * c;
    cout<<"Hasil: "<<hasil<<endl;
}