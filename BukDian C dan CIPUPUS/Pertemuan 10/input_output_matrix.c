#include <stdio.h>
int main(){
    int dian[2][4];
    int i,j;

    for (int i=0;i<2;i++){
        for (int j=0;j<4;j++){
           scanf("%d",&dian[i][j]);
        }
    }

    for (int i=0;i<2;i++){
        for (int j=0;j<4;j++){
           printf(" %d ",dian[i][j]);
        }
        printf("\n");
    }

   
}