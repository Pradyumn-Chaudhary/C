#include<stdio.h>

int main(){
    float price[]={100,200,300};
    
    // float price[3]={100,200,300};

    // printf("Enter 1st Price");
    // scanf("%f",&price[0]);

    // printf("Enter 2nd Price");
    // scanf("%f",&price[1]);

    // printf("Enter 3rd Price");
    // scanf("%f",&price[2]);

    printf("1st:%f\n2nd:%f\n3rd:%f",price[0]+(.18*price[0]),price[1]+(.18*price[1]),price[2]+(.18*price[2]));
    return 0;
}