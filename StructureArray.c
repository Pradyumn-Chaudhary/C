#include<stdio.h>
#include<string.h>

//user defined
struct student{
    char name[100];
    int roll;
    float cgpa;
};

int main(){
    struct student ECE[100];
    struct student COE[100];
    struct student IT[100];

    strcpy(ECE[0].name,"Prdyumn Chaudhary");
    ECE[0].roll = 1368;
    ECE[0].cgpa = 9.25;

    printf("NAME : %s\t",ECE[0].name);
    printf("ROLL : %d\t",ECE[0].roll);
    printf("CGPA : %f\n",ECE[0].cgpa);

    return 0;
}