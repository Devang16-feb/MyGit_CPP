#include<iostream>
   // Inbuild Namespace

namespace Marvellous
{
    class Demo
    {
        // Logic
    };
}

namespace PPA
{
    class Hello
    {
        // Logic
    };
}
using namespace Marvellous;

int main ()
{
    std::cout<<"Inside Main\n";
    Demo obj;
    PPA::Hello hobj;  // line is more rediable

    return 0;
}