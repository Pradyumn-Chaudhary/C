#include<stdio.h>

void OddCount(int arr[],int n);

int main(){
    int number[] ={1,2,3,4,5,6,7,8,9,10};
    OddCount(number,10);
    return 0;
}

void OddCount(int arr[],int n){
    int count = 0;
    for(int i = 0;i < 10;i++){
        if(arr[i]%2==1){
            count+=1;
        }
    }
    printf("%d",count);
    }
