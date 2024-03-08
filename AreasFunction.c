#include<stdio.h>
#include<math.h>

float RectangleArea(float a, float b);
float CircleArea (float r);
float SquareArea(float a);

int main(){
    float a,b,r,y;
    printf("Enter Lenght of Rectangle\n");
    scanf("%f",&a);
    printf("Enter Width of Rectangle\n");
    scanf("%f",&b);
    printf("Area of Rectangle is : %f \n ",RectangleArea(a,b));
    printf("Enter Radius of Circle\n");
    scanf("%f",&r);
    printf("Area of Circle is : %f \n ",CircleArea(r));
    printf("Enter Side of Square\n");
    scanf("%f",&y);
    printf("Area of Square is : %f \n ",SquareArea(y));
    return 0;
}

float RectangleArea(float a , float b){
    return a*b;
}

float CircleArea(float r){
    return 3.14*pow(r,2);
}

float SquareArea(float a){
    return pow(a,2);
}