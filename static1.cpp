#include<iostream>
using namespace std;
class demo{
    public:
    int no1,no2;
    static int x;
    demo(){
        no1=10;
        no2=20;
    }
    void fun(){
        cout<<"inside fun\n";
        cout<<no1<<"\n";
        cout<<x<<"\n";
    }
    static void gun(){
        cout<<"inside gun\n";
        cout<<x<<"\n";
    }
};
int demo::x=11;
int main(){
    cout<<"value of x: "<<demo::x<<"\n";
    demo::gun();
    demo obj1;
    demo obj2;
    cout<<"size of object: "<<sizeof(obj1)<<"\n";
    cout<<obj1.no1<<"\t"<<obj1.no2<<"\n";
    cout<<obj2.no1<<"\t"<<obj2.no2<<"\n";
    obj1.fun();
    obj2.fun();
    obj1.gun();
    cout<<"value of x using object: "<<obj1.x<<"\n";
    return 0;
}