#include<stdio.h>
void main()
{
        int i;
        char s[100];
        printf("Enter a numeric string......");
        scanf("%s",s);
        printf("The converted integer is ");
        for(i=0;s[i]!='\0';i++)
        {
                s[i]=s[i]-'0';
                printf("%d",s[i]);
        }
        printf("\n");
}
