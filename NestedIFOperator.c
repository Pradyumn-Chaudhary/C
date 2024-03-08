#include<stdio.h>
int main(){
    int number;
    printf("Enter Number");
    scanf("%d",&number);

    if(number>=0){
        printf("Positive Number\n");
        if(number%2==0){
            printf("Positive Even");
        } else {
            printf("Positive Odd");
        }
    } else {
        printf("Negative Number \n");
        if(number%2==0){
            printf("Negative Even");
        }else{
            printf("Negative Odd");
        }
    }

    int marks;
    printf("Enter Marks (0-100)");
    scanf("%d",&marks);
    //marks>=33?printf("Pass"):printf("Fail");
 if(0<=marks && marks < 33){
        printf("Fail");
    }else if(marks>=33 && marks<=100){
        printf("Pass");
    }else{
        printf("Wrong Marks");
    }
    return 0;
}