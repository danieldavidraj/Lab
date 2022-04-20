#include<stdio.h>
void main()
{
        int i,j,a=0,b=0,d,f=0;
        char c,s[100];
        printf("Enter a string......");
        scanf("%[^\n]s",s);
        c=s[0];
        for(i=0;s[i]!='\0';i++)
        {
                if(s[i]==c)
                {
                        a++;
                }
        }
        d=a;
        for(i=1;s[i]!='\0';i++)
        {
                b=0;
                for(j=0;s[j]!='\0';j++)
                {
                        if(s[i]==s[j])
                        {
                                b++;
                        }
                }
                if(b>a)
                {
                        a=b;
                        c=s[i];
                        f=1;
                }
        }

        if(f==1 || d!=1)
        {
                printf("%c is the highest occured string\n",c);
        }
        else
        {
                printf("All strings occur the same number of time\n");
        }
}

