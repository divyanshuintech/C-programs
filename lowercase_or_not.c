#include <stdio.h>

int main()
{
    // 97 to 122 = a to z ASCII values
    char ch;
    printf("Enter the character :\n");
    scanf("%c", &ch);
    if (ch >= 97 && ch <= 122)
    {
        printf("%c is lowercase", ch);
    }
    else
    {
        printf("%c is not lowercase", ch);
    }
    return 0;
}