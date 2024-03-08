#include<stdio.h>
//Function Declaration/Prototype
void printHello();
void IronMan();

int main(){
    //Function Call
    printHello();
    IronMan();
    return 0;
}
//Function Definition
void printHello(){
    printf("Hello!\n");
}

void IronMan(){
    printf("I am IronMan");
}
