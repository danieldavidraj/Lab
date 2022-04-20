#include<stdio.h>
#include<string.h>
void main()
{
        int i,n;
        char s[100];
        printf("Enter the string......");
        gets(s);
        printf("Enter 1 for upper case and 0 for lower case....");
        scanf("%d",&n);
        if(n==1)
        {
                strupr(s);
                printf("The string in capitals is ");
        }
        else
        {
                strlwr(s);
                printf("The string in small letters is ");
        }
        printf("%s\n",s);
}
