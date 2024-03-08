#include<stdio.h>
int main(){
    char ch;
    printf("Enter Character");
    scanf("%c",&ch);
    // ch = 'A' & ch = 65 have same meaning for compiler
       if(ch >= 'A' && ch <= 'Z'){
        printf("Upper Case");
    }else if(ch >= 'a' && ch<='z'){
        printf("Lower Case");
    }else{
        printf("Not a English Alphabet");
    }
    return 0;
}