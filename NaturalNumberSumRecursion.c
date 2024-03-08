#include<stdio.h>

int Sum(int n);

int main(){
    int n;
    printf("Enter n");
    scanf("%d",&n);
    printf("Sum is : %d",Sum(n));
    return 0;
}

//Recursive Function
int Sum(int n){
    if(n==1){
        return 1;
    }
    int SumNm1 = Sum(n-1);
    int sum = SumNm1 + n;
    return sum;
}