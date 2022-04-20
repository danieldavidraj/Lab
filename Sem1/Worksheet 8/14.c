#include<stdio.h>
#include<string.h>
void main()
{
        int i,j,l;
        char c,s[100];
        printf("Enter the string.....");
        scanf("%[^\n]s",s);
        printf("Enter the character to remove......");
        scanf("%*c%c",&c);
        l=strlen(s);
        for(i=0;i<=l-1;i++)
        {
                for(j=0;j<=l-1;j++)
                {
                        if(s[j]==c)
                        {
                                s[j]=s[j+1];
                        }
                }
        }
        for(i=0;i>=0;i++)
        {
                if(s[i]==s[i+1])
                {
                        s[i+1]='\0';
                        break;
                }
        }
        printf("%s\n",s);
}
