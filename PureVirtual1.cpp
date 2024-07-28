#include<iostream>
using namespace std;

class Base
{
    public:
      int i;
      float f;
      void fun()       //1000
      {
        cout<<"Base Fun:";
      }
      virtual void gun()      //2000
      {
        cout<<"base gun:";
      } 
};

class derived : public Base
{
    public:
      int i;
      double d;

      virtual void fun()      //3000
      {
        cout<<"derived fun:";
      } 
      void gun()       //4000
      {
        cout<<"Derived gun:";
      }
      virtual void sun()      //5000
      {
        cout<<"derived sun:";
      }
};

int main ()
{
    Base *bp = new derived;
    bp  -> gun();

    return 0;
}