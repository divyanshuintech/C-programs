#include <stdio.h>

int main()
{
    FILE *ptr;
    int x, y, z;
    ptr = fopen("tests.txt", "r");
    fscanf(ptr, "%d %d %d \n", &x, &y, &z);
    printf("%d %d %d \n", x, y, z);
    fclose(ptr);
    return 0;
}