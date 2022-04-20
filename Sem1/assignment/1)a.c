#include<stdio.h>
void numpalindrome(int n)
{
    int m=n,i,x,k=0;
    for(i=0;n!=0;i++)
    {
        k=k*10;
        x=n%10;
        k=k+x;
        n=n/10;
    }
    if(k==m)
    {
        printf("It is a palindrome\n");
    }
    else
    {
        printf("It is not a palindrome\n");
    }
}
void main()
{
    int n;
    printf("Enter the number.....");
    scanf("%d",&n);
    numpalindrome(n);
}
