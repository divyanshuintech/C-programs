#include <stdio.h>
#include <stdlib.h>

int main()
{
    int *ptr;
    int n;
    ptr = (int *)malloc(10 * sizeof(int));
    printf("Enter the Number:");
    scanf("%d", &n);
    for (int i = 1; i <= 10; i++)
    {
        printf("%d X %d = %d\n", n, i, n * i);
    }
    printf("**********\n");
    printf("After Reallocating...\n");

    ptr = realloc(ptr, 15 * sizeof(int));
    for (int i = 1; i <= 15; i++)
    {
        printf("%d X %d = %d\n", n, i, n * i);
    }
    return 0;
}