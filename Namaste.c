#include<stdio.h>
//Function Prototype
void Namaste();
void Bonjour();

int main(){
    char N;
    printf("Press i if Indian or Press f for French");
    scanf("%c",&N);
    if(N=='i'){
        Namaste(); // Call Function
    }else if(N=='f'){
        Bonjour(); // Call Function
    }else{
        printf("Thankyou");
    }
    return 0;
}
// Function Definition
void Namaste(){
    printf("Namaste");
}
// Function Deefinition
void Bonjour(){
    printf("Bonjour");
}