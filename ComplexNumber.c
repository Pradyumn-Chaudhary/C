#include<stdio.h>

struct complex{
    int x;
    int y;
};

void Complex(struct complex a );

int main(){
    struct complex c;
    printf("Enter Real Part");
    scanf("%d",&c.x);
    printf("Enter Imaginary Part");
    scanf("%d",&c.y);

    Complex(c);

    return 0;
}

void Complex(struct complex a){
    printf("%d+%di",a.x,a.y);
}