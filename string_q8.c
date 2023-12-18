#include <stdio.h>
int occurence(char str[], char c)
{
    char *ptr = str;
    int count = 0;
    while (*ptr != '\0')
    {
        if (*ptr == c)
        {
            count++;
        }
        ptr++;
    }
    return count;
}

int main()
{
    char str[] = "Independent";
    int count = occurence(str, 'e');
    if(count >=1){
        printf("Yes, the character is present in the string.\n");
    }
    else{
        printf("No, the character is not present in the string.\n");
    }
    printf("The Occurence of the character is %d", count);
    return 0;
}