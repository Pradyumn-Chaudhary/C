#include<stdio.h>

typedef struct Address{
    int HouseNo;
    int Block;
    char city[100];
    char state[100];
}add;

void printAddress(add n);

int main(){
    // add Addresses[5]; 
    // Addresses[0] = {34,2,"Bharatpur","Rajasthan"};
    add a = {34,2,"Bharatpur","Rajasthan"};
    add b = {12,5,"Mathura","Uttar Pradesh"};
    add c = {9,3,"Jodhpur","Rajsathan"};
    add d = {7,12,"Kota","Rajasthan"};
    add e = {1,1,"Ayodhya","Uttar Pradesh"};
    printAddress(a);
    printAddress(b);
    printAddress(c);
    printAddress(d);
    printAddress(e);
    return 0;
}

void printAddress(add n){
    printf("Address is %d,%d,%s,%s",n.HouseNo,n.Block,n.city,n.state);
    printf("\n");
}

