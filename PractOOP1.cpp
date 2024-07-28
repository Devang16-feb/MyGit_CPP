#include<iostream>
using namespace std;
class Demo
{
    public:
      int no1 = 10;
      int no2 = 20;

      Demo()
      {
        cout<<"Inside Constructor !!\n";
      }
      ~Demo()
      {
        cout<<"Inside Destructor !!\n";
      }

      void Fun()
      {
        cout<<"inside Behavirial !!\n";
      }
};

int main ()
{
    cout<<"Insisde Main funtion !!\n";
    Demo obj1;
    cout<<"Value of No1 is:"<<obj1.no1<<"\n";
    cout<<"Value of No2 is:"<<obj1.no2<<"\n";
    obj1.Fun();
    return 0;
}