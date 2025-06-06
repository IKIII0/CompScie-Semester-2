#include <iostream>
using namespace std;

int main(){
    int n,i,total,deret;
    deret = 2;
    total = 0;
    char ulang = 'y';
    while(ulang == 'Y' || ulang == 'y'){
        cout<<"Masukkan deret ke-n: ";cin>>n;
        for (i=1;i<=n;i++){
            cout<<deret<<" ";
            deret+=2;
            total+=deret - 2;
        }
        cout<<endl;
        cout<<"Total: "<<total<<endl;
        cout<<endl;
        cout<<"Apakah mau mengulang y/n: ";cin>>ulang;
    }
}