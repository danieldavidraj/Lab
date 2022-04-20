#include<iostream>
using namespace std;
class Ship
{
    protected:
    string name;
    string year;
    public:
    void set()
    {
        cout<<"Enter the ship name:";
        cin.sync();
        getline(cin,name);
        cout<<"Enter the year:";
        getline(cin,year);
    }
    virtual void display()
    {
        cout<<"Ship Name:"<<name<<endl;
        cout<<"Year:"<<year<<endl;
    }
};
class CruiseShip:public Ship
{
    int maxnum;
    public:
    void set()
    {
        cout<<"Enter the maximum number:";
        cin>>maxnum;
    }
    void display()
    {
        cout<<name;
        cout<<"Maximum Number:"<<maxnum<<endl;
    }
};
class CargoShip:public Ship
{
    int capacity;
    public:
    void set()
    {
        cout<<"Enter the storage capacity:";
        cin>>capacity;
    }
    void display()
    {
        cout<<name;
        cout<<"Storage Capacity:"<<capacity<<endl;
    }
};
int main()
{
    Ship *s=new Ship;
    CruiseShip cruise;
    CargoShip cargo;
    s->set();
    cruise.set();
    cargo.set();
   // s->display();
    s=&cruise;
    s->display();
    s=&cargo;
    s->display();
}
