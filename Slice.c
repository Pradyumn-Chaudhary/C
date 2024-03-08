#include<stdio.h>

void Slice(char str[],int n,int m);

int main(){
    int n,m;
    char str[250] = "HelloWorld";
    printf("Enter n\n");
    scanf("%d",&n);
    printf("ENter m\n");
    scanf("%d",&m);
    printf("Enter String\n");
    fgets(str,300,stdin);
    Slice(str,n,m);
    return 0;
}

void Slice(char str[],int n, int m){
    for(int i = n;i<=m;i++){
        printf("%c",str[i]);
    }
}