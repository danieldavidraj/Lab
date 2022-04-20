#include <iostream>
#include"four.h"
using namespace std;
void Time::add(Time &t2,Time &t3)
{
    if(t2.second+second>=60)
    {
        t3.second=t2.second+second-60;
        t2.minute++;
    }
    else
    {
        t3.second=t2.second+second;
    }
    if(t2.minute+minute>=60)
    {
        t3.minute=t2.minute+minute-60;
        t2.hour++;
    }
    else
    {
        t3.minute=t2.minute+minute;
    }
    t3.hour=hour+t2.hour;
}
void Time::print()
{
    cout<<hour<<":"<<minute<<":"<<second<<endl;
}
