#include<stdio.h>

int vowelCount(char str[]);

int main(){
    char str[100];
    fgets(str,100,stdin);
    printf("%d",vowelCount(str));
    return 0;
}

int vowelCount(char str[]){
    int count = 0;
    for(int i = 0;str[i]!='\0';i++){
    if(str[i]=='a'||str[i]=='e'||str[i]=='i'||str[i]=='o'||str[i]=='u'){
        count++;
    }
    }
    return count;
}