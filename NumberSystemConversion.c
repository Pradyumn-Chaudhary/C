#include<stdio.h>
#include<math.h>

long long binaryToDecimal(int number);
long long decimalToBinary(int number);

int main(){
    long n,number;
    printf("1.Binary to Decimal\n2.Decimal to Binary\n");
    scanf("%ld", &n);
    if(n==1){
        printf("Enter Binary\n");
        scanf("%ld", &number);
        printf("%ld = %lld", number, binaryToDecimal(number));
    }else if(n==2){
        printf("Enter Decimal\n");
        scanf("%ld", &number);
        printf("%ld = %lld", number, decimalToBinary(number));
    }else{
        printf("Invalid Input");
    }
    return 0;
}

long long binaryToDecimal(int number){
    int decimal = 0,i=0;
    while(number!=0){
        int rem = number % 10;
        if(rem == 1)
        decimal += pow(2, i);
        i++;
        number /= 10;
    }
    return decimal;
}

long long decimalToBinary(int number){
    int binary = 0,i=1;
    while (number != 0){
        int rem = number % 2;
        binary += rem * i;
        i *= 10;
        number /= 2;
    }
    return binary;
}