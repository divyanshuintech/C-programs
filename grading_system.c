#include <stdio.h>

int main()
{
    int mm;
    printf("Enter the total marks of the student : ");
    scanf("%d", &mm);
    if (mm >= 80)
    {
        printf("You've got A grade");
    }
    else if (mm >= 70)
    {
        printf("You've got B grade");
    }
    else if (mm >= 60)
    {
        printf("YOu've got C grade");
    }
    else if (mm >= 50)
    {
        printf("You've got D grade");
    }
    else
    {
        printf("You've got F  grade");
    }
    return 0;
}