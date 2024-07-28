#include<iostream>
using namespace std;

class Base
{
    public:
      int i;
      float f;
      virtual void gun() = 0;
      virtual void sun() = 0;   

      virtual void run()  // 1000
      {  cout<<"Base Run\n";  }
};

class Derived : public Base
{
    public:
      int i;
      double d;

      void sun()                         // 2000
      {  cout<<"Derived sun\n";  }

      void fun()                         // 3000
      {  cout<<"Derived Fun\n"; }

      void gun()                          // 4000
      { cout<<"Derived gun\n";  }

      virtual void mun()  // 5000
      {  cout<<"Derived mun\n"; }
};

int main ()
{
    Base *bp = NULL;
    Derived dobj;

    bp = &dobj;

    cout<<bp->fun()<<"\n";  
    cout<<bp->gun()<<"\n";   
    cout<<bp->sun()<<"\n"; 
    cout<<bp->run()<<"\n";
    cout<<bp->mun()<<"\n"; 
    
    return 0;
}