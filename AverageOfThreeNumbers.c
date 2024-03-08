#include<stdio.h>
int main(){
    int a , b , c;
    printf("enter a");
    scanf("%d",&a);
    printf("enter b");
    scanf("%d",&b);
    
    printf("enter c");scanf("%d",&c);

   // printf("The Average is: %d \n",(a+b+c)/3);
   int Average = (a+b+c)/3;
   printf("the average is : %d \n",Average);
    return 0;
}