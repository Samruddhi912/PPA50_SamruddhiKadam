#include <iostream>
using namespace std;
class base
{
public:
    int a, b;
    base()
    {
        cout << "base constructor\n";
    }
    int addition(int i, int j) // 1000
    {
        return i + j;
    }
    virtual int substarction(int i, int j) // 2000
    {
        return i - j;
    }
    virtual int multiply(int i, int j) = 0;
};
class derived : public base
{
public:
    int x, y;
    derived()
    {
        cout << "derived constructor\n";
    }
    int substarction(int i, int j) // 3000
    {
        return i - j;
    }
    int multiply(int i, int j) // 4000
    {
        return i * j;
    }
    virtual int division(int i, int j) // 5000
    {
        return i / j;
    }
};
int main()
{   
    //base bobj;
    derived dobj;
    base *bp = &dobj;
    cout<<bp->addition(10,11)<<"\n"; //base addition
    cout<<bp->substarction(10,11)<<"\n"; //derived sub
    cout<<bp->multiply(10,11)<<"\n";//derived multiply
    //cout<<bp->division(100,10)<<"\n";//error
    return 0;
}