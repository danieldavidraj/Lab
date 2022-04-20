#include <iostream>
#include"one.h"
using namespace std;

int main()
{
    int i,n,max=0,k=0;
    cout<<"Enter no. of countries.......";
    cin>>n;
    Country c[n];
    for(i=0;i<n;i++)
    {
        c[i].get();
    }
    for(i=0;i<n;i++)
    {
        if(c[i].givearea()>max)
        {
            max=c[i].givearea();
            k=i;
        }
    }
    cout<<"country with largest area:"<<c[k].givename()<<endl;
    max=0;
    for(i=0;i<n;i++)
    {
        if(c[i].givepop()>max)
        {
            max=c[i].givepop();
            k=i;
        }
    }
    cout<<"country with largest population:"<<c[k].givename()<<endl;
    max=0;
    for(i=0;i<n;i++)
    {
        if( (c[i].givepop()/c[i].givearea()) >max)
        {
            max=(c[i].givepop()/c[i].givearea());
            k=i;
        }
    }
    cout<<"country with largest population Density:"<<c[k].givename()<<endl;
    return 0;
}
