#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<fcntl.h>
int main(){
    char Name[30];
    printf("Enter the name of file you want to delte : \n");
    scanf("%s",Name);
    unlink(Name);
    return 0;
}