#include <iostream>
#define max 5;
using namespace std;

int main(){
    const int min = 0;
    char nama[15],hari[10];

    cout<<"Masukan nama anda: "; cin>>nama;
    cout<<"Masukan hari: "; cin>>hari;
    cout<<nama<<", Selamat berhari "<<hari<<endl;
    cout<<"Nilai tertinggi "<< max;
    cout<<"\nNilai terendah "<< min;
}