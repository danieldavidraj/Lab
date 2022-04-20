#include<iostream>
using namespace std;
inline float funcirclearea(float r)
{
    return (22.0/7)*r*r;
}
int main()
{
    int r;
    cout<<"Enter radius of circle";
    cin>>r;
    cout<<"The area is:"<<funcirclearea(r)<<"\tsq.units\n";
}
