#include <stdio.h>
void printTable(int mulTable[], int num, int n);
int main()
{
    int mulTable[3][10];
    printTable(mulTable[0], 2, 10);
    printTable(mulTable[1], 7, 10);
    printTable(mulTable[2], 9, 10);
    return 0;
}
void printTable(int mulTable[], int num, int n)
{
    for (int i = 0; i < n; i++)
    {
        mulTable[i] = num * (i + 1);
    }
    printf("The multiplication table of %d is :\n", num);
    for (int i = 0; i < n; i++)
    {
        printf("%d X %d = %d \n", num, n, mulTable[i]);
    }
    printf("**************\n\n");
}