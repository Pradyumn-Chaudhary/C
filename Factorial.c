#include<stdio.h>
int main(){
    int n;
    printf("Enter n :\n");
    scanf("%d",&n);
    int fact = 1;
    for(int i = n;i>0;i--){
        fact = fact*i;
    }
    printf("Factorial of Given Number is: %d",fact);
    return 0;
}