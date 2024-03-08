#include<stdio.h>

typedef struct BankAccount{
    char name[100];
    int accountNumber;
}acc;

int main(){
    acc a = {"Anu Kuntal",1278910};
    printf("%s",a.name);
    printf("%d",a.accountNumber);
    return 0;
}