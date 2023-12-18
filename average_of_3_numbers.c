#include <stdio.h>
float average(int a, int b, int c);
int main()
{
    int a, b, c;
    printf("Enter the numbers :");
    scanf("%d %d %d", &a, &b, &c);
    printf("The average of the numbers is %f", average(a, b, c));
    return 0;
}
float average(int a, int b, int c)
{
    float average;
    average = (float)(a + b + c) / 3;
    return average;
}