#include<stdio.h>

int main()
{
    char str[50];
    printf("Enter your name :");
    gets(str);
    puts(str);
    printf("Your name is %s", str);
    return 0;
}