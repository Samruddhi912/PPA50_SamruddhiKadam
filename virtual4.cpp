#include<iostream>
using namespace std;

class base{
    public:
    int a,b;
    void fun()//1000
    {
        cout<<"inside base fun\n";
    }
    virtual void gun()//2000
    {
        cout<<"inside base gun\n";

    }
    void sun()//3000
    {
        cout<<"inside base sun\n";
        
    }
    virtual void mun()//4000
    {
        cout<<"indide base mun\n";
    }

};
class derived:public base{
    public:
    int x,y;
    virtual void gun()//5000
    {
        cout<<"derived gun\n";

    }
    virtual void sun() //6000
    {
        cout<<"derived sun\n";
    }
    virtual void run()//7000
    {
        cout<<"derived run\n";
    }
};
int main(){
    derived dobj;
    base *bp=&dobj;
    cout<<"size of base class is: "<<sizeof(base)<<"\n";
    cout<<"size of derived class is: "<<sizeof(derived)<<"\n";
    bp->fun(); //base fun
    bp->gun(); //derived gun
    bp->sun(); //base sun
    bp->mun(); //base mun
    //bp->run(); //error
    return 0;
}