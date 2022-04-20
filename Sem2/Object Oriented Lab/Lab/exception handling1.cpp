#include<iostream>
using namespace std;
int main()
{
    try
    {
        int *p=new int[10000];
    }
    catch(){}
    catch(Exception &e)
    {
        cout<<e.what();
    }
}
