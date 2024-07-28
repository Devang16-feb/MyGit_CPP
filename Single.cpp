#include<iostream>
using namespace std;

class Base
{
    public :
     Base()
     {
        cout<<"Inside Base Cons323"
     }

};
class Derived : public Base
{

};
int main ()
{
    return 0;
}