#include<stdio.h>
void encrypt(char c[]){
    char *ptr = c;
    while(*ptr != '\0'){
        *ptr = *ptr + 1;
        ptr++;
    }
}
void decrypt(char c[]){
    char *ptr = c;
    while(*ptr != '\0'){
        *ptr = *ptr - 1;
        ptr++;
    }
}

int main()
{
    char c[] = "Divyanshu";
    encrypt(c);
    printf("The Encrypted string is : %s\n", c);
    decrypt(c);
    printf("The Decrypted string is : %s", c);
    return 0;
}