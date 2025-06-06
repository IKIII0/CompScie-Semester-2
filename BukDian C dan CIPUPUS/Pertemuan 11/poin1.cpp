#include <iostream>
#include <string.h>
using namespace std;
int main(){
    char nama[25];
    strcpy(nama, "Dian Rachmawati");
    cout<<"Nama: "<<nama<<"\n"<<endl;
    cout<<"Banyaknya karakter nama anda adalah: "<<strlen(nama)<<endl;
}