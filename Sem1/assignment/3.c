#include<stdio.h>
int f(int n)
{
    if (n==0)
    {
        return 1;
    }
    else
    {
        return (f(n - 1)*n)+n;
    }
}
void main()
{
    int a;
    a=f(4);
    printf("%d",a);
}
