#include"one.h"
#include<iostream>
#include<string>
using namespace std;
void Country::get()
{
    cout<<"name:";
    cin>>name;
    cout<<"population:";
    cin>>population;
    cout<<"area:";
    cin>>area;
}
int Country::givearea()
{
    return area;
}
int Country::givepop()
{
    return population;
}
string Country::givename()
{
    return name;
}

