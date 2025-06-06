#include <iostream>
using namespace std;

int main(){
    int bulan;
    string nama;
    cout<<"Masukkan nama: ";getline(cin, nama);
    cout<<"Masukkan Bulan lahir anda(dalam angka): ";cin>>bulan;
    for (int i=1;i<=bulan;i++){
        if (bulan > 12 or bulan < 1){
            cout<<"Tidak Valid"<<endl;
        }
        else{
            cout<<i<<"."<<nama<<endl;
        }
    }
}