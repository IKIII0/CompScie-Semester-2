#include <iostream>
using namespace std;

int main(){
    int a,b,c,d,e;
    cout<<"Input bil 1: ";cin>>a;
    cout<<"Input bil 2: ";cin>>b;

    c= a >= b;
    d= a<<1;
    e= a>b || a == b;
    cout<<a<<" lebih besar sama dengan "<<b<<" = "<<c<<endl;
    cout<<a<<" geser satu bit ke kiri = "<<d<<endl;
    cout<<a<<" > "<<b<<" datau "<<a<<" = "<<b<<" = "<<e<<endl;
    system("pause");

}