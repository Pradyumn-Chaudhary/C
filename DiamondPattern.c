#include <stdio.h>
int main(){
    int n;
    printf("Enter n");
    scanf("%d",&n);
    int m = 2*n-1;
for(int i = 1;i<=m;i=i+2){
    for(int j = (m-i)/2;j>0;j--){
        printf(" ");
    }
    for(int k = i;k>0;k--){
        printf("*");
    }
    printf("\n");
}
for(int i = m-2;i>0;i=i-2){
    for(int j = (m-i)/2;j>0;j--){
        printf(" ");
    }
    for(int k = i;k>0;k--){
        printf("*");
    }
    printf("\n");
}
    return 0;
}