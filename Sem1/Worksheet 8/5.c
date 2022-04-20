#include<stdio.h>
void main()
{
        int i;
        char s[100];
        printf("Enter the string.....");
        scanf("%[^\n]s",s);
        for(i=0;s[i]!='\0';i++)
        {
                if(s[i]>=65 && s[i]<=90)
                {
                        s[i]=s[i]+32;
                }
                else if(s[i]>=97 && s[i]<=122)
                {
                        s[i]=s[i]-32;
                }
                else
                {
                }
        }
        printf("The toggled string is %s\n",s);
}
