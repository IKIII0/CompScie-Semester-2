#include <stdio.h>
#include <math.h>

int main(){
    int x,y,x1,x2,y1,y2,d;
    printf("Masukkan x1: ");scanf("%d",&x1);
    printf("Masukkan x2: ");scanf("%d",&x2);
    printf("Masukkan y1: ");scanf("%d",&y1);
    printf("Masukkan y2: ");scanf("%d",&y2);
    x = pow((x2 - x1),2);
    y = pow((y2 - y1),2);
    d = sqrt(x + y);
    printf("Jarak antara dua titik adalah: %.2f",d);
}