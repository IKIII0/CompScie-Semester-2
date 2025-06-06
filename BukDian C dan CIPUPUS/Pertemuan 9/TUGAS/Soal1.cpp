#include <iostream>
using namespace std;
int main(){
    int n;
    cout<<"Masukkan Nilai: ";cin>>n;

    for (int a=1; a <= n; a++){
        for (int b=1; b <= a; b++){
            cout<<" * ";
        }
        cout<<endl;
    }
    for (int i=n; i >= 1 ;i--) {
        for (int j=1; j <= i; j++){
            cout<<" * ";
        }
        cout<<endl;

    }
}