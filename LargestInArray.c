#include<stdio.h>

void Largest(int arr[],int n);

int main(){
    int arr[] = {1,22,111,444,559895,765,23456,987};
    Largest(arr,8);
    return 0;
}

void Largest(int arr[],int n){
    int a = 0;
    for(int i = 0;i<8;i++){
        if(a<arr[i]){
            a = arr[i];
        }
    }
    printf("%d",a);
}