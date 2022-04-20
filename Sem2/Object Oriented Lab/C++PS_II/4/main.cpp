#include <iostream>
#include"four.h"
using namespace std;

int main()
{
    int hour,minute,second;
    cout<<"For t1:-"<<endl;
    cout<<"Hour:";
    cin>>hour;
    cout<<"Minute:";
    cin>>minute;
    cout<<"Second:";
    cin>>second;
    Time t1(hour,minute,second);
    t1.print();
    cout<<"For t2:-"<<endl;
    cout<<"Hour:";
    cin>>hour;
    cout<<"Minute:";
    cin>>minute;
    cout<<"Second:";
    cin>>second;
    Time t2(hour,minute,second);
    t2.print();
    Time t3;
    t1.add(t2,t3);
    t3.print();
    return 0;
}
