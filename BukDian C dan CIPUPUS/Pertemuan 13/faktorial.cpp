#include <iostream>
using namespace std;
long faktorial(int n){
    if(n>1){
        return n*faktorial(n-1);
    }
    else if(n < 0){
        cout<<"Bilangan bulat positif tidak ada faktorialnya";
    }
    else return 1;
}

int main(){
    system("CLS");
    int n;
    cout<<"Masukkan bilangan bulat positif: ";cin>>n;
    cout<<"Faktorial dari "<<n<<" adalah "<<faktorial(n)<<endl;
}