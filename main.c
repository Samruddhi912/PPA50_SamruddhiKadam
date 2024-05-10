#include<stdio.h>
int x=21;
extern int no;
extern void marvellous();
int main(){
    printf("value of x is : %d\n",x);
    printf("value of no is : %d\n",no);
    printf("sum is : %d\n",no+x);
    marvellous();


    return 0;
}