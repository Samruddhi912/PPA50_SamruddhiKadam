#include<iostream>
using namespace std;
float area(float radius,float PI=3.14){
    float ans=0.0f;
    ans=PI*radius*radius;
    return ans;
}
int main(){
    float ret=0.0f;
    ret=area(5.8,7.20);
    cout<<"area is: "<<ret<<"\n";
    ret=area(5.8);
    cout<<"area is: "<<ret<<"\n";
    return 0;
}