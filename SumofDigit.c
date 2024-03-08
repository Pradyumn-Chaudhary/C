#include<stdio.h>

int Sum (int n);

int main(){
    int n;
    printf("Enter number");
    scanf("%d",&n);
    printf("%d",Sum(n));
    return 0;
}

int Sum(int n){
    int sum = 0;
    while(n>0){
        sum += (n%10);
        n /= 10;
    }return sum;
}