#include<stdio.h>

int main(){
    int x;
    printf("Enter x");
    scanf("%d",&x);
    int arr[] = {1,2,3,4,5,6,7,8,9,10};
    x = arr[10];
    for(int i = 0;i<11;i++){
        printf("%d\t",arr[i]);
    }
    return 0;
}