#include<stdio.h>
int main(){
   /* 
   int ifSunday , ifSnowing;
    printf("If Sunday Press 1 \n If not then press 0");
    scanf("%d",&ifSunday);
    printf("Press 1 if there is snowing \n otherwise press 0");
    scanf("%d",&ifSnowing);
    printf("%d \n",ifSunday && ifSnowing == 1);
    */
    /*
    int ifMonday;
    int ifRaining;
    printf("if Monday Press 1 \n otherwise Press 0");
    scanf("%d",&ifMonday);
    printf("If Raining -> 1 \n If not Raining -> 0");
    scanf("%d",&ifRaining);
    printf("%d \n", ifMonday || ifRaining == 1);
    */

   int x;
   printf("enter x \n");
   scanf("%d",&x);
   printf("%d", x > 9 && x < 100);

    return 0;
}