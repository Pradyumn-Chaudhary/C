#include<stdio.h>
int main(){
    int age;
    printf("Enter Age");
    scanf("%d",&age);
    /*
    Ternary Operator:
    Condition?do something if TRUE:do something if FALSE
    */
    age>=18?printf("Adult \n"):printf("Not Adult");
    return 0;
}