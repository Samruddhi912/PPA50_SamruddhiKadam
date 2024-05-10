#include<iostream>
using namespace std;
class base{
    public:
    int a,b;
    void fun()//1000          //defination
    {
        cout<<"base fun\n";
    }
    void gun()//2000         //defination
    {
        cout<<"base gun\n";

    }
    void sun()//3000          //defination
    {
        cout<<"base sun\n";
    }
};
class derivered:public base{
    public:
    int x,y;
    
    void gun()//4000        //redefination
    {
        cout<<"derived gun\n";
    }
    void sun()//5000        //redefination
    {
        cout<<"derived sun\n";
    }
    void run()//6000          //defination
    {
        cout<<"derived run\n";
    }
};
int main(){
    base bobj;
    derivered dobj;
    bobj.fun(); //base
    bobj.gun(); //base
    bobj.sun(); //base
    dobj.fun(); //base
    dobj.gun();//derived
    dobj.sun();//derived
    dobj.run();//derived
    return 0;
}