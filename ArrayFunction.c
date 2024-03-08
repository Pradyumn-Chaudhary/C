#include<stdio.h>
//Function Declaration
void PrintNumbers(int arr[],int n); //void PrintNumbers(int* arr,int n);

int main(){
    int array[] = {1,2,3,4,5,6,7,8,9,10};
    //Function Call
    PrintNumbers(array,10);
    return 0;
}

//Function Definition
void PrintNumbers(int arr[],int n){  //void PrintNumbers(int* arr,int n){
for(int i = 0;i<10;i++){
    printf("%d\t",arr[i]);
}
printf("\n");
}
