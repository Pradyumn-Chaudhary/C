#include<stdio.h>
int main(){
    int n;
    printf("Enter n");
    scanf("%d",&n);
    // int i = 0;
    // while(i<=n){
    //     printf("%d\n",i);
    //     i++;
    // }
    // return 0;

    for(int i = 0;i<=n;i++){
        printf("%d\n",i);
    }
    return 0;
}