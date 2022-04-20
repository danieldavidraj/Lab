#include<stdio.h>
void main()
{
        int i,u=0,l=0,s=0;
        char c[100];
        printf("Enter the string.....");
        scanf("%[^\n]s",c);
        for(i=0;c[i]!='\0';i++)
        {
                if(c[i]>=65 && c[i]<=90)
                {
                        u++;
                }
                else if(c[i]>=97 && c[i]<=122)
                {
                        l++;
                }
                else
                {
                        s++;
                }
        }
        printf("Upper case:%d\nLower case:%d\nSpecial Characters:%d\n",u,l,s);
}
