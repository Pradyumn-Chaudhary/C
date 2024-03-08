#include<stdio.h>
#include<string.h>

void Salting(char password[]);

int main(){
    char password[100];
    printf("Enter Password :\n");
    scanf("%s",password);
    Salting(password);
    return 0;
}

void Salting(char password[]){
    char newPassword[200];
    char Salt[] = "123";
    strcpy(newPassword,password);
    strcat(newPassword,Salt);
    puts(newPassword);

}