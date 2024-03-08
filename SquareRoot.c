#include<stdio.h>
#include<math.h>

float SquareRoot(int n);

int main(){
    int n;
    printf("Enter Number :");
    scanf("%d",&n);
    SquareRoot(n);
    return 0;
}

float SquareRoot(int n){
    float squareRoot = pow(n,1.0/2.0);
    printf("Squareroot of %d is %f",n ,squareRoot);
    return squareRoot;
}