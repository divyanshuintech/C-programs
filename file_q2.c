#include <stdio.h>

int main()
{
    FILE *ptr;
    int x;
    printf("Enter the number : ");
    scanf("%d", &x);
    ptr = fopen("tests.txt", "w");
    for (int i = 1; i <= 10; i++)
    {
        fprintf(ptr, "%d X %d = %d \n", x, i, x * i);
    }
    printf("The table of %d is successfully generated in tests.txt.", x);
    return 0;
}