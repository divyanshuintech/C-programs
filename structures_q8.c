#include <stdio.h>
#include <string.h>

typedef struct account
{
    int number;
    float balance;
    char holder[20];
} stracc;
int main()
{
    stracc p1;
    p1.number;
    p1.balance;
    p1.holder;
    printf("Enter the account number : \n");
    scanf("%d", &p1.number);
    printf("Enter the account balance : \n");
    scanf("%f", &p1.balance);
    printf("Enter the account holder name : \n");
    scanf("%s", p1.holder);
    printf("%d is account number \n%.2f is the account balance \n%s is the account holder name.", p1.number, p1.balance, p1.holder);
    return 0;
}