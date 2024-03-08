#include<stdio.h>

void Swap(int* a,int* b);

int main(){
    int x = 3,y = 5;
    Swap(&x,&y);
    printf("x = %d & y = %d\n",x,y);
    return 0;
}

//call by reference
void Swap(int *a , int *b){
    int t = *a;
    *a = *b;
    *b = t;

    printf("a = %d & b = %d\n",*a,*b);
}