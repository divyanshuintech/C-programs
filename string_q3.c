#include<stdio.h>
#include <string.h>
int main()
{
    char str[50];
    printf("Enter the character :");
    gets(str);
    int length = strlen(str);
    printf("The length of the entered character is %d", length);
    return 0;
}