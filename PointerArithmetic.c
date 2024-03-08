#include<stdio.h>
int main(){
    int age = 22;
    int* ptr = &age;
    printf("ptr : %u \n",ptr);
    ptr++;
    printf("ptr : %u\n",ptr);

    float price = 100;
    float *prt = &price;
    printf("%u\n",prt);
    prt++;
    printf("%u\n",prt);

    char c = '*';
    char *ctr = &c;
    printf("%u\n",ctr); 
    ctr++;
    printf("%u\n",ctr);
}