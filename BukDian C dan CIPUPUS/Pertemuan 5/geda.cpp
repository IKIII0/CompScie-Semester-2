#include <iostream>
using namespace std;
int main(){
    int a;
    cout<<"Input bil 1: "; cin>>a;
    if (a==0){
        cout<<a<<" adalah bilangan netral\n";
    }
    else if (a>0){
        cout<<a<<" adalah bilangan positif\n";
    }
    else{
        cout<<a<<" adalah bilangan negatif\n";
    }
    system("pause");
}