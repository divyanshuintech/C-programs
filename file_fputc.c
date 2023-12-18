#include <stdio.h>

int main()
{
    FILE *ptr;
    ptr = fopen("fputcdemo.txt", "w");
    fputc('A', ptr);
    fputc('B', ptr);
    fputc('C', ptr);
    fclose(ptr);
    return 0;
}