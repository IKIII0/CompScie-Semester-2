#include <stdio.h>
#include <math.h>

int main()
{
    int x, y;
    float z;
    printf("Menghitung x pangkat y\n");
    printf("X = ");
    scanf("%d", &x);
    printf("Y = ");
    scanf("%d", &y);

    z = pow(x, y);
    printf("%d dipangkatkan dengan %d adalah %.2f\n", x, y, z);
    z = sqrt(x);
    printf("Akar dari %d adalah %.2f", x, z);
}
