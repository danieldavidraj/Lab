#include<stdio.h>
#include<string.h>
void main()
{
        int i,j,k;
        char s[100],s1[100];
        printf("Enter the first string.......");
        gets(s);
        printf("Enter the second string.....");
        gets(s1);
        for(i=0;s1[i]!='\0';i++)
        {
                for(j=0;s[j]!='\0';j++)
                {
                        if(s1[i]==s[j])
                        {
                                s[j]='0';
                        }
                }
        }
        for(k=1;k<=5;k++)
        {
                for(i=0;s[i]!='\0';i++)
                {
                        if(s[i]=='0')
                        {
                                for(j=i;s[j-1]!='\0';j++)
                                {
                                        s[j]=s[j+1];
                                }
                        }
                }
        }
        printf("%s\n",s);
}
