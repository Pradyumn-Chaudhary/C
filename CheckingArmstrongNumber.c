#include<stdio.h>
#include<math.h>
void main(){
    int x,y,z,m,n,count = 0,i=0,j=0,check = 0;
    int arr[10];
    printf("Enter Range\n");
    scanf("%d %d",&x,&z);
    m = x;
    while(m!=z+1){
    n = x;
    while(n!=0){
        arr[i] = n % 10;
        n/=10;
        count++;
        i++;
    }
    arr[count]=00;
    while(arr[j]!=00){
        y = pow(arr[j],count);
        check+=y;
        j++;
    }
    if(m==check){
        printf("%d\n",m);
    }
    m++;
    }
}