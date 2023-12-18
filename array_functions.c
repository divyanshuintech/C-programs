#include <stdio.h>
void printarray(int ptr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("The value of element %d is %d \n", i+1, ptr[i]);
    }
}
int main()
{
    int arr[] = {1,23,345,45,64,32142,352345,125341,688};
    printarray(arr, 9);
    return 0;
}