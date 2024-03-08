#include<stdio.h>

void xCount(int arr[],int n,int x);

int main(){
    int x;
    printf("Enter x: \n");
    scanf("%d",&x);
    int arr[] = {10,9,9,8,8,8,7,7,7,7,6,6,6,6,6,5,5,5,5,5,5,4,4,4,4,4,4,4,3,3,3,3,3,3,3,3,2,2,2,2,2,2,2,2,2,1,1,1,1,1,1,1,1,1,1,1};
    xCount(arr,55,x);
    return 0;
}

void xCount(int arr[],int n,int x){
    int count = 0;
    for(int i = 0;i<55;i++){
        if(arr[i]==x){
            count+=1;
        }
    }
    printf("%d",count);
}