#include<stdio.h>
struct set
{
    int x,y;
    char s[10];
};
int main()
{
    struct set *s1;
    printf("Enter elements of struct 1\n");
    //scanf("%d%d%s",s1->x,s1->y,s1->s);
    printf("%d\t%d\t%s\n",s1->x,s1->y,s1->s);
}
