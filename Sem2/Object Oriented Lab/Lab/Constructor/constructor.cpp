#include<iostream>
using namespace std;
class point
{
    public:
    int x,y;
    static int count;
    point();
    point(point &p)
    {
        cout<<"inside copy constructor";
        x=p.x;
        y=p.y;
    }
};
int point::count=0;
point::point()
{
    count++;
    x=0;
    y=0;
}
int main()
{
    point p1,p2,p3;
    cout<<p1.x<<"\t"<<p1.y;
    cout<<"\n"<<point::count<<"\n";
    p1.x=3;
    p1.y=4;
    p3=p1;
    point p5=p1;
    cout<<"\n"<<p5.x<<"\t"<<p5.y;
    cout<<"\n"<<p5.x<<"\t"<<p5.y;
}
