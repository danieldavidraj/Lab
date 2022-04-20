#include<stdio.h>
#include<string.h>
void main()
{
        char s[100];
        printf("Enter the string......");
        scanf("%[^\n]s",s);
        strrev(s);
        printf("%s\n",s);
}
