#include <stdio.h>
int main(){
    int n;
    printf("Masukkan Nilai: ");scanf("%d",&n);

    for (int a=1; a <= n; a++){
        for (int b=1; b <= a; b++){
            printf(" * ");
        }
        printf("\n");
    }
    for (int i=n; i >= 1 ;i--) {
        for (int j=1; j <= i; j++){
            printf(" * ");
        }
        printf("\n");

    }
}