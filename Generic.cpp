#include<iostream>
using namespace std;

int Addition(int No1, int No2)
{
    int Ans;
    Ans = No1 + No2;
    return Ans;
}
int Maximum(int No1, int No2)
{
    if(No1>No2)
    { return No1; }
    else
    {  return No2; }
}
int main ()
{
    int A = 11, B = 21, Ans = 0;
    Ans = Addition(A,B);
    cout<<"Addition is :"<<Ans<<"\n";
    Ans = Maximum(A,B);
    cout<<"Largest number is:"<<Ans<<"\n";

    return 0;
}