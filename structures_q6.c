#include <stdio.h>
typedef struct complex
{
    int x;
    int y;
} strcom;

void display(strcom c)
{
    printf("The value of real part is %d \n", c.x);
    printf("The value of complex part is %d \n", c.y);
}

int main()
{
    strcom arr[5];
    for (int i = 0; i < 5; i++)
    {
        printf("Enter the real number %d :", i + 1);
        scanf("%d", &arr[i].x);
        printf("Enter the complex number %d :", i + 1);
        scanf("%d", &arr[i].y);
    }
    for (int i = 0; i < 5; i++)
    {
        display(arr[i]);
    }
    return 0;
}