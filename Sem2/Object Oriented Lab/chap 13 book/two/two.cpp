#include<iostream>
#include"two.h"
using namespace std;


Employee::Employee(string nam,int i,string departmen,string positio)
{
    name=nam;
    id=i;
    department=departmen;
    position=positio;
}
Employee::Employee(string nam,int i)
{
    name=nam;
    id=i;
}
