#include<stdio.h>

struct student{
    char name[100];
    int roll;
    float cgpa;
};

int main(){
    struct student s1 = {"Pradyumn Chaudhary",1368,9.25};
    struct student *ptr = &s1;
    // printf("%s\t",(*ptr).name);
    // printf("%d\t",(*ptr).roll);
    // printf("%f\n",(*ptr).cgpa);

    printf("%s\t",ptr->name);
    printf("%d\t",ptr -> roll);
    printf("%f\t",ptr -> cgpa);

    return 0;
}