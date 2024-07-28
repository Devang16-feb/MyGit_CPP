#include<iostream>
using namespace std;

class Arithmatic
{
    public:
      int no1;
      int no2;

      Arithmatic()
      {
        no1 = 0;
        no2 = 0;
      }
      Arithmatic(int A, int B)    // To intitialize Characteristics ,To Allocate the resorcess
      {
        no1 = A;       // no1,no2 Charac. of class
        no2 = B;
      }
      int Addition()
      {
        int Ans = 0;   //local variable of funtion 
        Ans = no1 + no2;
        return Ans;
      }
      int Substraction()
      {
        int Ans = 0;
        Ans = no1 - no2;
        return Ans;
      }
};
int main ()
{
    int Value1 = 0,Value2 = 0,Ret = 0;

    cout<<"enter first number :\n";    
    cin>>Value1;

    cout<<"Enter the second Number :\n";
    cin>>Value2;

    Arithmatic obj(Value1, Value2);

    Ret = obj.Addition();
    cout<<"Addition is :"<<Ret<<"\n";

    Ret = obj.Substraction();
    cout<<"Substraction is :"<<Ret<<"\n";

    return 0;
}