#include<stdio.h>

void square(int n); // Call by Value
void _square(int *n); //Call by Reference

int main(){
    int n = 4; 
    square(n);
    printf("number is : %d\n",n);
    
    _square(&n);
    printf("number is : %d\n",n);
    return 0;
}

void square(int n){
    n = n * n ;
    printf("Square is : %d\n",n);
}

void _square(int* n){
    *n = (*n) * (*n);
    printf("Square is : %d\n",*n);
}