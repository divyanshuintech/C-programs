#include <stdio.h>
void sumandavg(int a, int b, int *sum, float *avg);

int main()
{
    int a, b, sum;
    float avg;
    printf("Enter the value of a :");
    scanf("%d", &a);
    printf("Enter the value of b :");
    scanf("%d", &b);
    sumandavg(a, b, &sum, &avg);
    printf("The value of sum is %d\n", sum);
    printf("The value of avg is %f\n", avg);
    return 0;
}
void sumandavg(int a, int b, int *sum, float *avg)
{
    *sum = a + b;
    *avg = (float)(*sum) / 2;
}