#include <stdio.h>
#include <stdlib.h>

int main()
{
    int *ptr;
    int n;
    ptr = (int *)calloc(n, sizeof(int));
    printf("Enter the value of n :");
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        printf("Enter the value of %d element :", i + 1);
        scanf("%d", &ptr[i]);
    }

    for (int i = 0; i < n; i++)
    {
        printf("The value of %d element is %d\n", i + 1, ptr[i]);
    }
    free(ptr);
    //free() is used to deallocate the memory.
    return 0;
}