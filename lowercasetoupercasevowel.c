#include<stdio.h>
#include<string.h>

void L2U(char str[]);

int main(){
    char str[100];
    printf("Enter String :\n");
    fgets(str,100,stdin);
    L2U(str);
    return 0;
}

void L2U(char str[]){
    for(int i = 0;str[i]!='\0';i++){
        if(str[i]=='a'||str[i]=='e'||str[i]=='i'||str[i]=='o'||str[i]=='u'){
            str[i]=str[i]-32;
        }
        printf("%c",str[i]);
    }
}