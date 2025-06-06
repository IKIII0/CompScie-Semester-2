#include <stdio.h>
int main(){
    int matrix1[2][2];
    int hasil;
    printf("Matrix 1: \n");
    for (int i=0;i<2;i++){
        for (int j=0;j<2;j++){
            scanf("%d",&matrix1[i][j]);
        }
    }
    hasil = (matrix1[0][0]*matrix1[1][1]) - (matrix1[0][1]*matrix1[1][0]);
    printf("Hasil: %d",hasil);
}