#include<stdio.h>
void main()
{
        int i,n;
        char s[100];
        printf("Enter the string.....");
        scanf("%[^\n]s",s);
        for(i=0;s[i]!='\0';i++)
        {
                printf("%c\n",s[i]);
        }
}
