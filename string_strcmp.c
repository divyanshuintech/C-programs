#include<stdio.h>
#include <string.h>
int main()
{
    char str1[] = "Hello";
    char str2[] = "Helln";
    int val = strcmp(str1, str2);
    printf("Now the val is %d", val);
    return 0;
}