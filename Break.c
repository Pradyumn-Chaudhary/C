#include<stdio.h>
int main(){
    int n;
    /*
    do{
        printf("Enter n : ");
        scanf("%d",&n);
        printf("%d",n);
    }while(n % 2 == 0); 
    */
    do{                       
        printf("Enter n : ");   
        scanf("%d",&n);        
        if(n%2!=0){             
            break;          // exit loop       
        }printf("%d\n",n);
        }while(1);
    printf("End");
return 0;
}