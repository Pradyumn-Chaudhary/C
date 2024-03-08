#include<stdio.h>

struct vector{
    int x;
    int y;
};

void VectorSum(struct vector a,struct vector b);

int main(){
    struct vector a;
    printf("enter x dimenstion of vector a\n");
    scanf("%d",&a.x);
    printf("enter y dimenstion of vector a\n");
    scanf("%d",&a.y);

    struct vector b;
    printf("enter x dimenstion of vector b\n");
    scanf("%d",&b.x);
    printf("enter y dimenstion of vector b\n");
    scanf("%d",&b.y);

    VectorSum(a,b);

    return 0;
}

void VectorSum(struct vector a,struct vector b){
    struct vector c;
    c.x = a.x + b.x;
    c.y = a.y + b.y;
    
    printf("Sum of vector a and b is : %di+%dj\n",c.x,c.y);
}