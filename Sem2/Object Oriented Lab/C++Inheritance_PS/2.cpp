#include<iostream>
using namespace std;
class Book
{
    string title;
    string author;
    public:
    void set()
    {
        cout<<"Enter the title:";
        cin.sync();
        getline(cin,title);
        cout<<"Enter the author name:";
        getline(cin,author);
    }
    void display()
    {
        cout<<"Title:"<<title<<endl;
        cout<<"Author:"<<author<<endl;
    }
};
class Fiction:public Book
{
    int level;
    public:
    void set()
    {
        Book::set();
        cout<<"Enter the reading level:";
        cin>>level;
    }
    void display()
    {
        Book::display();
        cout<<"Reading Level:"<<level<<endl;
    }
};
class NonFiction:public Book
{
    int number;
    public:
    void set()
    {
        Book::set();
        cout<<"Enter the number of page:";
        cin>>number;
    }
    void display()
    {
        Book::display();
        cout<<"Number of pages:"<<number<<endl;
    }
};
int main()
{
    Fiction f;
    NonFiction nf;
    f.set();
    nf.set();
    f.display();
    nf.display();
}
