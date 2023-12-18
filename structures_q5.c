#include<stdio.h>
typedef struct complex{
    int x;
    float y;
}strcom;

int main()
{
    strcom v1;
    v1.x = 12;
    v1.y = 24.42;
    printf("X dimension is %d\nY dimension is %.2f", v1.x, v1.y);
    return 0;
}