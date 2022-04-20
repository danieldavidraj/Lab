#include<stdio.h>
double power(double x,int n)
{
    if(n==0)
    {
        return 1;
    }
    else
    {
        return power(x,n-1)*x;
    }
}
void main()
{
    int n;
    double x;
    printf("Enter the values for x and n...");
    scanf("%lf%d",&x,&n);
    printf("%dth power %lf is %.2lf",n,x,power(x,n));
}
