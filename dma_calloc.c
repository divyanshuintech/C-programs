#include <stdio.h>
#include <stdlib.h>

int main()
{
    //calloc initializes blocks default value to zero.
    int *ptr;
    ptr = (int *)calloc(6, sizeof(int));
    for (int i = 0; i < 6; i++)
    {
        printf("Enter the value of %d element :",i+1);
        scanf("%d", &ptr[i]);
    }

    for (int i = 0; i < 6; i++)
    {
        printf("The value of %d element is %d\n", i + 1, ptr[i]);
    }
    free(ptr);
    return 0;
}