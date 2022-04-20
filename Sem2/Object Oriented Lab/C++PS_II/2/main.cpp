#include <iostream>
#include"two.h"
using namespace std;

int main()
{
    int i,n;
    cout<<"Enter number of donors.....";
    cin>>n;
    Donor d[n];
    for(i=0;i<n;i++)
    {
        d[i].get();
    }
    for(i=0;i<n;i++)
    {
        d[i].display(d[i].blood);
        d[i].display(d[i].age);
        d[i].display(d[i].sex,d[i].blood,d[i].age);
    }
    return 0;
}
