#include<stdio.h>
int main(){
    int x;
    printf("enter number");
    scanf("%d",&x);

    if(x>=1){
        printf("Yes,It is a Natural number");
    }else{
        printf("No,It is not a Natural NUmber");
    }
    return 0;
}