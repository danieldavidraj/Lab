#include<stdio.h>
void main()
{
        int i,j;
        char s[100]="Hello";
        for(i=4;s[i]!='\0';i--)
        {
                for(j=0;j<=i;j++)
                {
                        printf("%c",s[j]);
                }
                printf("\n");
        }
}
