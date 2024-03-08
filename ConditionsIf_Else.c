#include <stdio.h>
int main(){

    int marks;
    printf("enter marks");
    scanf("%d",&marks);
    
    if(100>=marks && marks>90){
        printf("A+ \n");
        printf("Outstanding");
    }
    else if(marks<=90 && marks>80){
        printf("A \n");
        printf("Excellent");
    }
    else if(marks<=80 && marks>70){
        printf("B+\n");
        printf("Good");
    }
    else if(marks<=70 && marks>60){
        printf("B \n");
        printf("Okay");
    }
    else if(marks<=60 && marks>50){
        printf("C+ \n");
        printf("Fine");
    }
    else if(marks>100){
        printf("Invalid Input");
    }
    else{
        printf("Fail \n");
        printf("Better Luck Next Time");
    }
    return 0;
}