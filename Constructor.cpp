#include<iostream>

using namespace std;
class Arithmatic
{
    public:
    int no1;
    int no2;

    Arithmatic()     // default constructor
    {
        cout<<"Inside Default constructor\n";
        no1 = 0;
        no2 = 0;
    }
    Arithmatic(int A, int B)    // parameterized constructor;
    {
        cout<<"Inside Parameterized constructor\n";
        no1 = A;
        no2 = B;
    }
    Arithmatic(Arithmatic &ref)  //Copy constructor;
    {
        cout<<"Inside Copy constructor\n";
        no1 = ref.no1;
        no2 = ref.no2;
    }
    ~Arithmatic()
    {
        cout<<"inside Destructor \n";
    }
};
int main()
{
    Arithmatic obj1;
    Arithmatic obj2(11,21);
    Arithmatic obj3(obj2);
    cout<<obj1.no1<<"\t"<<obj1.no2<<"\n";
    cout<<obj2.no1<<"\t"<<obj2.no2<<"\n";
    cout<<obj3.no1<<"\t"<<obj3.no2<<"\n";

    return 0;
}