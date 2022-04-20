#include<iostream>
using namespace std;
int main()
{
    int n,d,res;
    cin>>n>>d;
    try
    {
        if(d==0)
        {
            throw d;
            res=n/d;
        }
    }
    catch(int d)
    {
        cout<<"d";
    }
}
