#include<stdio.h>
int main(){
    int n,remainder,reverse = 0;
    printf("Enter Number\n");
    scanf("%d",&n);
    do{
        remainder = n % 10;
        reverse = reverse * 10 + remainder;
        n/=10;
    }while(n!=0);
    printf("%d",reverse);
    return 0;
}