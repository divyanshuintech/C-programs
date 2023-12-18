#include<stdio.h>

int main()
{
    int r, h;
    float pi = 3.14;
    printf("Enter the Radius of the Cylinder : \n");
    scanf("%d", &r);
    printf("Enter the Height of the Cylinder : \n");
    scanf("%d", &h);
    printf("The volume of the particular cylinder is : %f", pi * r * r * h);
    return 0;
}