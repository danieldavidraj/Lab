#include<iostream>
using namespace std;
class Base
{
    public:
    Base(int a) : member(a)         //constructor
    {
        cout << "Base constructor called with " << a << endl;
    }
    int member;
};

void test(Base obj1)
{
    cout << "Base object's member = " << obj1.member;
}

int main()
{
    test(333);
}
