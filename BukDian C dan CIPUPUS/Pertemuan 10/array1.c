#include <stdio.h>

int main(){
    int y[] = {9,2,7,3,5};
    int n,r = 0;
    for (n=0;n<5;n++){
        r+=y[n];
    }
    printf(" %d",r);
}