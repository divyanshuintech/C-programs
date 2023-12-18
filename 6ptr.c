#include <stdio.h>
int function(int a);
int main()
{
    int i = 10;
    printf("The value of i is %d\n", i);
    function(i);
    return 0;
}
int function(int a)
{
    printf("The value of i is %d", a * 10);
}