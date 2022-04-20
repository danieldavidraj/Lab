#include<iostream>
using namespace std;
class account
{
    public:
    float int_rate;
    int accnum;
    account():int_rate(8.5),accnum(100)                     //initializaton list
    {
    }
    account(float ir,float an):int_rate(ir),accnum(an)
    {
    }
};
int main()
{
    account a;
    cout<<a.int_rate<<endl<<a.accnum<<endl;
    account a1(10,7);
    cout<<a1.int_rate<<endl<<a1.accnum<<endl;
}
