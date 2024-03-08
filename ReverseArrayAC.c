#include<stdio.h>

void ReverseArray(int arr[],int n);
void PrintArray(int arr[],int n);

int main(){
    int arr[] = {1,2,3,4,5,6,7,8,9,10};
    ReverseArray(arr,10);
    PrintArray(arr,10);
    return 0;
}

void PrintArray(int arr[],int n){
    for(int i = 0;i<n;i++){
        printf("%d\t",arr[i]);
    }
    printf("\n");
}

void ReverseArray(int arr[],int n){
    for(int i = 0;i<n/2;i++){
        int firstValue = arr[i];
        int secondValue = arr[n-i-1];
        arr[i] = secondValue;
        arr[n-i-1] = firstValue;
    }
}

