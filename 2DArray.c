#include<stdio.h>
int main(){
    // marks of 3 subjects of 2 students
    //int marks[2][3] = {{97,98,99},{89,85,87}};
    //_ _ _|_ _ _ .
    int marks[2][3]; // _ _ _ | _ _ _ .

    marks[0][0] = 97;
    marks[0][1] = 98;
    marks[0][2] = 99;

    marks[1][0] = 89;
    marks[1][1] = 85;
    marks[1][2] = 87;

    printf("marks of 1st student 1st subject is : %d",marks[0][0]);
    return 0;
}