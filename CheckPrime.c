#include<stdio.h>
int main(){
    int n;
    printf("Enter n");
    scanf("%d",&n);
    int p = 0;
    for(int i = 2;i<n;i++){
        if(n%i==0){
            p += 1;
        }
    }
    if(p>0){
        printf("%d is not a prime number",n);
    }else{
        printf("%d is a prime number",n);
    }
}