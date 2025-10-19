#include <stdio.h>

int main(){
    int a, b, i, j, x,y;
    scanf("%d %d %d %d %d %d", &a, &b, &i, &j, &x, &y);

    float hasil = (float)(a - b) * i / j - (x + y);
    printf("\n%.3f\n", hasil);
    return 0;
}