#include<stdio.h>
int main(){
    int n,m,i,j,frequency = 0;
    printf("Enter n(number of element of array)\n");
    scanf("%d", &n);
    int arr[n];
    for (i = 0; i < n;i++){
        printf("Enter number\n");
        scanf("%d", &arr[i]);
    }

    printf("Enter element/number whose frequency is to be checked\n");
    scanf("%d", &m);

    for (j = 0; j < n;j++){
        if(arr[j]==m){
            frequency++;
        }
    }
    printf("Frequency = %d\n", frequency);
    return 0;
}