#include <stdio.h>

int main()
{
    int num;
    printf("Enter the number : ");
    scanf("%d", &num);
    for (int i = 10; i >= 1; i--)
    {
        printf("%d times %d is %d\n", num, i, num * i);
    }
    return 0;
}