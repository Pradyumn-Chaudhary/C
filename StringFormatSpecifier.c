#include<stdio.h>

int main(){
    char firstname[23],lastname[19];
    printf("Enter FirstName\n");
    scanf("%s",firstname);
    printf("Enter LastName\n");
    scanf("%s",lastname);
    printf("I am %s %s",firstname,lastname);
    return 0;
}