#include<stdio.h>

void PrintString(char arr[]);

int main(){
    // char name[] = {'P','R','D','Y','U','M','N','\0'};
    // char Name[] = "PRADYUMN";

    char FirstName[] = "PRADYUMN";
    char LastName[] = "CHAUDHARY";
    PrintString(FirstName);
    PrintString(LastName);
    return 0;
}

void PrintString(char arr[]){
    for(int i = 0; arr[i] != '\0';i++){
        printf("%c",arr[i]);
    }
    printf(" ");
}