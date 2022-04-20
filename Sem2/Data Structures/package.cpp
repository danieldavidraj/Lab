#include<iostream>
using namespace std;
class Train
{
    public:
    int station;
    int time;
    Train *next;
    Train()
    {

    }
};
int main()
{
    int i;
    Train *train;
    train->station=1;
    train->time=9;
    train=train->next;
}
