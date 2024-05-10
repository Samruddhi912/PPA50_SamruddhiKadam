#include <iostream>
using namespace std;
class arithematic
{
public:
    int no1, no2;
    
    arithematic(int a, int b)
    {
        no1 = a;
        no2 = b;
    }
    int addition()//int addition(arithematic*this)
    {
        int ans = 0;
        //ans = no1 + no2;
        ans=this->no1+this->no2;
        return ans;
    }
    
};
int main()
{
    arithematic obj(21,11);
    int ret = obj.addition();
    cout << "Addition is: " << ret<<"\n";
    

    return 0;
}