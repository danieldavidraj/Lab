#include <iostream>
#include"two.h"
using namespace std;

int main()
{
    string name;
    int id;
    string depart;
    string pos;
    cin>>name>>id>>depart>>pos;
    Employee a(name,id,depart,pos);
    cout<<a.name<<"\t"<<a.id<<"\t"<<a.department<<"\t"<<a.position<<endl;
    Employee b(name,id);
    cout<<b.name<<"\t"<<b.id<<"\t"<<b.department<<"\t"<<b.position<<endl;
    Employee c;
    cout<<c.name<<"\t"<<c.id<<"\t"<<c.department<<"\t"<<c.position<<endl;
    return 0;
}
