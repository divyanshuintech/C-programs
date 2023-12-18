#include <stdio.h>

int main()
{
    int i, sum = 0, n;
    printf("Enter the value of n : ");
    scanf("%d", &n);
    for (i = 0; i <= n; i++)
    {
        sum += i;
    }
    printf("The sum of 1 to %d is %d\n", n, sum);
    return 0;
}