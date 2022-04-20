#include<stdio.h>
void main()
{
        int i,f=0;
        char s[100];
        printf("Enter the string.....");
        scanf("%[^\n]s",s);
        printf("The vowels are....\n");
        for(i=0;s[i]!='\0';i++)
        {
                if(s[i]=='a')
                {
                        printf("a\n");
                        f=1;
                }
                else if(s[i]=='e')
                {
                        printf("e\n");
                        f=1;
                }
                else if(s[i]=='i')
                {
                        printf("i\n");
                        f=1;
                }
                else if(s[i]=='o')
                {
                        printf("o\n");
                        f=1;
                }
                else if(s[i]=='u')
                {
                        printf("u\n");
                        f=1;
                }
                else
                {
                }
                 }
        if(f==0)
        {
                printf("There are no vowels\n");
        }
        f=0;
        printf("The consonants are.....\n");
        for(i=0;s[i]!='\0';i++)
        {
                if(s[i]!='a' && s[i]!='e' && s[i]!='i' && s[i]!='o' && s[i]!='u')
                {
                        printf("%c\n",s[i]);
                        f=1;
                }
        }
        if(f==0)
        {
                printf("There are no consonants\n");
        }
        printf("\n");
}
