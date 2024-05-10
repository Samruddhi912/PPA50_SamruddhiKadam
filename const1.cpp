#include<iostream>
using namespace std;

const int a=10; //constant global variable
int b=20;
class demo{
    public:
    int x,y;
    demo(){
        x=10;
        y=20;
    }
    void fun(int i,const int j) //constant i/p argument
    {
        int no1=11;
        const int no2=21; //constant local variable
        i++; //A
        j++; //NA
        no1++; //A
        no2++; //NA
    }
};
int main(){
    demo obj1;
    const demo obj2;//constant object
    obj1.fun(21,101);
    obj1.x++; //A
    obj1.y++; //A 
    obj2.x++//A
    obj2.y++; //NA
    a++; //NA
    b++; //A

    return 0;
}