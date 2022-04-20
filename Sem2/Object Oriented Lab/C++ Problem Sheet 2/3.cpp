#include<iostream>
using namespace std;
int main()
{
    int i,n,a=0,b=1,c;
    cout<<"Enter number of no.s=";
    cin>>n;
    cout<<a<<"\t"<<b<<"\t";
    for(i=0;i<n-2;i++)
    {
        c=a+b;
        cout<<c<<"\t";
        a=b;
        b=c;
    }
}
