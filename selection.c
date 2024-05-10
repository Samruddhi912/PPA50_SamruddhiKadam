#include<stdio.h>
int main(){
    int a=0;
    int ans=0;
    printf("enter number\n");
    scanf("%d",&a);
    ans=a%2;
    if(ans==0){
        printf("num is even\n");
    }
    else{
        printf("num is odd\n");
    }
    return 0;
}