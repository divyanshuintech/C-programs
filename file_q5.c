#include <stdio.h>

int main()
{
    FILE *ptr1;
    ptr1 = fopen("file.txt", "r");
    int a;
    fscanf(ptr1, "%d", &a);
    printf("%d", a);
    fclose(ptr1);
    FILE *ptr2;
    ptr2 = fopen("file.txt", "w");
    fprintf(ptr2, "%d", a * 2);
    fclose(ptr2);
    return 0;
}