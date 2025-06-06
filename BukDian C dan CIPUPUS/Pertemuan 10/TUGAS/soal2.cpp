#include <iostream>
using namespace std;
int main(){
    int matrix1[2][2];
    int matrix2[2][2];
    int matrix_hasil[2][2];

    cout<<"Matrix 1:"<<endl;
    for (int i=0;i<2;i++){
        for (int j=0;j<2;j++){
            cout<<"Masukkan baris "<<i + 1<<" kolom "<< j + 1<<" : ";cin>>matrix1[i][j];
        }
    }

    cout<<"Matrix 2:"<<endl;
    for (int i=0;i<2;i++){
        for (int j=0;j<2;j++){
            cout<<"Masukkan baris "<<i + 1<<" kolom "<< j + 1<<" : ";cin>>matrix2[i][j];
        }
    }
    //Bagian Pertambahan
    // cout<<"\nHasil:"<<endl;
    // for (int i=0;i<2;i++){
    //     for (int j=0;j<2;j++){
    //         matrix_hasil[i][j] = matrix1[i][j] + matrix2[i][j];
    //         cout<<matrix_hasil[i][j]<<" ";
    //     }
    //     cout<<endl;
    // }
    
    //Bagian Perkalian
    cout<<"\nPerkalian Matrix:"<<endl;
    for (int i=0;i<2;i++){
        for (int j=0;j<2;j++){
            for(int k=0;k<2;k++){
                matrix_hasil[i][j] = matrix1[i][k] + matrix2[k][j];
            }
        }
    }
    cout<<"\nHasil:"<<endl;
    for (int i=0;i<2;i++){
        for (int j=0;j<2;j++){
            cout<<matrix_hasil[i][j]<<" ";
        }
        cout<<endl;
    }
}