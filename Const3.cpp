#include<iostream>
using namespace std;

class Demo
{
    public:
    int X,Y;
    Demo()
    {
      X = 10;
      Y = 20;
    }
    void fun()            // non constant function
    {
      cout<<"Inside Fun\n";
      X++;
      Y++;   
    }
    void gun() const    // constant function
    {
      cout<<"Inside gun\n";
      //X++;
      //Y++;
    }
};
int main ()
{
  Demo obj1; // anyone
  const Demo obj2;  // only call constant

  obj1.fun();  // Normal object normal function
  obj1.gun();  // Normal object constant function

  obj2.fun();  // constant object normal function
  obj2.gun();  // constant object constant function
    return 0;
}