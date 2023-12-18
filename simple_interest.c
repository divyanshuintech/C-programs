#include<stdio.h>

int main()
{
    int p,t,r;
    printf("Enter the Principal Amount \n");
    scanf("%d", &p);
    printf("Enter the Time \n");
    scanf("%d", &t);
    printf("Enter the Rate of Interest \n");
    scanf("%d", &r);
    printf("The Simple Interest to be paid on the Principal Amount is : %d", (p*t*r)/100);
   return 0;
}