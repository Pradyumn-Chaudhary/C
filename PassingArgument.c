#include<stdio.h>
int sum(int a,int b);
void Table(int c);

int main(){
    int a,b;
    printf("enter a");
    scanf("%d",&a);
    printf("enter b");
    scanf("%d",&b);
    int s = sum(a,b);          //argument/actual parameter  
    printf(" sum is : %d \n",s);
    int c;
    printf("enter c");
    scanf("%d",&c);
    Table(c);                 //argument/actual parameter
}

int sum(int x,int y){         //formal/formal parameter
    return x + y;
}

void Table(int c){             //formal/formal parameter
    for(int i = 1;i<=10;i++){
        printf("%d\n",i*c);
    }
}