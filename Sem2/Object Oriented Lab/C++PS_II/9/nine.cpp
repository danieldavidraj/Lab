#include <iostream>
#include"nine.h"
using namespace std;
Coord::Coord()
{
    xval=0;
    yval=0;
}
void Coord::display()
{
    cout<<"x="<<xval<<endl<<"y="<<yval<<endl;
}
void convPol(Coord &c)
{
    c.xval=2;
    c.yval=5;
}
