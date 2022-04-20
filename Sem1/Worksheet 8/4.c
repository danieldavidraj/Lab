#include<stdio.h>
#include<string.h>
void main()
{
        int i,f=0;
        char s[100];
        printf("Enter the string......");
        scanf("%[^\n]s",s);
        for(i=0;s[i]!='\0';i++)
        {
                if(s[i]>=90 && s[i]<=122)
                {
                        f=1;
                        break;
                }
        }
        if(f==1)
        {
            printf("Enter uppercase letters\n");
        }
        else
        {
            strlwr(s);
            printf("%s\n",s);
        }
}
