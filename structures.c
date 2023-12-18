#include <stdio.h>
#include <string.h>
struct employee
{
    int code;
    float salary;
    char name[20];
};

int main()
{
    struct employee e1;
    e1.code = 123;
    e1.salary = 100.12;
    strcpy(e1.name,"Divyanshu Dubey");
    printf("%d \n", e1.code);
    printf("%.2f \n", e1.salary);
    puts(e1.name);
    return 0;
}