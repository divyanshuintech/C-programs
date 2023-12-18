#include <stdio.h>

int main()
{
    char str[] = "Divyanshu Dubey";
    char *ptr = str;
    while (*ptr != '\0')
    {
        printf("%c", *ptr);
        ptr++;
    }
    return 0;
}