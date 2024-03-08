#include<stdio.h>
int main(){
    //iterator:counter
    //increment operator :
    //i++ ,use then increse
    //++i ,increse then increse
    for(int i = 1;i<=10;i++){ //i++ -> i=i+1
        printf("%d\n",i*2);
    }
    for(float i = 1.0;i<=10;i++){
        printf("%f\n",i);
    }
    for(char ch = 'a';ch<='z';ch++){
        printf("%c\n",ch);
    }
    return 0;
}