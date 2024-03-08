#include<stdio.h>

struct student{
    char name[100];
    int roll;
    float cgpa;
};

void printInfo(struct student s);

int main(){
    struct student s1 = {"Pradyumn Chaudhary",1368,9.25};
    printInfo(s1);
    return 0;
}

void printInfo(struct student s){
    printf("Name : %s\t",s.name);
    printf("Roll : %d\t",s.roll);
    printf("CGPA : %f",s.cgpa);
}
