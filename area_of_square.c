#include <stdio.h>
#include <math.h>
int main()
{
    int a;
    printf("Enter the value of side :");
    scanf("%d", &a);
    printf("The area of the square is %f", pow(a, 2)); //pow returns double
    return 0;
}