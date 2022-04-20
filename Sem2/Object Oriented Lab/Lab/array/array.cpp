#include<iostream>
using namespace std;
class student
{
    public:
    string name;
    float m;
    void read();
    float mark();
    string nam();
};
void student::read()
{
    cin>>name>>m;
}
string student::nam()
{
    return name;
}
float student::mark()
{
    return m;
}
float cal(student s[],int n)
{
    float sum=0,avg=0;
    for(int i=0;i<n;i++)
    {
        sum=sum+s[i].mark;
    }
    cout<<"The average is:"<<sum/n<<endl;
}
int main()
{
    student s[2];
    int n=2;
    for(int i=0;i<n;i++)
    {
        cout<<"Enter name and mark.......";
        s[i].read();
    }
    for(int i=0;i<n;i++)
    {
        cout<<"Name of the student:"<<s[i].nam<<endl<<"Mark:"<<s[i].mark<<endl;
    }
    cal(s,n);
}
