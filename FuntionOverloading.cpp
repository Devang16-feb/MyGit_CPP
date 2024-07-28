#include<iostream>
using namespace std;

class Arithmatic
{
    public:
    //funtion same but prototype different 
      int Addition(int no1, int no2)    //Addition@2ii (Inside Happens)
      {
        return no1 + no2;
      }
      int Addition(int no1, int no2, int no3)   //Addition@3iii
      {
        return no1 + no2 + no3;
      }
      double Addition(double no1, double no2)    //Addition@2dd
      {
        return no1 + no2;
      }
      double Addition(double no1, double no2, double no3)  //Addition@3ddd
      {
        return no1+ no2 +no3;
      }
};

int main ()
{
    Arithmatic obj;

    cout<<obj.Addition(11,21)<<"\n";
    cout<<obj.Addition(11,21,51)<<"\n";
    cout<<obj.Addition(89.90,21.67)<<"\n";
    cout<<obj.Addition(89.90,45.67,21.67)<<"\n";


    return 0;
}