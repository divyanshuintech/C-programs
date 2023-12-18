#include <stdio.h>
#include <string.h>

struct employee
{
    int code;
    float salary;
    char name[20];
};

void show(struct employee emp)
{
    printf("The Code of the employee is : %d \n", emp.code);
    printf("The Salary of the employee is : %f \n", emp.salary);
    printf("The Name of the employee is : %s \n", emp.name);
}

int main()
{
    struct employee e1;
    struct employee *ptr;
    ptr = &e1;
    (*ptr).code = 100;
    (*ptr).salary = 100.12;
    strcpy((*ptr).name, "Harry");
    show(e1);
    return 0;
}