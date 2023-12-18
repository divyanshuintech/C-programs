#include<stdio.h>
#include <string.h>
int main()
{
    char str1[40] = "Divyanshu";
    char str2[] = "Here";
    strcat(str1, str2);
    printf("Now the str1 is %s", str1);
    return 0;
}