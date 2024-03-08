#include<stdio.h>

int power(int a,int b);

int main(){
    int a,b;
    printf("Enter number\n");
    scanf("%d",&a);
    printf("Enter Power\n");
    scanf("%d",&b);
    printf("%d to the power %d : %d",a ,b ,power(a,b));
    return 0;
}

int power(int a,int b){
    int pow = 1;
    for(int i = 1;i<=b;i++){
        pow *=a;
    }
    return pow;
}
