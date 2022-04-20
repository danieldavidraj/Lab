#include<iostream>
using namespace std;
int triplebyvalue(int n)
{
    return n*n*n;
}
int triplebyreference(int *n)
{
    return (*n)*(*n)*(*n);
}
int main()
{
    int n;
    cout<<"Enter the number";
    cin>>n;
    cout<<triplebyvalue(n)<<"\n";
    cout<<triplebyreference(&n)<<"\n";
}
