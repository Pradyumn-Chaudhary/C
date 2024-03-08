#include<stdio.h>
#include<string.h>

int main(){
    char name[100] = "Pradyumn Chaudhary";
    int length = strlen(name);
    printf("%d",length);
    return 0;
}

// int countLength(char arr[]);

// int main(){
//     char Name[100];
//     printf("Enter Name\n");
//     fgets(Name,100,stdin);
//     printf("%d",countLength(Name));
//     return 0;
// }

// int countLength(char arr[]){
//     int count = 0;
//     for(int i = 0;arr[i] != '\0';i++){
//         count++;
//     }
//     return count-1;
// }