#include<stdio.h>
int function(int i);
int main()
{
    int i = 10;
    printf("The value of i is %d\n", i);
    printf("The address of i is %d\n", &i);
    function(i);
    return 0;
}
int function(int i){
    printf("The address of i is %d", &i);
}