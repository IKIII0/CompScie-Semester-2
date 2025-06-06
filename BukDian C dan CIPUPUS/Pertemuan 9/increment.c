#include <stdio.h>
int main(){
    int n,i,f;
    printf("MENGHITUNG NILAI FAKTORIAL n (n!)\n\n");
    printf("Masukkan sebarang bilangan integer: ");scanf("%d", &n);
    i = 1;f=1;
    while (i<=n){
        f=f*i;
        i++;
    }
    printf("%d! = %d\n\n",n,f);
}