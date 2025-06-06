#include <iostream>
#include <stdio.h>
using namespace std;

int main(){
    float a,b;
    printf("%%d\n");
    printf("\"Dian\?\""); // \? = ?, \\ = backslash aja
    cout<<"\nDian\\n\?";
    a=5/4.0;
    b=5/4;
    printf("\nHasil adalah %f", a);
    cout<<"\n"<<b<<endl; //hasilnya int karena int int jadinya div bukan bagi
    cout<<"%%%%%%\n"; //kalau di cipupus ga kenal % jadi aman ae
    printf("%%%%%%\n"); //untuk memunculkan %, jadinya kalau %% = %

}