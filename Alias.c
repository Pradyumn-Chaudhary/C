#include<stdio.h>

typedef struct ComputerScienceStudent{
    char name[100];
    int roll;
    float cgpa;
}coe;

int main(){
    // struct ComputerScienceStudent s1 = {"Pradyumn Chaudhary",1368,9.25};
    coe s1 = {"Pradyumn Chaudhary",1368,9.25};
    printf("NAME : %s\t",s1.name);
    printf("ROLL : %d\t",s1.roll);
    printf("CGPA : %f\n",s1.cgpa);
    return 0;
}