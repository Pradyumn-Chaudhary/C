#include<stdio.h>
int main(){
    char Character;
    printf("Enter Character");
    scanf("%c",&Character);
    if(Character>='0' && Character<='9'){
        printf("It is a Digit \n");
     }else{
        printf("Not a Digit");
     }
    
    return 0;
}