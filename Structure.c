#include<stdio.h>
#include<string.h>

// user defined
struct student{
    char name[100];
    int roll;
    float cgpa;
};

int main(){

    // struct student s1 = {"Pradyumn Chaudhary",1368,9.25};
    // struct student s2 = {"Parth Sharma",1356,9.25};
    // struct student s3 = {"Pooja Jakhar",1364,9.25};

    
    struct student s1;
    //s1.name = Pradyumn Chaudhary
    strcpy(s1.name,"Pradyumn Chaudhary");
    s1.roll = 1368;
    s1.cgpa = 9.25;

    printf("Name : %s\n",s1.name);
    printf("Roll : %d\n",s1.roll);
    printf("CGPA : %f\n",s1.cgpa);

    struct student s2;
    strcpy(s2.name,"Parth Sharma");
    s2.roll = 1356;
    s2.cgpa = 9.25;

    printf("Name : %s\n",s2.name);
    printf("Roll : %d\n",s2.roll);
    printf("CGPA : %f\n",s2.cgpa);

    struct student s3;
    strcpy(s3.name,"POOJA JAKHAR");
    s3.roll = 1364;
    s3.cgpa = 9.25;

    printf("Name : %s\n",s3.name);
    printf("Roll : %d\n",s3.roll);
    printf("CGPA : %f\n",s3.cgpa);

    return 0;
}