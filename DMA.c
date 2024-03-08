#include<stdio.h>
#include<stdlib.h>

int main(){

    int n;
    printf("Enter n :\n");
    scanf("%d",&n);
    float *ptr;
    ptr = (float*)calloc(n,sizeof(float));

    for(int i = 0;i<n;i++){
    printf("%d\t",ptr[i]);
    }

    free(ptr);

    
    ptr = (float *)malloc(5*sizeof(float));

    for(int i = 0;i<5;i++){
        printf("%d\t",ptr[i]);
    }

    return 0;
}