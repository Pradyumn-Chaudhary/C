#include<stdio.h>

void HFC(char str[]);

int main(){
    char str[100];
    printf("Enter\n");
    fgets(str,100,stdin);
    HFC(str);
    return 0;
}

void HFC(char str[]){
    char a = 0;
    for(int i = 0;str[i]!='\0';i++){
        if(a<str[i]){
            a = str[i];
        }
    }
    printf("%c",a);
}