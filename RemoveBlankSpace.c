#include<stdio.h>

void RBS(char str[]);

int main(){
    char str[100];
    printf("Enter\n");
    fgets(str,100,stdin);
    RBS(str);
    return 0;
}

void RBS(char str[]){
    for(int i = 0;str[i]!='\0';i++){
        if(str[i]!=' '){
            printf("%c",str[i]);
        }
    }
}