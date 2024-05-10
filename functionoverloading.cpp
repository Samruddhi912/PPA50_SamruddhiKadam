#include <iostream>
using namespace std;
class arithematic
{
public:
    int addition(int no1, int no2)//addition@2ii
    {
        int ans = 0;
        ans = no1 + no2;
        return ans;
    }
    int addition(int no1, int no2, int no3)//addition@3iii
    {
        int ans = 0;
        ans = no1 + no2 + no3;
        return ans;
    }
    double addition(double no1, double no2)//addition@2dd
    {
        return no1 + no2;
    }
    double addition(double no1, double no2, double no3)//addition@3ddd
    {
        return no1 + no2 + no3;
    }
};

int main()
{
    arithematic obj;
    cout << obj.addition(11, 21) << "\n";
    cout << obj.addition(11, 21, 51) << "\n";
    cout << obj.addition(89.90, 21.67) << "\n";
    cout << obj.addition(89.90, 21.67, 67.99) << "\n";

    return 0;
}