#include<stdio.h>
int main(){
    /*
    first of all we take a float type variable a and b
    then we take input in a and b
    after that we calculate the perimeter of Rectangle
    */
    float a , b;
    printf("enter a");
    scanf("%f",&a);

    printf("enter b");
    scanf("%f",&b);
    
    printf("The Perimeter of Rectangle is: %f \n",2*(a+b));

    int n;
    printf("enter n");
    scanf("%d",&n);
    printf("Cube of n is : %d",n*n*n);
    return 0;
}