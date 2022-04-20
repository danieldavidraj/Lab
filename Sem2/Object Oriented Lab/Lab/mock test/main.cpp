#include"mock test.h"
#include <iostream>
#include<string.h>
using namespace std;

int main()
{
    int i,j,n,m;
    char college[20];
    cout<<"Enter number of events....";
    cin>>n;
    Event event[n];
    Number number[n];
    Participant participant[n][20];
    for(i=0;i<n;i++)
    {
        cout<<"Enter the name of event";
        event[i].getname();
        cout<<"Enter number of particpants.....";
        cin>>number[i].number;
        for(j=0;j<number[i].number;j++)
        {
            cout<<"Enter name of participant";
            cin>>participant[i][j].name;
            cout<<"Enter name of college";
            cin>>participant[i][j].college;
        }
    }
    cout<<"Enter name of college to find";
    cin>>college;
    for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
        {
            if(strcmp(participant[i][j].college,college)==0)
            {
                cout<<"Event Name:"<<event[i].printname()<<endl;
                cout<<"Name of participant:"<<participant[i][j].name<<endl;
                cout<<"Name of college:"<<participant[i][j].college<<endl;
            }
        }
    }
    cout<<Participant::number;
    return 0;
}
