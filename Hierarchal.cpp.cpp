#include<iostream>
using namespace std;
class Marvellous 
{
   public:
     int C;
     Marvellous()
     {
        C = 30;
        cout<<"Inside Marvellous Constructor\n";
     }
     ~Marvellous()
     {
        cout<<"Inside Marvelllous destructor\n";
     }
     void Sun()
     {
        cout<<"Inside sun of Marvellous\n";
     }
};
class Demo : public Marvellous
{
   public:
     int A;
     Demo()
     {
        A = 10;
        cout<<"Inside Demo Constructor\n";
     }
     ~Demo()
     {
        cout<<"Inside Demo Destructor\n";
     }
     void Fun()
     {
        cout<<"Inside Fun Demo\n";
     }
};

class Hello : public Marvellous
{
   public:
     int B;
     Hello()
     {
        B = 20;
        cout<<"Inside Hello Constructor\n";
     }
     ~Hello()
     {
        cout<<"Inside Hello Destructor\n";
     }
     void Gun()
     {
        cout<<"Inside Gun Demo\n";
     }
};


int main ()
{
    Demo dobj;
    Hello hobj;
    
    return 0;
}