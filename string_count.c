#include <stdio.h>

int ct(char *ptr)
{
    int count = 0;
    while (*ptr != '\0')
    {
        ptr++;
        count++;
    }
    return count;
}

int main()
{
    char *ptr;
    char arr[] = "Divyanshu Dubey";
    ptr = arr;
    printf("The count of alphabets in the string is : %d", ct(ptr));
    return 0;
}