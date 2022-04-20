#include"one.h"
#include<iostream>
using namespace std;
void Date::getdate()
{
    l1:cout<<"Enter the date....";
    cin>>date;
    if(date<1 || date>31)
    {
        cout<<"Invalid";
        goto l1;
    }
}
void Date::getmonth()
{
    l2:cout<<"Enter the month....";
    cin>>month;
    if(month<1 || month>12)
    {
        cout<<"Invalid";
        goto l2;
    }
}
void Date::getyear()
{
    cout<<"Enter the year....";
    cin>>year;
}
void Date::print1()
{
    cout<<month<<"/"<<date<<"/"<<year<<endl;
}
void Date::print2()
{
    char a[12][10]={"January","February","march","April","May","june","July","August","September","October","November","December"};
    cout<<a[month-1]<<" "<<date<<","<<year<<endl;
}
void Date::print3()
{
    char a[12][10]={"January","February","march","April","May","june","July","August","September","October","November","December"};
    cout<<date<<" "<<a[month-1]<<" "","<<year<<endl;
}
