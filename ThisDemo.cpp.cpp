#include<iostream>
using namespace std;

class Arithmatic
{
    public:
      int no1;
      int no2;

      Arithmatic(int A, int B)    // To intitialize Characteristics ,To Allocate the resorcess
      {
        no1 = A;
        no2 = B;
      }
      int Addition()     // int Addition(arithmatic * const this)
      {
        int Ans = 0;
        //Ans = no1 + no2;
        Ans = this->no1 + this->no2;
        return Ans;
      }

};

int main ()
{
    int Ret = 0;
    Arithmatic obj(21,11);

    Ret = obj.Addition();  // Ret = Addition(&obj);  100 Address
    //obj.  = Caller object
    cout<<"Addition is :"<<Ret<<"\n";

    return 0;
}