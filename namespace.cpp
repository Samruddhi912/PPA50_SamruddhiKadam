#include<iostream>
namespace Marvellous{
    class demo{
        //logic
    };
}
namespace PPA{
    class hello{
        //logic
    };
}
using namespace Marvellous;
int main(){
    std::cout<<"Inside Main\n";
    demo dobj;
    PPA::hello hobj;
    return 0;
}