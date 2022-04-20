#include<stdio.h>
int Isvowel(char *c)
{
        int i,a=0;
        for(i=0;c[i]!='\0';i++)
        {
                if(c[i]=='a' || c[i]=='e' || c[i]=='i' || c[i]=='o' || c[i]=='u')
                {
                        a++;
                }
        }
        return a;
}
void main()
{
        int a;
        char s[100];
        printf("Enter the string....");
        scanf("%[^\n]s",s);
        a=Isvowel(s);
        printf("There are %d vowels\n",a);
}
