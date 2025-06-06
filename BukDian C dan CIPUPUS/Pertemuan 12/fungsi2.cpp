#include <iostream>
using namespace std;
void input_array(int A[],int n){
    for(int c = 0; c<n; c++){
        cout<<"Input nilai A["<<c<<"] = "; cin>>A[c];
    }
}

long jumlah(int A[],int n){
    long jml=0;
    for(int c=0; c<n; c++){
        jml+=A[c];
    }
    return jml;
}

int main()
{
    int x[100],byk_elemen;
    long hsl;
    cout<<"Masukkan banyak elemen: "; cin>>byk_elemen;
    input_array(x,byk_elemen);
    cout<<endl;
    hsl = jumlah(x,byk_elemen);
    cout<<"Hasilnya = "<<hsl;
    return 0;
}