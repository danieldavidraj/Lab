#include"mock test.h"
#include<iostream>
using namespace std;
void Event::getname()
{
    cin>>name;
}
void Event::printname()
{
    cout<<name;
}
int Participant::number=0;
Participant::Participant()
{
    number++;
}
