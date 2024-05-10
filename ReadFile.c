#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<fcntl.h>
//O_RDONLY      READ MODE
//O_WRONLY      WRITE MODE
//O_RDWR        READ+WRITE MODE
int main(){
    char Name[30];
    int fd=0;
    int iRet=0;
    char Data[30];
    printf("Enter the name of file you want to write.\n");
    scanf("%s",Name);
    fd=open(Name,O_RDWR);
    iRet=write(fd,Data,10);
    printf("%d bytes gets successfully read from file.\n",iRet);
    printf("%s\n",Data);
    close(fd);
    return 0;
}