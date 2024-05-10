#include<stdio.h>
int x=101;
void marvellous(){
    int i=21;
    int no=52;
    printf("From marvellous value of no is: %d\n",no);
    printf("From marvellous value of i is: %d\n",i);
    printf("From marvellous value of x is: %d\n",x);
}
int main(){
    int no=11;
    printf("From main value of no is: %d\n",no);
    printf("From main value of x is: %d\n",x);
    marvellous();
    return 0;
}