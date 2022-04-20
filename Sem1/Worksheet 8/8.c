#include<stdio.h>
void main()
{
        int i;
        char s[100];
        printf("Enter the string.....");
        scanf("%[^\n]s",s);
        for(i=0;s[i]!='\0';i++)
        {
                if(s[i]=='a' || s[i]=='e' || s[i]=='i' || s[i]=='o' || s[i]=='u')
                {
                        s[i]='*';
                }
                else
                {
                        s[i]='#';
                }
        }
        printf("%s\n",s);
}
