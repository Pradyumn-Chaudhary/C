# include<stdio.h>
int main(){

    int a , b;
    printf("enter a");
    scanf("%d",&a);
    printf("enter b");
    scanf("%d",&b);

    int sum = a + b;
    printf("sum is: %d \n",sum);
    /*
    can also be done without making the third variable sum
    i.e printf("sum is %d \n", a + b);
    */
    return 0;
}