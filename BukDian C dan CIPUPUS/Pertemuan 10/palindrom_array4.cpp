#include <iostream>
#include<string.h>
using namespace std;
int main(){
    char kata[25];
    int i,j;
    cout<<"Masukkan kata yang anda inginkan: "; cin>>kata;
    i=0;
    j=strlen(kata);
    while((i<=j)&&(kata[i]==kata[j-1])){
        i++;
        j--;
    }
    if(i>j){
        cout<<kata<<" termasuk kategori";
    }
    else{
        cout<<kata<<" tidak termasuk kategori";
    }
}