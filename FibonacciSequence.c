#include<stdio.h>

int main(){
    int n,a=0,b=1,c;
    printf("Enter n");
    scanf("%d",&n);
    
    for(int i = 0;i<=n;i++){
        if(i<=1){
            c = i; 
            printf("%d\n",c);
        }else{
            c = a + b;
            a = b;
            b = c;
            printf("%d\n",c);
        }
    }
    return 0;
}

// int Fibonacci(int n);

// int main(){
//     int n;
//     printf("Enter n");
//     scanf("%d",&n);
//     printf("Term : %d",Fibonacci(n));
//     return 0;
// }

// int Fibonacci(int n){
//         if(n==0){
//             return 0;
//         }
//         if(n==1){
//             return 1;
//         }
//     int fibn = Fibonacci(n-1)+Fibonacci(n-2);
//     return fibn;
// }