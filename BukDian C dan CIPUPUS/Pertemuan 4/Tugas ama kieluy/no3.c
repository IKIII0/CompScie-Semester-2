#include <stdio.h>

int main(){
    int a,b,c,d,hasil;
    a = 12;
    b = 15;
    c = 3;
    d = 5;

    hasil = a | b & c ^ d << c;
    printf("Hasil= %d", hasil);
}