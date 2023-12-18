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
    struct employee *ptr;
    ptr = &e1;
    (*ptr).code = 1;
    (*ptr).salary = 1000.12;
    strcpy((*ptr).name,"Divyanshu Dubey");
    printf("The code of the employee is %d \n", (*ptr).code);
    printf("The salary of the employee is %.2f \n", (*ptr).salary);
    printf("The name of the employee is %s \n", (*ptr).name);
    ptr->code = 1;
    ptr->salary = 1000.12;
    strcpy(ptr->name,"Divyanshu Dubey");
    printf("The code of the employee is %d \n", ptr->code);
    printf("The salary of the employee is %.2f \n", ptr->salary);
    printf("The name of the employee is %s \n", ptr->name);
    return 0;
}