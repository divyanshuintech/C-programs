#include <stdio.h>

int main()
{
    int multable[11][10];
    for (int i = 1; i <= 10; i++)
    {
        for (int j = 1; j <= 10; j++)
        {
            multable[i][j] = i * j;
        }
    } 
    for (int i = 1; i <= 10; i++)
    {
        for (int j = 1; j <= 10; j++)
        {
            printf("%d X %d = %d \n", i, j, multable[i][j]);
        }
        printf("*************\n");
        printf("\n");
    }
    return 0;
}