#include <stdio.h>

void main(){
    int n, z = 1;
    printf("Enter n\n");
    scanf("%d", &n);
    int arr[n][n];
    int top = 0, left = 0, bottom = n-1, right = n-1;
    while(z<n){
        for (int i = left; i <= right;i++){
            arr[top][i] = z;
        }
        top++;
        for (int i = top; i <= bottom;i++){
            arr[i][right] = z;
        }
        right--;
        for (int i = right; i >= left;i--){
            arr[bottom][i] = z;
        }
        bottom--;
        for (int i = bottom; i >= top;i--){
            arr[i][left] = z;
        }
        left++;
        z++;
    }
    for (int i = 0; i < n;i++){
        for (int j = 0; j < n;j++){
            printf("%d  ", arr[i][j]);
        }
        printf("\n\n");
    }
}