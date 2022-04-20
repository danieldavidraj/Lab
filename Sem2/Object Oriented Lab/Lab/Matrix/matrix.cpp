#include<iostream>
using namespace std;
class matrix
{
    public:
        int **x;
        int m,n;
        static int count;
        matrix();
        matrix(int,int);
        void get(int,int);
        void element();
        void add();
};
matrix::matrix(){}
void matrix::get(int x,int y)
{
    m=x;
    n=y;
}
matrix::matrix(int m,int n)
{
    x=new int*[m];
    for(int i=0;i<m;i++)
    {
        x[i]=new int[n];
    }
}
void matrix::element()
{
    for(int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++)
        {
            cin>>x[i][j];
        }
    }
}
void matrix::add()
{
    for(int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++)
        {
            m3[i][j]=m1[i][j]+m2[i][j];
        }
    }
}
int ma
in()
{
    int m,n;
    cout<<"Enter rows and columns of matrix 1\n";
    cin>>m>>n;
                        matrix m1(m,n);
    m1.get(m,n);
    cout<<"Enter elements of matrix 1";
    m1.element();
    cout<<"Enter rows and columns of matrix 2\n";
    cin>>m>>n;
                        matrix m2(m,n);
    m2.get(m,n);
    cout<<"Enter elements of matrix 2";
    m2.element();
                        matrix m3;
    m3.get(m,n);
    m3.add(m,n,m1,m2);
}

