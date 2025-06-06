#include <stdio.h> 

struct data_tanggal{
    int tanggal;
    int bulan;
    int tahun;
};

int main(){
    struct data_tanggal lahir;
    printf("Masukkan tanggal lahir : "); scanf("%i",&lahir.tanggal);
    printf("Masukkan bulan lahir : "); scanf("%i",&lahir.bulan);
    printf("Masukkan tahun lahir : "); scanf("%i",&lahir.tahun);
    printf("Lahir pada tanggal : %i-%i-%i",lahir.tanggal,lahir.bulan,lahir.tahun);
}