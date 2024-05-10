#include <iostream>
using namespace std;
// class declaration
class demo
{
public:      // access specifier
    int no1; // characteristic
    int no2; // characteristic
    demo()   // constructor
    {
        cout << "Inside constructor\n";
        no1=11;
        no2=21;
    }
    ~demo() // destructor
    {
        cout << "Inside destructor\n";
    }
    void fun() // behaviour
    {
        cout << "Inside fun of demo class\n";
    }
};
int main()
{
    cout<<"Inside main\n";
    demo obj1;
    cout<<"size of class: "<<sizeof(obj1)<<"\n";
    cout<<"value of no1: "<<obj1.no1<<"\n";
    cout<<"value of no1: "<<obj1.no2<<"\n";
    obj1.fun();

    return 0;
}