#include<iostream>
using namespace std;

class Demo
{
    public:
      const int X;  //Aleready Garbedge value is here(Somthing value)
      const int Y;
      int z;

      Demo(int i, int j, int k) :X(i), Y(j)  //Initialization list
      {
        cout<<"Inside Constructor\n";
        z = k;
         // here if we try to replaced it with this Garbedge value
         //Becaues of x and y is constant we cnat replaced it
      }
      
};
int main ()
{
    Demo obj1(11,21,51);

    cout<<obj1.X<<"\n";
    cout<<obj1.Y<<"\n";
    cout<<obj1.z<<"\n";

    // obj1.x++  NA
    // obj1.Y++  NA
    obj1.z++;  //A

    return 0;
}