#include<stdio.h>

int main(){
    char name[23];
    //gets(name); -> dangeroug and outdated
    fgets(name,100,stdin);
    puts(name);
    return 0;
}