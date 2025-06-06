#include <stdio.h>
int main(){
    int n,i,total,deret;
    deret = 2;
    total = 0;
    char ulang = 'y';
    while (ulang == 'Y' || ulang == 'y'){
        printf("Masukkan deret ke-n: ");scanf("%d",&n);
        for (i=1;i<=n;i++){
            printf("%d ",deret);
            deret+=2;
            total+=deret - 2;
        }
        printf("\n");
        printf("Total: %d",total);
        printf("\n");
        printf("Apakah mau mengulang? y/n: ");scanf(" %c",&ulang);
    }
}