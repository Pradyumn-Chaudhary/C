#include<stdio.h>
int main(){
    int n;
    printf("enter n : \n");
    scanf("%d",&n);
    for(int i = 10;i>0;i--){
        printf("%d\n",n*i);
    }
    return 0;
}