#include<stdio.h>
int main(){
    int n;
    printf("Enter n");
    scanf("%d",&n);
    int i = 0;
    do{
        printf("%d \n",i);
        i++;
    } while(i<=n);
    return 0;
}