#include<stdio.h>
#include<string.h>
void main()
{
        int i,j,k,l,d,f=0,n;
        char s[100],s1[100],s2[100];
        printf("Enter the string....");
        gets(s);
        printf("Enter the sub-string....");
        gets(s1);
        l=strlen(s1);
        for(i=0;s1[i]!='\0';i++)
        {
                for(j=0;s[j]!='\0';j++)
                {
                        if(s1[i]==s[j])
                        {
                                d=j;
                                for(k=0;s1[k]!='\0';k++)
                                {
                                        s2[k]=s[d];
                                        d++;
                                }
                                s2[l]='\0';
                                n=strcmp(s1,s2);
                                if(n==0)
                                {
                                    printf("Yes");
                                    f=1;
                                    break;
                                }
                        }
                }
                if(f==1)
                {
                    break;
                }
        }
        if(f==0)
        {
            printf("no");
        }
}
