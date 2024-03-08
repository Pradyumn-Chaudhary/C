#include <stdio.h>
int main(){
    // char day;
    //m-mon,t-tues
    int day;
    printf("Enter Day (1-7)");
    //1-Mon,2-Tuesday........
    scanf("%d",&day);
    switch(day){
        //case 'm' : printf("Monday");
        //break;
       case 1 : printf("Monday");
       break;
       case 2 : printf("Tuesday");
       break;
       case 3 : printf("Wednesday");
       break;
       case 4 : printf("Thursday");
       break;
       case 5 : printf("Friday");
       break;
       case 6 : printf("Saturday");
       break;
       case 7 : printf("Sunday \n");
       printf("Holiday");
       break;
       default : printf("Invalid Input");
    }
    return 0;
}