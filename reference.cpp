#include <iostream>
using namespace std;
int main()
{
    int no = 11;
    int &x = no;
    int &ref = no;
    cout << no << "\n";
    cout << x << "\n";
    cout << &no << "\n";
    cout << &x << "\n";
    double d = 90.9999;
    double &y = d;
    cout<<d<<"\n";
    cout<<&y<<"\n";
    int *p = &no;
    int *(&z) = p;
    cout<<*(&z)<<"\n";

    return 0;
}