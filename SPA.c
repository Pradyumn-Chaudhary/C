#include<stdio.h>

void doWork(int a,int b ,int *sum,int *product,int *average);

int main(){
    int a = 13,b = 23;
    int sum , product , average;
    doWork(a,b,&sum,&product,&average);
    printf("sum = %d\nproduct = %d\naverage = %d",sum,product,average);
    return 0;
}

void doWork(int a,int b ,int *sum,int *product,int *average){
    *sum = a+b;
    *product = a*b;
    *average = (a+b)/2;
}
