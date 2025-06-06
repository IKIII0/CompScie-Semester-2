#include <iostream>
using namespace std;
int main(){
    system("cls");
    int A[5];
    for (int i=0;i<5;i++){
        cout<<"A["<<i<<"] = "; cin>>A[i];
    }
    for (int c=0;c<5;c++){
        cout<<"Nilai pada elemen ke"<<c+1<<" adalah = "<<A[c]<<endl;
    }
    system("pause");
}