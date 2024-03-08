#include<stdio.h>

int main(){
    float x = 100;
    float *ptr = &x;
    float **pptr = &ptr;

    printf("%f\n",**pptr);
    return 0;
}