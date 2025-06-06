#include <stdio.h>
#include <math.h>
int main()
{
    int a, b, c, hasil;
    printf("Masukkan a: ");
    scanf("%d", &a);
    printf("Masukkan b: ");
    scanf("%d", &b);
    printf("Masukkan c: ");
    scanf("%d", &c);
    hasil = pow(b, 2) - 4 * a * c;
    printf("Hasil: %d ", hasil);
    if (hasil > 0)
    {
        printf("memotong 2 titik");
    }
    else if (hasil == 0)
    {
        printf("hanya menyinggung 1 titik");
    }
    else
    {
        printf("sama sekali tidak memotong dan menyinggung");
    }
}