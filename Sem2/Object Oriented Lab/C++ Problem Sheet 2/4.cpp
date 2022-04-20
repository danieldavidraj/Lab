#include<iostream>
using namespace std;
class merge
{
        private:
        int a,b;
        float c,d;
        char e,f;
        int g[10],h[10];

        public:
        int get(int,int);
        float get(float,float);
        char get(char,char);
        int add(int,int);
        float add(float,float);
        char add(char,char);
        //int *add(*int,*int);
};
int mergeget
int merge::add(int a,int b)
{
    return a+b;
}
float merge::add(float c,float d)
{
    return c+d;
}
char merge::add(char e,char f)
{
    return e+f;
}
int main()
{
    merge m;
    cout<<"Enter the values";
    m.get();
    cout<<m.add(m.a,m.b);
    cout<<"\n"<<m.add(m.c,m.d);
    cout<<"\n"<<m.add(m.e,m.f);
}
