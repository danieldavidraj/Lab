#include<stdio.h>
void main()
{
        int i,a=0;
        char c,s[100];
        printf("Enter the string.....");
        scanf("%[^\n]s",s);
        printf("Enter the character to find.....");
        scanf("%*c%c",&c);
        for(i=0;s[i]!='\0';i++)
        {
                if(s[i]==c)
                {
                        a++;
                }
        }
        printf("%c occurs %d times\n",c,a);
}
