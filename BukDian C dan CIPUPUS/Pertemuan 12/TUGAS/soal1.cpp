#include <iostream>
#include <cmath>
using namespace std;

float jarakEcludian(int x1, int y1, int x2, int y2, int z1, int z2){
    float d;
    d = pow(x2 - x1, 2) + pow(y2 - y1, 2) + pow(z2 - z1, 2);
    d = sqrt(d);
    return d;
}

void hiasan(){
    for (int i=0; i<15; i++){
        cout<<"*";
    }
}
int main(){
    int x1, y1, x2, y2,z1,z2;
    cout<<"Masukkan titik 1 (x1,y1,z1): "; cin>>x1>>y1>>z1;
    cout<<"Masukkan titik 2 (x2,y2,z2): "; cin>>x2>>y2>>z2;
    hiasan();
    cout<<" Jarak Ecludian antara titik 1 dan titik 2 adalah: "<<jarakEcludian(x1,y1,x2,y2,z1,z2)<<" ";
    hiasan();
    return 0;
}