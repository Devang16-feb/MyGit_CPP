#include<iostream>
using namespace std;

class Demo
{
    public:
      int No1, No2;   // non Static charactersics
      static int x;

      Demo()
      {
        No1 = 0;
        No2 = 0;
      }
      void Fun()   // 
      {
        cout<<"Inside fin\n";
        cout<<No1<<"\n";
        cout<<x<<"\n";
      }
      static void Gun()
      {
        cout<<"inside Gun\n";
        cout<<x<<"\n";
      }
};
int Demo :: x = 11;

int main ()
{
    cout<<"Value of x is :"<<Demo::x<<"\n";
    Demo::Gun();

    Demo obj1;
    Demo obj2;

    cout<<"Size of object is:"<<sizeof(obj1)<<"\n";
    cout<<obj1.No1<<"\t"<<obj1.No2<<"\n";
    cout<<obj2.No1<<"\t"<<obj2.No2<<"\n";

    obj1.Fun();
    obj2.Fun();

    obj1.Gun();
    cout<<"value of X using object "<<obj1.x<<"\n";
    return 0;
}