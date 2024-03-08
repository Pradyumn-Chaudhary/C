#include<stdio.h>
int main(){
    int a,b;
    printf("enter a");
    scanf("%d",&a);
    printf("enter b");
    scanf("%d",&b);

    if(a>b){
        printf("b (i.e %d)",b);
    }else if (a<b){
        printf("a (i.e %d)",a);
    }else{
        printf("Both are Equal (a=b (i.e.%d))",a);
    }
}