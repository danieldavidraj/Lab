#include<iostream>
using namespace std;
class Publication
{
    string name;
    float price;
    public:
    void getdata()
    {
        cout<<"Enter the name:";
        cin>>name;
        cout<<"Enter the price:";
        cin>>price;
    }
    void putdata()
    {
        cout<<"Name:"<<name<<endl;
        cout<<"Price:"<<price<<endl;
    }
};
class Book:public Publication
{
    int count;
    public:
    void getdata()
    {
        cout<<"Enter the count:";
        cin>>count;
    }
    void putdata()
    {
        cout<<"Count:"<<count<<endl;
    }
};
class Tape:public Publication
{
    float time;
    public:
    void getdata()
    {
        cout<<"Enter the time:";
        cin>>time;
    }
    void putdata()
    {
        cout<<"Time:"<<time<<endl;
    }
};
int main()
{
    Book b;
    Tape t;
    b.getdata();
    t.getdata();
    b.putdata();
    t.putdata();
}
