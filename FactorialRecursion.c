#include <stdio.h>

int Factorial(int n);

int main(){
    int n ;
    printf("Enter n");
    scanf("%d",&n);
    printf("Factorial is : %d",Factorial(n));
    return 0;
}

int Factorial(int n){
    if(n==1){
        return 1;
    }
    int factorial = Factorial(n-1)*n;
    return factorial;
}