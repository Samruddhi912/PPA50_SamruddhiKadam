#include<stdio.h>
struct hello{
    int no;  //4
    float f; //4

};
struct demo{
    int data;            //4
    struct hello hobj;   //8
};
int main(){
    struct demo dobj;
    dobj.data=11;
    dobj.hobj.no=21;
    dobj.hobj.f=90.00;
    
    return 0;
}