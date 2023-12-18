#include <stdio.h>
int p(int arr[], int n);
int n(int arr[], int n);
int z(int arr[], int n);
int main()
{
    int arr[] = {1, 2, 3, 4, 5, 6, 0, 7, 8, 9, -1, -2, 0, -3, -6, -7, -8, -9};
    scanf("%d", &arr);
    printf("The number of positive integers is %d \n", p(arr, 18));
    printf("The number of negative integers is %d \n", n(arr, 18));
    printf("The number of zeroes is %d \n", z(arr, 18));
    return 0;
}
int p(int arr[], int n)
{
    int count = 0;
    for (int i = 0; i < 18; i++)
    {
        if (arr[i] > 0)
        {
            count++;
        }
    }
    return count;
}
int n(int arr[], int n)
{
    int ncount = 0;
    for (int i = 0; i < 18; i++)
    {
        if (arr[i] < 0)
        {
            ncount++;
        }
    }
    return ncount;
}
int z(int arr[], int n)
{
    int zcount = 0;
    for (int i = 0; i < 18; i++)
    {
        if (arr[i] == 0)
        {
            zcount++;
        }
    }
    return zcount;
}
