#include<stdio.h>
 
// void ReverseArray(int *arr,int n);
void ReverseArray(int arr[],int n);

int main(){
    int arr[]={1,2,3,4,5,6,7,8,9,10};
    ReverseArray(arr,10);
    return 0;
}

// void ReverseArray(int *arr,int n){
void ReverseArray(int arr[],int n){
for(int i = 9;i>=0;i--){
    printf("%d\t",arr[i]);
}
}