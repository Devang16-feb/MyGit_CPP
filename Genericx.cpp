#include<iostream>
using namespace std;   // Cin and Cout work

template<class T>
// T can be any Data type
T Addition(T No1, T No2)
{
    T Ans;
    Ans = No1 + No2;
    return Ans;
}

template<class T>
T Maximum(T No1, T No2)
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
    
    float X = 90.78f, Y = 60.99f, Ret = 0.0f;
    Ret = Addition(X,Y);
    cout<<"Addition is :"<<Ret<<"\n";
    Ret = Maximum(X,Y);
    cout<<"Largest number is:"<<Ret<<"\n";
    return 0;
}