#include<stdio.h>

void PrintHelloWorld( int count);

int main(){
    int count;
    printf("Enter Number");
    scanf("%d",&count);
    PrintHelloWorld(count);
}

void PrintHelloWorld(int count){
    if(count == 0){
        return;
    }
    printf("Hello World \n");
    PrintHelloWorld(count - 1);
}