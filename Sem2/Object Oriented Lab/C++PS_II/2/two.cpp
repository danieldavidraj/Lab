#include <iostream>
#include"two.h"
using namespace std;
void Donor::display(string blood)
{
    if(blood=="o+" || blood=="O+")
    {
        cout<<"number:"<<number<<endl<<"name:"<<name<<endl<<"address:"<<address<<endl;
    }
}
void Donor::display(int age)
{
    if(age>=16 && age<=25)
    {
        cout<<"number:"<<number<<endl<<"name:"<<name<<endl<<"address:"<<address<<endl;
    }
}
void Donor::display(string sex,string blood,int age)
{
    if(sex=="female" && (blood=="A" || blood=="a") && (age>=19 && age<=24))
    {
        cout<<"number:"<<number<<endl<<"name:"<<name<<endl<<"address:"<<address<<endl;
    }
}
void Donor::get()
{
    cout<<"number:";
    cin>>number;
    cout<<"name:";
    cin>>name;
    cout<<"age:";
    cin>>age;
    cout<<"address:";
    cin>>address;
    cout<<"sex:";
    cin>>sex;
    cout<<"blood:";
    cin>>blood;
}
