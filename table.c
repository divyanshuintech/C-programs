#include <stdio.h>

int main()
{
    int num;
    printf("Enter any number : ");
    scanf("%d", &num);
    for (int i = 1; i <= 10; i++)
    {
        printf("%d times %d is %d\n", num, i, num * i);
    }
    return 0;
}