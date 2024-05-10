#include<stdio.h>
#pragma pack(1)
struct demo{
    int no;
    float f;
    int data;
    char ch;
};
union heloo{
    int no;
    float f;
    int data;
    char ch;
};
int main(){
    struct demo dobj;
    union heloo hobj;
    printf("Size of structure: %d\n",sizeof(dobj)); //13
    printf("Size of structure: %d\n",sizeof(hobj)); //4
    hobj.no=11;;
    printf("%d\n",hobj.no);
    hobj.data=21;
    printf("%d\n",hobj.no);
    hobj.f=90.99;
    printf("%f\n",hobj.f);

    return 0;
}