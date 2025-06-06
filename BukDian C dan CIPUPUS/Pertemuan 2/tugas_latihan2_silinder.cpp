#include <iostream>
using namespace std;

int main(){
    float volume, luas_alas, tinggi, jari;
    const float pi = 3.14;

    cout<<"masukkan jari-jari: ";cin>>jari;
    cout<<"masukkan tinggi: ";cin>>tinggi;

    luas_alas = pi * jari * jari;
    volume = pi * jari * jari * tinggi;

    cout<<"Luas Alas: "<< luas_alas <<endl;
    cout<<"Volume: "<< volume;
}