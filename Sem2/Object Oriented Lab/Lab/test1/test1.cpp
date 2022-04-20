#include<iostream>
using namespace std;
class Test
{
    public:
    Test()
    {
        cout<<"Constructer called";
    }
};
int main()
{
    Test t1,*t2;
}
