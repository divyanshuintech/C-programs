#include<stdio.h>

int main()
{
    FILE *ptr;
    int num = 33;
    ptr = fopen("generated.txt", "w");
    fprintf(ptr, "The number is %d", num);
    fclose(ptr);
    return 0;
}