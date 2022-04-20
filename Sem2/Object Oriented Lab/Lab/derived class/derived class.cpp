#include<iostream>
using namespace std;
class Employee
{
    int salary;
    public:
    Employee(int x)
    {
        salary=x;
    }
    virtual void print()
    {
        cout<<salary<<endl;
    }
};
class Student
{
    int mark;
    public:
    Student(int x)
    {
        mark=x;
    }
    virtual void print()
    {
        cout<<mark<<endl;
    }
};
class PartTime:public Employee,public Student
{
    int i;
    public:
    PartTime(int x):Employee(20),Student(10)
    {
        i=x;
    }
    void print()
    {
        cout<<i<<endl;
    }
};
int main()
{
    Student *s;
    Employee *e;
    PartTime pt(45);
    cout<<sizeof(Employee)<<endl;
    cout<<sizeof(Student)<<endl;
    cout<<sizeof(PartTime)<<sizeof(pt)<<endl;
    //pt.Employee::print();
    //pt.Student::print();
    s=&pt;
    e=&pt;
    e->print();
    s->print();
}
