#include <iostream>
using namespace std;
int main(){
    float jumlah;
    int bil,i;
    cout<<"Input Bilangan: ";cin>>bil;
    jumlah=0;
    for(i=1;i<=bil;i++){
        jumlah=jumlah +(float)i/(i+1);
    }
    cout.precision(3);
    cout<<"Jumlah adalah: "<<jumlah;
}