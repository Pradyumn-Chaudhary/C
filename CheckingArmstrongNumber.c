#include<stdio.h>
#include<math.h>
void main(){
    int n, check = 0, power = 0;
    printf("Enter number\n");
    scanf("%d", &n);
    int i = n, j = n;
    while(i!=0){
        power++;
        i /= 10;
    }
    while(j!=0){
        int remain = j % 10;
        check = check + pow(remain, power);
        j /= 10;
    }
    if(check==n)
        printf("%d is an Armstrong Number", n);
        else
            printf("%d is not an Armstrong Number", n);
    }
