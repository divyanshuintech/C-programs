#include <stdio.h>

int main()
{
    int i, n;
    printf("Enter the value of n : ");
    scanf("%d", &n);
    for (i = n; i; i--)
    {
        printf("The value of i is %d\n", i);
        if (i == 5)
        {
            break;
        }
    }
    return 0;
}