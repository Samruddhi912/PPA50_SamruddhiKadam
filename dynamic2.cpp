#include<iostream>
#include<stdlib.h>
using namespace std;
class demo{
    public:
    int a,b;
    demo(){
        cout<<"constructor\n";
        a=11;
        b=21;
    }
    ~demo(){
        cout<<"destructor\n";
    }
    void fun(){
        cout<<"fun function\n";
    }

};
int main(){
    //demo obj1;
    demo*p=new demo;
    //demo*p=(demo*)malloc(sizeof(demo));
    p->fun();
    cout<<p->a<<"\n";
    cout<<p->b<<"\n";
    delete p;
    //free(p);
    return  0;
}