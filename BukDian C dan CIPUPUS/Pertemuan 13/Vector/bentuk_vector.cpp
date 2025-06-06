#include <iostream>
#include <vector>
using namespace std;
int main(){
    int jlh_siswa;
    vector<double> nilai;
    cout<<"Jumlah : ";cin>>jlh_siswa;
    nilai.resize(jlh_siswa);
    for (int i = 0; i < (int) nilai.size(); i++){
        cout<<"Nilai ke-"<<i+1<<": ";cin>>nilai[i];
    }
    cout<<endl;
    for (int i = 0; i < jlh_siswa; i++){
        cout<<nilai[i]<<endl;
    }
}