#include<stdio.h>
struct marvellous{
    int no;
    float f;
    int i;
};
int mainn(){
    struct marvellous mobj;
    struct marvellous *ptr=&mobj;
    ptr->no=11;
    ptr->f=90.99;
    ptr->i=21;
    printf("%d\n",ptr->no);
    printf("%d\n",mobj.no);
    printf("%d\n",sizeof(mobj));//12
    
}