#include<stdio.h>

void L2U2L(char str[]);

int main(){
    char str[100];
    printf("Enter String : \n");
    fgets(str,100,stdin);
    L2U2L(str);
    return 0;
}

void L2U2L(char str[]){
    for(int i = 0;str[i]!='\0';i++){
        if(str[i]>='a'&&str[i]<='z'){
            str[i]=str[i]-32;
        }else if(str[i]>='A'&&str[i]<='Z'){
            str[i]=str[i]+32;
        }
        printf("%c",str[i]);
    }
}