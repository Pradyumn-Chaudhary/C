#include<stdio.h>
int main(){
    int n,count = 0;
    printf("Enter Number\n");
    scanf("%d",&n);
    do{
        count++;
        n/=10;
    }while(n!=0);
    printf("%d",count);
    return 0;
}