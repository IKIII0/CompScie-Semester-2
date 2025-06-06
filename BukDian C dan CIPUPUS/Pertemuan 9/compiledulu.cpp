#include <stdio.h>

int main(){
    int panjang,lebar,luas;
    do{printf("Panjang [0=Selesai] : ");scanf("%d",&panjang);
    printf("Lebar [0=Selesai] : ");scanf("%d",&lebar);
    luas=panjang*lebar;
    printf("Luas = %d\n",luas);
    }while((panjang != 0) && (lebar != 0));
}