#include <stdio.h>
#include <string.h>
int main()
{
    char str1[] = "Happy";
    char str2[10];
    strcpy(str2, str1);
    printf("Now the Str2 is %s", str2);
    return 0;
}