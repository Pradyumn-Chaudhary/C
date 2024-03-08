#include<stdio.h>

float CTF(float Celcius);

int main(){
    float Celcius;
    printf("Enter Celcius");
    scanf("%f",&Celcius);
    printf("%f Celsius is equal to %f Farhenheit",Celcius,CTF(Celcius));
    return 0;
}

float CTF(float Celcius){
    float f = (Celcius*9.0/5.0)+32;
    return f;
}