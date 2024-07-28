#include<iostream>
using namespace std;

class Demo
{
    public:
    void fun(int*p)
    {
        cout<<"first defination\n";
    }
    void fun(float*p)
    {
        cout<<"second Defination\n";
    }
    void fun(int no)
    {
        cout<<"Third Defination\n";
    }
};
int main ()
{
    int no=11;
    float f=3.14;

    Demo obj;
    obj.fun(no);
    obj.fun(&no);
    obj.fun(&f);

    return 0;
}