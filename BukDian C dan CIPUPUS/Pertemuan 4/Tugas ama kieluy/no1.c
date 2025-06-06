#include <stdio.h>

int main(){
    int a,b,c,d,e;
    a = 12;
    b = 12;
    c = 12;
    d = b&c^a>>c;
    e = (c<=b)||!(a!=b);
    printf("Hasil adalah %d\n", d);
    printf("Hasil adalah %d\n", e);

}