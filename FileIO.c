#include<stdio.h>

int main(){
    FILE *fptr;
    fptr = fopen("Test.txt","r");
    if(fptr == NULL){
        printf("File doesn't exist");
    }else{
        fclose(fptr);
    }
    return 0;
}