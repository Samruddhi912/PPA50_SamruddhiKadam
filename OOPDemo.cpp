#include <iostream>
using namespace std;
class arithematic
{
public:
    int no1, no2;
    arithematic()
    {
        no1 = 0;
        no2 = 0;
    }
    arithematic(int a, int b)
    {
        no1 = a;
        no2 = b;
    }
    int addition()
    {
        int ans = 0;
        ans = no1 + no2;
        return ans;
    }
    int multiplication()
    {
        int ans = 0;
        ans = no1 * no2;
        return ans;
    }
    int substraction()
    {
        int ans = 0;
        ans = no1 - no2;
        return ans;
    }
};
int main()
{
    int val1 = 0, val2 = 0, ret = 0;
    cout << "Enter two numbers\n";
    cin >> val1 >> val2;
    arithematic obj(val1, val2);
    ret = obj.addition();
    cout << "Addition is: " << ret<<"\n";
    ret = obj.substraction();
    cout << "Substraction is : " << ret<<"\n";
    ret = obj.multiplication();
    cout << "Multiplication is : " << ret<<"\n";

    return 0;
}