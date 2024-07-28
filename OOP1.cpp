#include<iostream>
using namespace std;

//  Class Declaration
class Demo
{
    public:       // Acces Specifier
    int no1 = 11;      // Charactorisics
    int no2 = 21;      // Charactorisics

    Demo()     // Constructor     automaticslly called after Memory Allocation
    {
        cout<<"Inside Constructor\n";
    }
    ~Demo()     // Destructor
    {
        cout<<"Inside Destructor\n";
    }
    void Fun()   // Behaviour
    {
        cout<<"Inside Funof Demo class\n";
    }

};

int main()
{
    cout<<"Inside Main\n";
    Demo obj1;
    cout<<"Size of object is :"<<sizeof(obj1)<<"\n";
    cout<<"Value of no1: "<<obj1.no1<<"\n";
    cout<<"Value of no2: "<<obj1.no2<<"\n";
    obj1.Fun();
    
    return 0;
}