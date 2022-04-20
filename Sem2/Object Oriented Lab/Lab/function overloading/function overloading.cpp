#include<iostream>
using namespace std;
void area(float r)
{
    cout<<"\n"<<3.14*r*r;
}
void area(float l,float b)
{
    cout<<"\n"<<l*b;
}
int main()
{
    area(2.5);
}
