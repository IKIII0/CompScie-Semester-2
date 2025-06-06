#include <stdio.h>
#include <string.h>
int main(){
    char satu[20]= " Rachmawati ";
    char dua[20]= "Dian";

    strcat(satu, dua);
    printf("Hasil penggabungannya: %s\n",satu);
    printf("Jika diubah menjadi huruf kapital semua: %s\n",strupr(satu));
    printf("Jika diubah menjadi huruf kecil semua: %s\n",strlwr(satu));
}