#include <iostream>
#include <math.h>   
using namespace std;

int main(){
    int a,b,c,d;
    cout<<"Persamaan kuadrat ax2+bx+c\n";
    cout<<"Masukkan nilai a: "; cin>>a;
    cout<<"Masukkan nilai b: "; cin>>b;
    cout<<"Masukkan nilai c: "; cin>>c;
    cout<<a<<"x2 + "<<b<<"x + "<<c<<endl;
    d = pow(b,2) - (4*a*c);
    cout<<"Nilai diskriminan adalah : "<<d<<endl;
    if (d<0) {
        cout<<"Tidak ada akar dari persamaan kuadrat tersebut";
    } else if(d==0) {
        cout<<"x = "<<((-b)+(sqrt(d)))/(a*2);
    } else{
        cout<<"x1 : "<<(-b+sqrt(d))/(a*2)<<endl;
        cout<<"x2 : "<<(-b-sqrt(d))/(a*2)<<endl;
    }
}